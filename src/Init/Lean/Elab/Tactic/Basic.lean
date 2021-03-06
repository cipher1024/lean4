/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura, Sebastian Ullrich
-/
prelude
import Init.Lean.Util.CollectMVars
import Init.Lean.Meta.Tactic.Assumption
import Init.Lean.Meta.Tactic.Intro
import Init.Lean.Elab.Util
import Init.Lean.Elab.Term

namespace Lean
namespace Elab

def goalsToMessageData (goals : List MVarId) : MessageData :=
MessageData.joinSep (goals.map $ MessageData.ofGoal) (Format.line ++ Format.line)

def Term.reportUnsolvedGoals (ref : Syntax) (goals : List MVarId) : TermElabM Unit :=
let tailRef := ref.getTailWithInfo.getD ref;
Term.throwError tailRef $ "unsolved goals" ++ Format.line ++ goalsToMessageData goals

namespace Tactic

structure Context extends toTermCtx : Term.Context :=
(main : MVarId)
(ref  : Syntax)

structure State extends toTermState : Term.State :=
(goals : List MVarId)

instance State.inhabited : Inhabited State := ⟨{ goals := [], toTermState := arbitrary _ }⟩

structure BacktrackableState :=
(env   : Environment)
(mctx  : MetavarContext)
(goals : List MVarId)

abbrev Exception := Elab.Exception

abbrev TacticM := ReaderT Context (EStateM Exception State)

abbrev Tactic := Syntax → TacticM Unit

protected def save (s : State) : BacktrackableState :=
{ .. s }

protected def restore (s : State) (bs : BacktrackableState) : State :=
{ env := bs.env, mctx := bs.mctx, goals := bs.goals, .. s }

instance : EStateM.Backtrackable BacktrackableState State :=
{ save    := Tactic.save,
  restore := Tactic.restore }

def liftTermElabM {α} (x : TermElabM α) : TacticM α :=
fun ctx s => match x ctx.toTermCtx s.toTermState with
 | EStateM.Result.ok a newS                         => EStateM.Result.ok a { toTermState := newS, .. s }
 | EStateM.Result.error (Term.Exception.ex ex) newS => EStateM.Result.error ex { toTermState := newS, .. s }
 | EStateM.Result.error Term.Exception.postpone _   => unreachable!

def liftMetaM {α} (ref : Syntax) (x : MetaM α) : TacticM α := liftTermElabM $ Term.liftMetaM ref x

def getEnv : TacticM Environment := do s ← get; pure s.env
def getMCtx : TacticM MetavarContext := do s ← get; pure s.mctx
@[inline] def modifyMCtx (f : MetavarContext → MetavarContext) : TacticM Unit := modify $ fun s => { mctx := f s.mctx, .. s }
def getLCtx : TacticM LocalContext := do ctx ← read; pure ctx.lctx
def getLocalInsts : TacticM LocalInstances := do ctx ← read; pure ctx.localInstances
def getOptions : TacticM Options := do ctx ← read; pure ctx.config.opts
def getMVarDecl (mvarId : MVarId) : TacticM MetavarDecl := do mctx ← getMCtx; pure $ mctx.getDecl mvarId
def instantiateMVars (ref : Syntax) (e : Expr) : TacticM Expr := liftTermElabM $ Term.instantiateMVars ref e
def addContext (msg : MessageData) : TacticM MessageData := liftTermElabM $ Term.addContext msg
def isExprMVarAssigned (mvarId : MVarId) : TacticM Bool := liftTermElabM $ Term.isExprMVarAssigned mvarId
def assignExprMVar (mvarId : MVarId) (val : Expr) : TacticM Unit := liftTermElabM $ Term.assignExprMVar mvarId val
def ensureHasType (ref : Syntax) (expectedType? : Option Expr) (e : Expr) : TacticM Expr := liftTermElabM $ Term.ensureHasType ref expectedType? e
def reportUnsolvedGoals (ref : Syntax) (goals : List MVarId) : TacticM Unit := liftTermElabM $ Term.reportUnsolvedGoals ref goals

/-- Collect unassigned metavariables -/
def collectMVars (ref : Syntax) (e : Expr) : TacticM (List MVarId) := do
e ← instantiateMVars ref e;
let s := Lean.collectMVars {} e;
pure s.result.toList

instance monadLog : MonadLog TacticM :=
{ getCmdPos   := do ctx ← read; pure ctx.cmdPos,
  getFileMap  := do ctx ← read; pure ctx.fileMap,
  getFileName := do ctx ← read; pure ctx.fileName,
  addContext  := addContext,
  logMessage  := fun msg => modify $ fun s => { messages := s.messages.add msg, .. s } }

def throwError {α} (ref : Syntax) (msgData : MessageData) : TacticM α := do
ref ← if ref.getPos.isNone then do ctx ← read; pure ctx.ref else pure ref;
liftTermElabM $ Term.throwError ref msgData

def throwUnsupportedSyntax {α} : TacticM α := liftTermElabM $ Term.throwUnsupportedSyntax

@[inline] def withIncRecDepth {α} (ref : Syntax) (x : TacticM α) : TacticM α := do
ctx ← read;
when (ctx.currRecDepth == ctx.maxRecDepth) $ throwError ref maxRecDepthErrorMessage;
adaptReader (fun (ctx : Context) => { currRecDepth := ctx.currRecDepth + 1, .. ctx }) x

protected def getCurrMacroScope : TacticM MacroScope := do ctx ← read; pure ctx.currMacroScope
protected def getMainModule     : TacticM Name       := do env ← getEnv; pure env.mainModule

@[inline] protected def withFreshMacroScope {α} (x : TacticM α) : TacticM α := do
fresh ← modifyGet (fun st => (st.nextMacroScope, { st with nextMacroScope := st.nextMacroScope + 1 }));
adaptReader (fun (ctx : Context) => { ctx with currMacroScope := fresh }) x

instance monadQuotation : MonadQuotation TacticM := {
  getCurrMacroScope   := Tactic.getCurrMacroScope,
  getMainModule       := Tactic.getMainModule,
  withFreshMacroScope := @Tactic.withFreshMacroScope
}

abbrev TacticTable := ElabFnTable Tactic
def mkBuiltinTacticTable : IO (IO.Ref TacticTable) :=  IO.mkRef {}
@[init mkBuiltinTacticTable] constant builtinTacticTable : IO.Ref TacticTable := arbitrary _

def addBuiltinTactic (k : SyntaxNodeKind) (declName : Name) (elab : Tactic) : IO Unit := do
m ← builtinTacticTable.get;
when (m.contains k) $
  throw (IO.userError ("invalid builtin tactic elaborator, elaborator for '" ++ toString k ++ "' has already been defined"));
builtinTacticTable.modify $ fun m => m.insert k elab

def declareBuiltinTactic (env : Environment) (kind : SyntaxNodeKind) (declName : Name) : IO Environment :=
let name := `_regBuiltinTactic ++ declName;
let type := mkApp (mkConst `IO) (mkConst `Unit);
let val  := mkAppN (mkConst `Lean.Elab.Tactic.addBuiltinTactic) #[toExpr kind, toExpr declName, mkConst declName];
let decl := Declaration.defnDecl { name := name, lparams := [], type := type, value := val, hints := ReducibilityHints.opaque, isUnsafe := false };
match env.addAndCompile {} decl with
-- TODO: pretty print error
| Except.error _ => throw (IO.userError ("failed to emit registration code for builtin tactic elaborator '" ++ toString declName ++ "'"))
| Except.ok env  => IO.ofExcept (setInitAttr env name)

@[init] def registerBuiltinTacticAttr : IO Unit :=
registerBuiltinAttribute {
 name  := `builtinTactic,
 descr := "Builtin tactic elaborator",
 add   := fun env declName arg persistent => do {
   unless persistent $ throw (IO.userError ("invalid attribute 'builtinTactic', must be persistent"));
   kind ← IO.ofExcept $ syntaxNodeKindOfAttrParam env `Lean.Parser.Tactic arg;
   match env.find? declName with
   | none  => throw $ IO.userError "unknown declaration"
   | some decl =>
     match decl.type with
     | Expr.const `Lean.Elab.Tactic.Tactic _ _ => declareBuiltinTactic env kind declName
     | _ => throw (IO.userError ("unexpected tactic elaborator type at '" ++ toString declName ++ "' `Tactic` expected"))
 },
 applicationTime := AttributeApplicationTime.afterCompilation
}

abbrev TacticAttribute := ElabAttribute Tactic
def mkTacticAttribute : IO TacticAttribute :=
mkElabAttribute Tactic `tactic `Lean.Parser.Tactic `Lean.Elab.Tactic.Tactic "tactic" builtinTacticTable
@[init mkTacticAttribute] constant tacticElabAttribute : TacticAttribute := arbitrary _

def logTrace (cls : Name) (ref : Syntax) (msg : MessageData) : TacticM Unit := liftTermElabM $ Term.logTrace cls ref msg
@[inline] def trace (cls : Name) (ref : Syntax) (msg : Unit → MessageData) : TacticM Unit := liftTermElabM $ Term.trace cls ref msg
@[inline] def traceAtCmdPos (cls : Name) (msg : Unit → MessageData) : TacticM Unit := liftTermElabM $ Term.traceAtCmdPos cls msg
def dbgTrace {α} [HasToString α] (a : α) : TacticM Unit :=_root_.dbgTrace (toString a) $ fun _ => pure ()

private def evalTacticUsing (s : State) (stx : Syntax) : List Tactic → TacticM Unit
| []                => do
  let refFmt := stx.prettyPrint;
  throwError stx ("unexpected syntax" ++ MessageData.nest 2 (Format.line ++ refFmt))
| (evalFn::evalFns) => catch (evalFn stx)
  (fun ex => match ex with
    | Exception.error _           =>
      match evalFns with
      | [] => throw ex
      | _  => do set s; evalTacticUsing evalFns
    | Exception.unsupportedSyntax => do set s; evalTacticUsing evalFns)

/- Elaborate `x` with `stx` on the macro stack -/
@[inline] def withMacroExpansion {α} (beforeStx afterStx : Syntax) (x : TacticM α) : TacticM α :=
adaptReader (fun (ctx : Context) => { macroStack := { before := beforeStx, after := afterStx } :: ctx.macroStack, .. ctx }) x

instance : MonadMacroAdapter TacticM :=
{ getEnv                 := getEnv,
  getCurrMacroScope      := getCurrMacroScope,
  getNextMacroScope      := do s ← get; pure s.nextMacroScope,
  setNextMacroScope      := fun next => modify $ fun s => { nextMacroScope := next, .. s },
  throwError             := @throwError,
  throwUnsupportedSyntax := @throwUnsupportedSyntax }

@[specialize] private def expandTacticMacroFns (evalTactic : Syntax → TacticM Unit) (stx : Syntax) : List Macro → TacticM Unit
| []    => throwError stx ("tactic '" ++ toString stx.getKind ++ "' has not been implemented")
| m::ms => do
  scp  ← getCurrMacroScope;
  catch
    (do stx' ← adaptMacro m stx; evalTactic stx')
    (fun ex => match ms with
      | [] => throw ex
      | _  => expandTacticMacroFns ms)

@[inline] def expandTacticMacro (evalTactic : Syntax → TacticM Unit) (stx : Syntax) : TacticM Unit := do
env ← getEnv;
let k        := stx.getKind;
let table    := (macroAttribute.ext.getState env).table;
let macroFns := (table.find? k).getD [];
expandTacticMacroFns evalTactic stx macroFns

partial def evalTactic : Syntax → TacticM Unit
| stx => withIncRecDepth stx $ withFreshMacroScope $ match stx with
  | Syntax.node k args =>
    if k == nullKind then
      -- list of tactics separated by `;` => evaluate in order
      -- Syntax quotations can return multiple ones
      stx.forSepArgsM evalTactic
    else do
      trace `Elab.step stx $ fun _ => stx;
      s ← get;
      let table := (tacticElabAttribute.ext.getState s.env).table;
      let k := stx.getKind;
      match table.find? k with
      | some evalFns => evalTacticUsing s stx evalFns
      | none         => expandTacticMacro evalTactic stx
  | _ => throwError stx "unexpected command"

/-- Adapt a syntax transformation to a regular tactic evaluator. -/
def adaptExpander (exp : Syntax → TacticM Syntax) : Tactic :=
fun stx => do
  stx' ← exp stx;
  withMacroExpansion stx stx' $ evalTactic stx'

@[inline] def withLCtx {α} (lctx : LocalContext) (localInsts : LocalInstances) (x : TacticM α) : TacticM α :=
adaptReader (fun (ctx : Context) => { lctx := lctx, localInstances := localInsts, .. ctx }) x

def resetSynthInstanceCache : TacticM Unit := liftTermElabM Term.resetSynthInstanceCache

@[inline] def resettingSynthInstanceCache {α} (x : TacticM α) : TacticM α := do
s ← get;
let savedSythInstance := s.cache.synthInstance;
resetSynthInstanceCache;
finally x (modify $ fun s => { cache := { synthInstance := savedSythInstance, .. s.cache }, .. s })

@[inline] def resettingSynthInstanceCacheWhen {α} (b : Bool) (x : TacticM α) : TacticM α :=
if b then resettingSynthInstanceCache x else x

def withMVarContext {α} (mvarId : MVarId) (x : TacticM α) : TacticM α := do
mvarDecl  ← getMVarDecl mvarId;
ctx       ← read;
let needReset := ctx.localInstances == mvarDecl.localInstances;
withLCtx mvarDecl.lctx mvarDecl.localInstances $ resettingSynthInstanceCacheWhen needReset x

def getGoals : TacticM (List MVarId) := do s ← get; pure s.goals
def setGoals (gs : List MVarId) : TacticM Unit := modify $ fun s => { goals := gs, .. s }
def pruneSolvedGoals : TacticM Unit := do
gs ← getGoals;
gs ← gs.filterM $ fun g => not <$> isExprMVarAssigned g;
setGoals gs
def getUnsolvedGoals : TacticM (List MVarId) := do pruneSolvedGoals; getGoals
def getMainGoal (ref : Syntax) : TacticM (MVarId × List MVarId) := do (g::gs) ← getUnsolvedGoals | throwError ref "no goals to be solved"; pure (g, gs)
def ensureHasNoMVars (ref : Syntax) (e : Expr) : TacticM Unit := do
e ← instantiateMVars ref e;
when e.hasMVar $ throwError ref ("tactic failed, resulting expression contains metavariables" ++ indentExpr e)

@[inline] def liftMetaTactic (ref : Syntax) (tactic : MVarId → MetaM (List MVarId)) : TacticM Unit := do
(g, gs) ← getMainGoal ref;
withMVarContext g $ do
  gs' ← liftMetaM ref $ tactic g;
  setGoals (gs' ++ gs)

def done (ref : Syntax) : TacticM Unit := do
gs ← getUnsolvedGoals;
unless gs.isEmpty $ reportUnsolvedGoals ref gs

def focus {α} (ref : Syntax) (tactic : TacticM α) : TacticM α := do
(g, gs) ← getMainGoal ref;
setGoals [g];
a ← tactic;
done ref;
setGoals gs;
pure a

/--
  Use `parentTag` to tag untagged goals at `newGoals`.
  If there are multiple new goals, they are named using `<parentTag>.<newSuffix>_<idx>` where `idx > 0`.
  If there is only one new goal, then we just use `parentTag` -/
def tagUntaggedGoals (parentTag : Name) (newSuffix : Name) (newGoals : List MVarId) : TacticM Unit := do
mctx ← getMCtx;
match newGoals with
| [g] => modifyMCtx $ fun mctx => if mctx.isAnonymousMVar g then mctx.renameMVar g parentTag else mctx
| _   => modifyMCtx $ fun mctx =>
  let (mctx, _) := newGoals.foldl
    (fun (acc : MetavarContext × Nat) (g : MVarId) =>
       let (mctx, idx) := acc;
       if mctx.isAnonymousMVar g then
         (mctx.renameMVar g (parentTag ++ newSuffix.appendIndexAfter idx), idx+1)
       else
         acc)
    (mctx, 1);
  mctx

@[builtinTactic seq] def evalSeq : Tactic :=
fun stx => (stx.getArg 0).forSepArgsM evalTactic

@[builtinTactic skip] def evalSkip : Tactic :=
fun stx => pure ()

@[builtinTactic traceState] def evalTraceState : Tactic :=
fun stx => do
  gs ← getUnsolvedGoals;
  logInfo stx (goalsToMessageData gs)

@[builtinTactic «assumption»] def evalAssumption : Tactic :=
fun stx => liftMetaTactic stx $ fun mvarId => do Meta.assumption mvarId; pure []

@[builtinTactic «intro»] def evalIntro : Tactic :=
fun stx => match_syntax stx with
  | `(tactic| intro)    => liftMetaTactic stx $ fun mvarId => do (_, mvarId) ← Meta.intro1 mvarId; pure [mvarId]
  | `(tactic| intro $h) => liftMetaTactic stx $ fun mvarId => do (_, mvarId) ← Meta.intro mvarId h.getId; pure [mvarId]
  | _                   => throwUnsupportedSyntax

private def getIntrosSize : Expr → Nat
| Expr.forallE _ _ b _ => getIntrosSize b + 1
| Expr.letE _ _ _ b _  => getIntrosSize b + 1
| _                    => 0

@[builtinTactic «intros»] def evalIntros : Tactic :=
fun stx => match_syntax stx with
  | `(tactic| intros)       => liftMetaTactic stx $ fun mvarId => do
    type ← Meta.getMVarType mvarId;
    type ← Meta.instantiateMVars type;
    let n := getIntrosSize type;
    (_, mvarId) ← Meta.introN mvarId n;
    pure [mvarId]
  | `(tactic| intros $ids*) => liftMetaTactic stx $ fun mvarId => do
    (_, mvarId) ← Meta.introN mvarId ids.size (ids.map Syntax.getId).toList;
    pure [mvarId]
  | _                       => throwUnsupportedSyntax

@[builtinTactic paren] def evalParen : Tactic :=
fun stx => evalTactic (stx.getArg 1)

@[builtinTactic nestedTacticBlock] def evalNestedTacticBlock : Tactic :=
fun stx => focus stx (evalTactic (stx.getArg 1))

@[builtinTactic nestedTacticBlockCurly] def evalNestedTacticBlockCurly : Tactic :=
evalNestedTacticBlock

@[builtinTactic «case»] def evalCase : Tactic :=
fun stx => match_syntax stx with
  | `(tactic| case $tag $tac) => do
     let tag := tag.getId;
     gs ← getUnsolvedGoals;
     some g ← gs.findM? (fun g => do mvarDecl ← getMVarDecl g; pure $ tag.isSuffixOf mvarDecl.userName) | throwError stx "tag not found";
     let gs := gs.erase g;
     setGoals [g];
     evalTactic tac;
     done stx;
     setGoals gs
  | _ => throwUnsupportedSyntax

@[builtinTactic «orelse»] def evalOrelse : Tactic :=
fun stx => match_syntax stx with
  | `(tactic| $tac1 <|> $tac2) => evalTactic tac1 <|> evalTactic tac2
  | _                          => throwUnsupportedSyntax

@[init] private def regTraceClasses : IO Unit := do
registerTraceClass `Elab.tactic;
pure ()

end Tactic
end Elab
end Lean
