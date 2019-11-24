/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
prelude
import Init.Lean.Meta.Basic
import Init.Lean.Meta.FunInfo

namespace Lean
namespace Meta
namespace DiscrTree

/-
  (Imperfect) discrimination trees.

  The edges are labeled by keys:
  - Constant names (and arity). Universe levels are ignored.
  - Free variables (and arity). Thus, an entry in the discrimination tree
    may reference hypotheses from the local context.
  - Literals
  - Star/Wildcard. We use them to represent metavariables and terms
    we want to ignore. We ignore implicit arguments and proofs.
  - Other. We use to represent other kinds of terms (e.g., nested lambda, forall, sort, etc).

  We reduce terms using `TransparencyMode.reducible`. Thus, all reducible
  definitions in an expression `e` are unfolded before we insert it into the
  discrimination tree.

  Recall that projections from classes are **NOT** reducible.
  For example, the expressions `HasAdd.add α (ringHasAdd ?α ?s) ?x ?x`
  and `HasAdd.add Nat Nat.hasAdd a b` generates paths with the following keys
  respctively
  ```
  ⟨HasAdd.add, 4⟩, *, *, *, *
  ⟨HasAdd.add, 4⟩, *, *, ⟨a,0⟩, ⟨b,0⟩
  ```
  That is, we don't reduce `HasAdd.add Nat Nat.HasAdd a b` into `Nat.add a b`.
  We say the `HasAdd.add` applications are the de-facto canonical forms in
  the metaprogramming framework.
  Moreover, it is the metaprammer resposability to re-pack applications such as
  `Nat.add a b` into `HasAdd.add Nat Nat.hasAdd a b`.

  Remark: we store the arity in the keys
  1- To be able to implement the "skip" operation when retrieving "candidate"
     unifiers.
  2- Distinguish partial applications `f a`, `f a b`, and `f a b c`.
-/

inductive Key
| const : Name → Nat → Key
| fvar  : Name → Nat → Key
| lit   : Literal → Key
| star  : Key
| other : Key

instance Key.inhabited : Inhabited Key := ⟨Key.star⟩

def Key.hash : Key → USize
| Key.const n a => mixHash 5237 $ mixHash (hash n) (hash a)
| Key.fvar n a  => mixHash 3541 $ mixHash (hash n) (hash a)
| Key.lit v     => mixHash 1879 $ hash v
| Key.star      => 7883
| Key.other     => 2411

instance Key.hashable : Hashable Key := ⟨Key.hash⟩

def Key.beq : Key → Key → Bool
| Key.const c₁ a₁, Key.const c₂ a₂ => c₁ == c₂ && a₁ == a₂
| Key.fvar c₁ a₁,  Key.fvar c₂ a₂  => c₁ == c₂ && a₁ == a₂
| Key.lit v₁,      Key.lit v₂      => v₁ == v₂
| Key.star,        Key.star        => true
| Key.other,       Key.other       => true
| _,                _              => false

instance Key.hasBeq : HasBeq Key := ⟨Key.beq⟩

def Key.lt : Key → Key → Bool
| Key.star,        Key.star        => false
| Key.star,        _               => true
| Key.other,       Key.star        => false
| Key.other,       Key.other       => false
| Key.other,       _               => true
| Key.lit v₁,      Key.lit v₂      => v₁ < v₂
| Key.lit _,       Key.const _ _   => true
| Key.lit _,       Key.fvar _ _    => true
| Key.lit _,       _               => false
| Key.fvar n₁ a₁,  Key.fvar n₂ a₂  => Name.quickLt n₁ n₂ || (n₁ == n₂ && a₁ < a₂)
| Key.fvar _ _,    Key.const _ _   => true
| Key.fvar _ _,    _               => false
| Key.const n₁ a₁, Key.const n₂ a₂ => Name.quickLt n₁ n₂ || (n₁ == n₂ && a₁ < a₂)
| Key.const _ _,    _              => false

instance Key.hasLess : HasLess Key := ⟨fun a b => Key.lt a b⟩

def Key.format : Key → Format
| Key.star                   => "*"
| Key.other                  => "◾"
| Key.lit (Literal.natVal v) => fmt v
| Key.lit (Literal.strVal v) => repr v
| Key.const k _              => fmt k
| Key.fvar k _               => fmt k

instance Key.hasFormat : HasFormat Key := ⟨Key.format⟩

inductive Trie (α : Type)
| node (vs : Array α) (children : Array (Key × Trie)) : Trie

instance Trie.inhabited {α} : Inhabited (Trie α) := ⟨Trie.node #[] #[]⟩

end DiscrTree

open DiscrTree

structure DiscrTree (α : Type) :=
(root : PersistentHashMap Key (Trie α) := {})

namespace DiscrTree

def empty {α} : DiscrTree α := { root := {} }

/- The discrimination tree ignores implicit arguments and proofs.
   We use the following auxiliary id as a "mark". -/
private def tmpMVarId : Name := `_discr_tree_tmp
private def tmpStar := mkMVar tmpMVarId

private partial def pushArgsAux (infos : Array ParamInfo) : Nat → Expr → Array Expr → MetaM (Array Expr)
| i, Expr.app f a _, todo =>
  if h : i < infos.size then
    let info := infos.get ⟨i, h⟩;
    if info.implicit || info.instImplicit || info.prop then
      pushArgsAux (i-1) f (todo.push tmpStar)
    else
      pushArgsAux (i-1) f (todo.push a)
  else
    pushArgsAux (i-1) f (todo.push a)
| _, _, todo => pure todo

private def pushArgs (todo : Array Expr) (e : Expr) : MetaM (Key × Array Expr) :=
do e ← whnf e;
   let fn    := e.getAppFn;
   let push (k : Key) (nargs : Nat) : MetaM (Key × Array Expr) := do {
     info ← getFunInfoNArgs fn nargs;
     todo ← pushArgsAux info.paramInfo (nargs-1) e todo;
     pure (k, todo)
   };
   match fn with
   | Expr.lit v _       => pure (Key.lit v, todo)
   | Expr.const c _ _   => let nargs := e.getAppNumArgs; push (Key.const c nargs) nargs
   | Expr.fvar fvarId _ => let nargs := e.getAppNumArgs; push (Key.fvar fvarId nargs) nargs
   | Expr.mvar mvarId _ =>
     if mvarId == tmpMVarId then
       -- We use `tmp to mark implicit arguments and proofs
       pure (Key.star, todo)
     else condM (isReadOnlyOrSyntheticExprMVar mvarId)
       (pure (Key.other, todo))
       (pure (Key.star, todo))
   | _                  => pure (Key.other, todo)

private partial def createNodes {α} (v : α) : Array Expr → MetaM (Trie α)
| todo =>
  if todo.isEmpty then pure $ Trie.node #[v] #[]
  else do
    let e    := todo.back;
    let todo := todo.pop;
    (k, todo) ← pushArgs todo e;
    c ← createNodes todo;
    pure $ Trie.node #[] #[(k, c)]

private def insertVal {α} [HasBeq α] (vs : Array α) (v : α) : Array α :=
if vs.contains v then vs else vs.push v

private partial def insertAux {α} [HasBeq α] (v : α) : Array Expr → Trie α → MetaM (Trie α)
| todo, Trie.node vs cs =>
  if todo.isEmpty then
    pure $ Trie.node (insertVal vs v) cs
  else do
    let e    := todo.back;
    let todo := todo.pop;
    (k, todo) ← pushArgs todo e;
    c ← cs.binInsertM
        (fun a b => a.1 < b.1)
        (fun ⟨_, s⟩ => do c ← insertAux todo s; pure (k, c)) -- merge with existing
        (fun _ => do c ← createNodes v todo; pure (k, c))
        (k, arbitrary _);
    pure $ Trie.node vs c

private def initCapacity := 16

def insert {α} [HasBeq α] (d : DiscrTree α) (e : Expr) (v : α) : MetaM (DiscrTree α) :=
usingTransparency TransparencyMode.reducible $ do
  (k, todo) ← pushArgs (Array.mkEmpty initCapacity) e;
  match d.root.find k with
  | none => do
    c ← createNodes v todo;
    pure $ { root := d.root.insert k c }
  | some c => do
    c ← insertAux v todo c;
    pure $ { root := d.root.insert k c }

partial def Trie.format {α} [HasFormat α] : Trie α → Format
| Trie.node vs cs => Format.group $ Format.paren $
  "node" ++ (if vs.isEmpty then Format.nil else " " ++ fmt vs)
  ++ Format.join (cs.toList.map $ fun ⟨k, c⟩ => Format.line ++ Format.paren (fmt k ++ " => " ++ Trie.format c))

instance Trie.hasFormat {α} [HasFormat α] : HasFormat (Trie α) := ⟨Trie.format⟩

partial def format {α} [HasFormat α] (d : DiscrTree α) : Format :=
let (_, r) := d.root.foldl
  (fun (p : Bool × Format) k c =>
    (false, p.2 ++ (if p.1 then Format.line else Format.nil) ++ Format.paren (fmt k ++ " => " ++ fmt c)))
  (true, Format.nil);
Format.group r

instance DiscrTree.hasFormat {α} [HasFormat α] : HasFormat (DiscrTree α) := ⟨format⟩

end DiscrTree
end Meta
end Lean