// Lean compiler output
// Module: Init.Lean.Elab.TermApp
// Imports: Init.Lean.Elab.Term
#include "runtime/lean.h"
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_Elab_Term_addNamedArg___closed__5;
lean_object* l_Lean_Elab_Term_getEnv___rarg(lean_object*);
extern lean_object* l_Lean_Name_toString___closed__1;
lean_object* l_List_foldlM___main___at___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_fieldIdxKind;
lean_object* l___private_Init_Lean_Elab_TermApp_22__elabAppFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_20__elabAppLVals___closed__1;
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_26__elabAppAux___closed__1;
lean_object* l_Lean_Syntax_isNatLitAux(lean_object*, lean_object*);
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabChoice___closed__3;
extern lean_object* l_Lean_Parser_Term_explicit___elambda__1___closed__2;
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabRawIdent___closed__2;
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabRawIdent___closed__1;
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Lean_Elab_Term_instantiateMVars(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_15__resolveLValLoop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_pure___at___private_Init_Lean_Elab_TermApp_27__expandApp___spec__2(lean_object*);
lean_object* l_Lean_Elab_Term_mkFreshExprMVar(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_unreachable_x21___rarg(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Elab_Term_elabExplicitUniv___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findIdxAux___main___at___private_Init_Lean_Elab_TermApp_18__addLValArg___main___spec__1___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_fieldIdxKind___closed__2;
extern lean_object* l_Lean_MessageData_ofList___closed__3;
lean_object* l_Array_eraseIdx___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_inferType(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_4__mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FindMVar_main___main___at___private_Init_Lean_Elab_TermApp_8__hasTypeMVar___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_27__expandApp___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Format_pretty(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__10;
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabId___closed__1;
extern lean_object* l_Option_get_x21___rarg___closed__3;
lean_object* l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__23;
lean_object* l_ReaderT_pure___at___private_Init_Lean_Elab_TermApp_27__expandApp___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__1;
lean_object* l___private_Init_Lean_Elab_TermApp_25__mergeFailures___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_19__elabAppLValsAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabId___closed__2;
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_identKind___closed__2;
extern lean_object* l_Prod_HasRepr___rarg___closed__1;
lean_object* l_List_foldlM___main___at___private_Init_Lean_Elab_TermApp_21__elabAppFnId___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_21__elabAppFnId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__13;
extern lean_object* l_PersistentHashMap_mkCollisionNode___rarg___closed__1;
lean_object* l_Lean_Elab_getPosition___at___private_Init_Lean_Elab_TermApp_24__toMessageData___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabProj___closed__3;
extern lean_object* l_Array_empty___closed__1;
lean_object* l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__14;
lean_object* lean_environment_find(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__5;
lean_object* l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__28;
lean_object* l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__18;
lean_object* l___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___closed__1;
lean_object* l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__15;
lean_object* l_List_append___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_unfoldDefinition_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__2;
lean_object* l_Array_umapMAux___main___at___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___spec__2(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_19__elabAppLValsAux___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_19__elabAppLValsAux___main___closed__1;
lean_object* l___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___closed__3;
lean_object* l_Lean_FindMVar_main___main___at___private_Init_Lean_Elab_TermApp_9__hasOnlyTypeMVar___spec__1(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_namedArgument___elambda__1___closed__2;
lean_object* l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__7;
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabRawIdent(lean_object*);
lean_object* lean_local_ctx_find_from_user_name(lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_NamedArg_hasToString(lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_12__elabAppArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_18__addLValArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_28__regTraceClasses(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Array_findIdxAux___main___at___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_26__elabAppAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getOptParamDefault_x3f(lean_object*);
lean_object* l_Lean_Expr_getAppFn___main(lean_object*);
lean_object* l_PersistentArray_push___rarg(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__1;
lean_object* l_Lean_Elab_Term_addNamedArg___closed__6;
lean_object* l_Lean_FindMVar_main___main___at___private_Init_Lean_Elab_TermApp_8__hasTypeMVar___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__12;
lean_object* l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__25;
lean_object* l___private_Init_Lean_Elab_TermApp_26__elabAppAux___closed__2;
extern lean_object* l_Lean_Parser_Term_sort___elambda__1___closed__2;
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_Elab_TermApp_22__elabAppFn___main___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_4__mkArrow___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_19__elabAppLValsAux___main___closed__2;
lean_object* l_Lean_Elab_Term_NamedArg_inhabited;
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabId___closed__3;
extern lean_object* l_Lean_mkAppStx___closed__8;
lean_object* l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__9;
lean_object* l___private_Init_Lean_Elab_TermApp_25__mergeFailures___rarg___closed__2;
lean_object* l_Array_umapMAux___main___at___private_Init_Lean_Elab_TermApp_25__mergeFailures___spec__1___closed__1;
lean_object* l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__9;
lean_object* l___private_Init_Lean_Elab_TermApp_20__elabAppLVals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Array_forMAux___main___at___private_Init_Lean_Elab_TermApp_1__synthesizeAppInstMVars___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabRawIdent___closed__3;
extern lean_object* l_Lean_mkAppStx___closed__7;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Array_foldlStepMAux___main___at_Lean_Syntax_foldSepRevArgsM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_16__resolveLVal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__4;
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabArrayRef___closed__3;
lean_object* l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__3;
lean_object* l_Lean_Elab_Term_getOptions(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__27;
extern lean_object* l_Lean_mkTermIdFromIdent___closed__2;
lean_object* l___private_Init_Lean_Elab_TermApp_8__hasTypeMVar___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_25__mergeFailures___rarg___closed__3;
extern lean_object* l_Lean_Parser_Term_proj___elambda__1___closed__2;
lean_object* l___private_Init_Lean_Elab_TermApp_1__synthesizeAppInstMVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__4;
lean_object* l_Array_umapMAux___main___at___private_Init_Lean_Elab_TermApp_25__mergeFailures___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_15__resolveLValLoop___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Array_HasRepr___rarg___closed__1;
lean_object* l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__2;
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabArrayRef___closed__1;
extern uint8_t l_Lean_Elab_Term_elabParen___closed__4;
lean_object* l_Lean_Elab_Term_elabLevel(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__5;
lean_object* l___private_Init_Lean_Elab_TermApp_3__elabArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_declareBuiltinTermElab___closed__3;
lean_object* l___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkProj(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabArrayRef(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkFreshAnonymousName___rarg(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_Elab_TermApp_27__expandApp___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_contains___at___private_Init_Lean_Elab_TermApp_8__hasTypeMVar___spec__1(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_19__elabAppLValsAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_toString___at_Lean_Elab_OpenDecl_HasToString___spec__2(lean_object*);
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabChoice___closed__2;
lean_object* l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__19;
lean_object* l_Array_filterAux___main___at___private_Init_Lean_Elab_TermApp_23__getSuccess___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__3;
lean_object* l_Lean_Elab_Term_getLevel(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_21__elabAppFnId___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabExplicit(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getCurrNamespace(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_throwUnsupportedSyntax___rarg(lean_object*);
extern lean_object* l_Lean_choiceKind___closed__2;
extern lean_object* l_Lean_MessageData_Inhabited;
lean_object* l_Lean_Elab_Term_elabId(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__5;
lean_object* l_Array_contains___at___private_Init_Lean_Elab_TermApp_8__hasTypeMVar___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Name_append___main(lean_object*, lean_object*);
lean_object* l_Array_shrink___main___rarg(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_13__throwLValError___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at___private_Init_Lean_Elab_TermApp_25__mergeFailures___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_isType(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__21;
lean_object* l___private_Init_Lean_Elab_TermApp_20__elabAppLVals___closed__3;
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabChoice___closed__1;
lean_object* l_Lean_Elab_Term_addNamedArg___closed__3;
lean_object* l___private_Init_Lean_Elab_TermApp_22__elabAppFn___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_mkConst___closed__4;
lean_object* l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__6;
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabArrayRef___closed__2;
lean_object* l___private_Init_Lean_Elab_TermApp_15__resolveLValLoop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_NamedArg_inhabited___closed__1;
lean_object* l_Lean_Elab_Term_elabExplicitUniv___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_Arg_hasToString(lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_20__elabAppLVals___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTermAux___main(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_repr(lean_object*);
uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_20__elabAppLVals___closed__2;
lean_object* l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__6;
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__2;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
extern lean_object* l_Lean_choiceKind;
lean_object* l_Lean_Elab_Term_throwError___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__17;
lean_object* l_Lean_Elab_Term_elabAtom(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_resolveName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getStructureFields(lean_object*, lean_object*);
lean_object* l_List_foldlM___main___at___private_Init_Lean_Elab_TermApp_21__elabAppFnId___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_17__mkBaseProjections(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabSortApp___closed__1;
lean_object* l___private_Init_Lean_Elab_TermApp_13__throwLValError___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_addNamedArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_24__toMessageData(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Exception_toTraceMessageData___closed__4;
uint8_t l___private_Init_Lean_Elab_TermApp_9__hasOnlyTypeMVar(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__8;
extern lean_object* l_Lean_Options_empty;
lean_object* lean_expr_dbg_to_string(lean_object*);
lean_object* l_Lean_Elab_Term_elabApp(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_24__toMessageData___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getPathToBaseStructure_x3f(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Init_Lean_Elab_TermApp_8__hasTypeMVar(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_27__expandApp(lean_object*, lean_object*, lean_object*);
uint8_t l_coeDecidableEq(uint8_t);
lean_object* l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__1;
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_Elab_TermApp_22__elabAppFn___main___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_isEmpty___rarg(lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__12;
lean_object* l___private_Init_Lean_Elab_TermApp_24__toMessageData___closed__2;
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_Elab_Term_elabChoice(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldlM___main___at___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___spec__1___closed__1;
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabApp(lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__7;
lean_object* l_Array_umapMAux___main___at___private_Init_Lean_Elab_TermApp_26__elabAppAux___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_formatEntry___closed__1;
extern lean_object* l_Lean_Elab_Term_TermElabResult_inhabited;
uint8_t l_Lean_Expr_Data_binderInfo(uint64_t);
lean_object* l_Lean_Elab_Term_TermElabM_inhabited___boxed(lean_object*, lean_object*);
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabExplicit___closed__1;
extern lean_object* l_Lean_Parser_Term_arrayRef___elambda__1___closed__2;
lean_object* l_Lean_Name_replacePrefix___main(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_26__elabAppAux___closed__3;
lean_object* l___private_Init_Lean_Elab_TermApp_23__getSuccess(lean_object*);
lean_object* l_List_foldlM___main___at___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___spec__1___closed__2;
lean_object* l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__2;
lean_object* l_Lean_Elab_Term_mkConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_9__hasOnlyTypeMVar___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabProj(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofArray(lean_object*);
lean_object* l_Array_forMAux___main___at___private_Init_Lean_Elab_TermApp_15__resolveLValLoop___main___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findIdxAux___main___at___private_Init_Lean_Elab_TermApp_18__addLValArg___main___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_28__regTraceClasses___closed__1;
lean_object* l_Lean_Elab_Term_isDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabExplicit___closed__2;
lean_object* l_Array_findIdxAux___main___at___private_Init_Lean_Elab_TermApp_7__getForallBody___main___spec__1___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Option_HasRepr___rarg___closed__3;
lean_object* l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabExplicit(lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__8;
extern lean_object* l_Lean_Meta_Exception_mkAppTypeMismatchMessage___closed__8;
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_addNamedArg___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabId(lean_object*);
extern lean_object* l_Lean_Syntax_inhabited;
lean_object* l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__11;
lean_object* l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__3;
lean_object* l___private_Init_Lean_Elab_TermApp_18__addLValArg___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabSortApp___closed__2;
lean_object* l___private_Init_Lean_Elab_TermApp_6__isAutoOrOptParam___boxed(lean_object*);
uint8_t l_Lean_BinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Elab_Term_elabSortApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabProj___closed__1;
lean_object* l_Lean_FindMVar_main___main___at___private_Init_Lean_Elab_TermApp_9__hasOnlyTypeMVar___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__5;
lean_object* l_Lean_mkLevelSucc(lean_object*);
lean_object* l_Lean_Elab_Term_getLCtx(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__20;
lean_object* l_Array_forMAux___main___at___private_Init_Lean_Elab_TermApp_1__synthesizeAppInstMVars___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__1;
lean_object* l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__10;
lean_object* l_Lean_Elab_Term_elabSortApp(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabExplicit___closed__3;
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabProj___closed__2;
lean_object* l___private_Init_Lean_Elab_TermApp_22__elabAppFn___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_24__toMessageData___closed__1;
lean_object* l_Lean_Syntax_getArgs(lean_object*);
uint8_t l_Lean_BinderInfo_isExplicit(uint8_t);
lean_object* l_Lean_Elab_Term_registerSyntheticMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeInstMVarCore(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__4;
lean_object* l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__7;
lean_object* l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_16__resolveLVal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabChoice(lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_Elab_TermApp_27__expandApp___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_15__resolveLValLoop___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getPos___at_Lean_Elab_Term_throwError___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__26;
lean_object* l___private_Init_Lean_Elab_TermApp_25__mergeFailures(lean_object*);
lean_object* l_Lean_Elab_Term_whnfCore(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabArrayRef(lean_object*);
extern lean_object* l___private_Init_Util_1__mkPanicMessage___closed__2;
lean_object* l_Lean_Elab_Term_elabExplicitUniv(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_tryPostponeIfMVar(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findIdxAux___main___at___private_Init_Lean_Elab_TermApp_7__getForallBody___main___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabApp___closed__3;
lean_object* l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__24;
lean_object* l_Lean_mkForall(lean_object*, uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lean_mkAppStx___closed__9;
lean_object* l_Lean_Elab_Term_whnfForall(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at___private_Init_Lean_Elab_TermApp_22__elabAppFn___main___spec__1(lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_12__elabAppArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_2__ensureArgType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_addNamedArg___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_18__addLValArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_consumeMData___main(lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__6;
lean_object* l_Lean_Elab_Term_addNamedArg___closed__1;
lean_object* l_Array_toList___rarg(lean_object*);
uint8_t l___private_Init_Lean_Elab_TermApp_6__isAutoOrOptParam(lean_object*);
lean_object* l_Lean_Elab_Term_addNamedArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_addBuiltinTermElab(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_Elab_TermApp_8__hasTypeMVar___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabApp___closed__2;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_25__mergeFailures___rarg___closed__1;
lean_object* l_Lean_Elab_Term_Arg_inhabited___closed__1;
lean_object* l_Lean_Elab_Term_mkFreshLevelMVar(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___closed__2;
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabApp___closed__1;
lean_object* l___private_Init_Lean_Elab_TermApp_25__mergeFailures___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__3;
lean_object* l___private_Init_Lean_Elab_TermApp_13__throwLValError(lean_object*);
lean_object* l_Array_findIdxAux___main___at___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_addNamedArg___closed__2;
extern lean_object* l_Lean_Meta_Exception_toStr___closed__6;
uint8_t l_Lean_Position_DecidableEq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
extern lean_object* l_Lean_mkOptionalNode___closed__2;
lean_object* l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__11;
lean_object* l___private_Init_Lean_Elab_TermApp_22__elabAppFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_5__tryCoeFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabProj(lean_object*);
lean_object* l_Lean_Syntax_formatStxAux___main(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Nat_Inhabited;
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___rarg(lean_object*);
lean_object* l_List_map___main___at___private_Init_Lean_Elab_TermApp_21__elabAppFnId___spec__1(lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_applyResult(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithSep___main(lean_object*, lean_object*);
extern lean_object* l___private_Init_Lean_Elab_Util_8__regTraceClasses___closed__1;
lean_object* l_Lean_Elab_Term_elabRawIdent(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isStructureLike(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__22;
lean_object* l_Lean_indentExpr(lean_object*);
extern lean_object* l___private_Init_Lean_Meta_Tactic_Apply_7__reorderNonDependentFirst___closed__1;
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabSortApp(lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_1__synthesizeAppInstMVars(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_ensureHasTypeAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_Elab_TermApp_8__hasTypeMVar___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_insertAt___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_pure___at___private_Init_Lean_Elab_TermApp_27__expandApp___spec__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_findField_x3f___main(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__6;
extern lean_object* l_Lean_Parser_Term_sortApp___elambda__1___closed__2;
lean_object* l_Lean_Name_components(lean_object*);
lean_object* l_Array_forMAux___main___at___private_Init_Lean_Elab_TermApp_15__resolveLValLoop___main___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Elab_Term_elabExplicitUniv___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_19__elabAppLValsAux___main(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_addNamedArg___closed__4;
lean_object* l___private_Init_Lean_Elab_TermApp_10__propagateExpectedType(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_7__getForallBody___main(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabSortApp___closed__3;
uint8_t l_Lean_isStructure(lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__16;
lean_object* l___private_Init_Lean_Elab_TermApp_14__resolveLValAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__4;
lean_object* l___private_Init_Lean_Elab_TermApp_7__getForallBody(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_Arg_inhabited;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Elab_getPosition___at___private_Init_Lean_Elab_TermApp_24__toMessageData___spec__1___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isIdent(lean_object*);
lean_object* _init_l_Lean_Elab_Term_Arg_inhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_Arg_inhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Term_Arg_inhabited___closed__1;
return x_1;
}
}
lean_object* l_Lean_Elab_Term_Arg_hasToString(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_box(0);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Lean_Syntax_formatStxAux___main(x_3, x_4, x_2);
x_6 = l_Lean_Options_empty;
x_7 = l_Lean_Format_pretty(x_5, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_expr_dbg_to_string(x_8);
lean_dec(x_8);
return x_9;
}
}
}
lean_object* l_Lean_Elab_Term_NamedArg_hasToString(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_Name_toString___closed__1;
x_4 = l_Lean_Name_toStringWithSep___main(x_3, x_2);
x_5 = l_Prod_HasRepr___rarg___closed__1;
x_6 = lean_string_append(x_5, x_4);
lean_dec(x_4);
x_7 = l_Lean_formatEntry___closed__1;
x_8 = lean_string_append(x_6, x_7);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_box(0);
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Lean_Syntax_formatStxAux___main(x_11, x_12, x_10);
x_14 = l_Lean_Options_empty;
x_15 = l_Lean_Format_pretty(x_13, x_14);
x_16 = lean_string_append(x_8, x_15);
lean_dec(x_15);
x_17 = l_Option_HasRepr___rarg___closed__3;
x_18 = lean_string_append(x_16, x_17);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_9, 0);
lean_inc(x_19);
lean_dec(x_9);
x_20 = lean_expr_dbg_to_string(x_19);
lean_dec(x_19);
x_21 = lean_string_append(x_8, x_20);
lean_dec(x_20);
x_22 = l_Option_HasRepr___rarg___closed__3;
x_23 = lean_string_append(x_21, x_22);
return x_23;
}
}
}
lean_object* _init_l_Lean_Elab_Term_NamedArg_inhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Term_Arg_inhabited___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* _init_l_Lean_Elab_Term_NamedArg_inhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Term_NamedArg_inhabited___closed__1;
return x_1;
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_addNamedArg___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_array_fget(x_3, x_5);
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_name_eq(x_9, x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_5, x_12);
lean_dec(x_5);
x_5 = x_13;
goto _start;
}
else
{
lean_dec(x_5);
return x_11;
}
}
}
}
lean_object* _init_l_Lean_Elab_Term_addNamedArg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("argument '");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_addNamedArg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_addNamedArg___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_addNamedArg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_addNamedArg___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_addNamedArg___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' was already set");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_addNamedArg___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_addNamedArg___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_addNamedArg___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_addNamedArg___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_addNamedArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_array_get_size(x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_addNamedArg___spec__1(x_2, x_3, x_2, x_6, x_7);
lean_dec(x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
x_9 = lean_array_push(x_2, x_3);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_5);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
lean_dec(x_2);
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
lean_dec(x_3);
x_12 = l_Lean_Name_toString___closed__1;
x_13 = l_Lean_Name_toStringWithSep___main(x_12, x_11);
x_14 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = l_Lean_Elab_Term_addNamedArg___closed__3;
x_17 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
x_18 = l_Lean_Elab_Term_addNamedArg___closed__6;
x_19 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = l_Lean_Elab_Term_throwError___rarg(x_1, x_19, x_4, x_5);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
return x_20;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_20);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_addNamedArg___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_addNamedArg___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_addNamedArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_Term_addNamedArg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Array_forMAux___main___at___private_Init_Lean_Elab_TermApp_1__synthesizeAppInstMVars___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_2);
x_7 = lean_nat_dec_lt(x_3, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_5);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_array_fget(x_2, x_3);
lean_inc(x_4);
lean_inc(x_10);
x_11 = l_Lean_Elab_Term_synthesizeInstMVarCore(x_1, x_10, x_4, x_5);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_dec(x_11);
x_15 = lean_box(0);
lean_inc(x_1);
x_16 = l_Lean_Elab_Term_registerSyntheticMVar(x_1, x_10, x_15, x_4, x_14);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_3, x_18);
lean_dec(x_3);
x_3 = x_19;
x_5 = x_17;
goto _start;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_10);
x_21 = lean_ctor_get(x_11, 1);
lean_inc(x_21);
lean_dec(x_11);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_add(x_3, x_22);
lean_dec(x_3);
x_3 = x_23;
x_5 = x_21;
goto _start;
}
}
else
{
uint8_t x_25; 
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_11);
if (x_25 == 0)
{
return x_11;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_11, 0);
x_27 = lean_ctor_get(x_11, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_11);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_1__synthesizeAppInstMVars(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Array_forMAux___main___at___private_Init_Lean_Elab_TermApp_1__synthesizeAppInstMVars___spec__1(x_1, x_2, x_5, x_3, x_4);
return x_6;
}
}
lean_object* l_Array_forMAux___main___at___private_Init_Lean_Elab_TermApp_1__synthesizeAppInstMVars___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_forMAux___main___at___private_Init_Lean_Elab_TermApp_1__synthesizeAppInstMVars___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_1__synthesizeAppInstMVars___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Lean_Elab_TermApp_1__synthesizeAppInstMVars(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_2__ensureArgType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_3);
x_7 = l_Lean_Elab_Term_inferType(x_1, x_3, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_4);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_2);
x_12 = l_Lean_Elab_Term_ensureHasTypeAux(x_1, x_10, x_8, x_3, x_11, x_5, x_9);
return x_12;
}
else
{
uint8_t x_13; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_13 = !lean_is_exclusive(x_7);
if (x_13 == 0)
{
return x_7;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_7, 0);
x_15 = lean_ctor_get(x_7, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_7);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_3__elabArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
lean_dec(x_3);
lean_inc(x_4);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_4);
x_9 = 1;
lean_inc(x_5);
x_10 = l_Lean_Elab_Term_elabTermAux___main(x_8, x_9, x_7, x_5, x_6);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l___private_Init_Lean_Elab_TermApp_2__ensureArgType(x_1, x_2, x_11, x_4, x_5, x_12);
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_14 = !lean_is_exclusive(x_10);
if (x_14 == 0)
{
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_10, 0);
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_10);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_3, 0);
lean_inc(x_18);
lean_dec(x_3);
x_19 = l___private_Init_Lean_Elab_TermApp_2__ensureArgType(x_1, x_2, x_18, x_4, x_5, x_6);
return x_19;
}
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_4__mkArrow(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Lean_Elab_Term_mkFreshAnonymousName___rarg(x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = 0;
x_9 = l_Lean_mkForall(x_7, x_8, x_1, x_2);
lean_dec(x_7);
lean_ctor_set(x_5, 0, x_9);
return x_5;
}
else
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_5, 0);
x_11 = lean_ctor_get(x_5, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_5);
x_12 = 0;
x_13 = l_Lean_mkForall(x_10, x_12, x_1, x_2);
lean_dec(x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_4__mkArrow___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Lean_Elab_TermApp_4__mkArrow(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("CoeFun");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_Exception_toStr___closed__6;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__3;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("coeFun");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__4;
x_2 = l_Lean_MessageData_ofList___closed__3;
x_3 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_5__tryCoeFun(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_inc(x_4);
x_6 = l_Lean_Elab_Term_mkFreshLevelMVar(x_1, x_4, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
lean_inc(x_7);
x_9 = l_Lean_mkSort(x_7);
lean_inc(x_2);
x_10 = l___private_Init_Lean_Elab_TermApp_4__mkArrow(x_2, x_9, x_4, x_8);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_11);
x_14 = 0;
x_15 = lean_box(0);
lean_inc(x_4);
x_16 = l_Lean_Elab_Term_mkFreshExprMVar(x_1, x_13, x_14, x_15, x_4, x_12);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
lean_inc(x_4);
lean_inc(x_2);
x_19 = l_Lean_Elab_Term_getLevel(x_1, x_2, x_4, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; lean_object* x_39; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; uint8_t x_64; uint8_t x_65; lean_object* x_66; lean_object* x_67; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_7);
lean_ctor_set(x_23, 1, x_22);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_20);
lean_ctor_set(x_24, 1, x_23);
x_25 = l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__2;
lean_inc(x_24);
x_26 = l_Lean_mkConst(x_25, x_24);
x_27 = l_Lean_mkAppStx___closed__9;
lean_inc(x_2);
x_28 = lean_array_push(x_27, x_2);
lean_inc(x_17);
x_29 = lean_array_push(x_28, x_17);
x_30 = lean_unsigned_to_nat(0u);
x_31 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_29, x_29, x_30, x_26);
lean_dec(x_29);
x_32 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_32, 0, x_31);
x_33 = 1;
lean_inc(x_4);
x_34 = l_Lean_Elab_Term_mkFreshExprMVar(x_1, x_32, x_33, x_15, x_4, x_21);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 lean_ctor_release(x_34, 1);
 x_37 = x_34;
} else {
 lean_dec_ref(x_34);
 x_37 = lean_box(0);
}
x_52 = l_Lean_Expr_mvarId_x21(x_35);
x_53 = lean_ctor_get(x_4, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_4, 1);
lean_inc(x_54);
x_55 = lean_ctor_get(x_4, 2);
lean_inc(x_55);
x_56 = lean_ctor_get(x_4, 3);
lean_inc(x_56);
x_57 = lean_ctor_get(x_4, 4);
lean_inc(x_57);
x_58 = lean_ctor_get(x_4, 5);
lean_inc(x_58);
x_59 = lean_ctor_get(x_4, 6);
lean_inc(x_59);
x_60 = lean_ctor_get(x_4, 7);
lean_inc(x_60);
x_61 = lean_ctor_get(x_4, 8);
lean_inc(x_61);
x_62 = lean_ctor_get(x_4, 9);
lean_inc(x_62);
x_63 = lean_ctor_get_uint8(x_4, sizeof(void*)*10);
x_64 = lean_ctor_get_uint8(x_4, sizeof(void*)*10 + 1);
x_65 = 0;
x_66 = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(x_66, 0, x_53);
lean_ctor_set(x_66, 1, x_54);
lean_ctor_set(x_66, 2, x_55);
lean_ctor_set(x_66, 3, x_56);
lean_ctor_set(x_66, 4, x_57);
lean_ctor_set(x_66, 5, x_58);
lean_ctor_set(x_66, 6, x_59);
lean_ctor_set(x_66, 7, x_60);
lean_ctor_set(x_66, 8, x_61);
lean_ctor_set(x_66, 9, x_62);
lean_ctor_set_uint8(x_66, sizeof(void*)*10, x_63);
lean_ctor_set_uint8(x_66, sizeof(void*)*10 + 1, x_64);
lean_ctor_set_uint8(x_66, sizeof(void*)*10 + 2, x_65);
x_67 = l_Lean_Elab_Term_synthesizeInstMVarCore(x_1, x_52, x_66, x_36);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_70 = lean_unbox(x_68);
lean_dec(x_68);
x_38 = x_70;
x_39 = x_69;
goto block_51;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
lean_dec(x_37);
lean_dec(x_35);
lean_dec(x_24);
lean_dec(x_17);
lean_dec(x_3);
lean_dec(x_2);
x_71 = lean_ctor_get(x_67, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_67, 1);
lean_inc(x_72);
lean_dec(x_67);
if (lean_obj_tag(x_71) == 0)
{
lean_object* x_81; 
x_81 = lean_ctor_get(x_71, 0);
lean_inc(x_81);
lean_dec(x_71);
if (lean_obj_tag(x_81) == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; uint8_t x_87; 
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
lean_dec(x_81);
x_83 = lean_ctor_get(x_82, 4);
lean_inc(x_83);
lean_dec(x_82);
x_84 = l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__7;
x_85 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_83);
x_86 = l_Lean_Elab_Term_throwError___rarg(x_1, x_85, x_4, x_72);
x_87 = !lean_is_exclusive(x_86);
if (x_87 == 0)
{
return x_86;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_86, 0);
x_89 = lean_ctor_get(x_86, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_86);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_89);
return x_90;
}
}
else
{
lean_object* x_91; 
x_91 = lean_box(0);
x_73 = x_91;
goto block_80;
}
}
else
{
lean_object* x_92; 
x_92 = lean_box(0);
x_73 = x_92;
goto block_80;
}
block_80:
{
lean_object* x_74; lean_object* x_75; uint8_t x_76; 
lean_dec(x_73);
x_74 = l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__4;
x_75 = l_Lean_Elab_Term_throwError___rarg(x_1, x_74, x_4, x_72);
x_76 = !lean_is_exclusive(x_75);
if (x_76 == 0)
{
return x_75;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_75, 0);
x_78 = lean_ctor_get(x_75, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_75);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
return x_79;
}
}
}
block_51:
{
if (x_38 == 0)
{
lean_object* x_40; lean_object* x_41; 
lean_dec(x_37);
lean_dec(x_35);
lean_dec(x_24);
lean_dec(x_17);
lean_dec(x_3);
lean_dec(x_2);
x_40 = l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__4;
x_41 = l_Lean_Elab_Term_throwError___rarg(x_1, x_40, x_4, x_39);
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_dec(x_4);
x_42 = l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__6;
x_43 = l_Lean_mkConst(x_42, x_24);
x_44 = l_PersistentHashMap_mkCollisionNode___rarg___closed__1;
x_45 = lean_array_push(x_44, x_2);
x_46 = lean_array_push(x_45, x_17);
x_47 = lean_array_push(x_46, x_3);
x_48 = lean_array_push(x_47, x_35);
x_49 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_48, x_48, x_30, x_43);
lean_dec(x_48);
if (lean_is_scalar(x_37)) {
 x_50 = lean_alloc_ctor(0, 2, 0);
} else {
 x_50 = x_37;
}
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_39);
return x_50;
}
}
}
else
{
uint8_t x_93; 
lean_dec(x_17);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_93 = !lean_is_exclusive(x_19);
if (x_93 == 0)
{
return x_19;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_94 = lean_ctor_get(x_19, 0);
x_95 = lean_ctor_get(x_19, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_19);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_94);
lean_ctor_set(x_96, 1, x_95);
return x_96;
}
}
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Init_Lean_Elab_TermApp_5__tryCoeFun(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
uint8_t l___private_Init_Lean_Elab_TermApp_6__isAutoOrOptParam(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Expr_getOptParamDefault_x3f(x_1);
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
uint8_t x_4; 
lean_dec(x_2);
x_4 = 1;
return x_4;
}
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_6__isAutoOrOptParam___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Init_Lean_Elab_TermApp_6__isAutoOrOptParam(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Array_findIdxAux___main___at___private_Init_Lean_Elab_TermApp_7__getForallBody___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_3);
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_name_eq(x_8, x_1);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_3, x_10);
lean_dec(x_3);
x_3 = x_11;
goto _start;
}
else
{
lean_object* x_13; 
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_3);
return x_13;
}
}
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_7__getForallBody___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 7)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 2);
lean_inc(x_6);
x_7 = lean_ctor_get_uint64(x_3, sizeof(void*)*3);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Array_findIdxAux___main___at___private_Init_Lean_Elab_TermApp_7__getForallBody___main___spec__1(x_4, x_2, x_8);
lean_dec(x_4);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; uint8_t x_11; 
x_10 = (uint8_t)((x_7 << 24) >> 61);
x_11 = l_Lean_BinderInfo_isExplicit(x_10);
if (x_11 == 0)
{
lean_dec(x_5);
lean_dec(x_3);
x_3 = x_6;
goto _start;
}
else
{
uint8_t x_13; 
x_13 = lean_nat_dec_lt(x_8, x_1);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = l___private_Init_Lean_Elab_TermApp_6__isAutoOrOptParam(x_5);
lean_dec(x_5);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_3);
return x_15;
}
else
{
lean_dec(x_3);
x_3 = x_6;
goto _start;
}
}
else
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_5);
lean_dec(x_3);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_sub(x_1, x_17);
lean_dec(x_1);
x_1 = x_18;
x_3 = x_6;
goto _start;
}
}
}
else
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_5);
lean_dec(x_3);
x_20 = lean_ctor_get(x_9, 0);
lean_inc(x_20);
lean_dec(x_9);
x_21 = l_Array_eraseIdx___rarg(x_2, x_20);
lean_dec(x_20);
x_2 = x_21;
x_3 = x_6;
goto _start;
}
}
else
{
lean_object* x_23; uint8_t x_24; 
x_23 = lean_unsigned_to_nat(0u);
x_24 = lean_nat_dec_eq(x_1, x_23);
lean_dec(x_1);
if (x_24 == 0)
{
lean_object* x_25; 
lean_dec(x_3);
lean_dec(x_2);
x_25 = lean_box(0);
return x_25;
}
else
{
uint8_t x_26; 
x_26 = l_Array_isEmpty___rarg(x_2);
lean_dec(x_2);
if (x_26 == 0)
{
lean_object* x_27; 
lean_dec(x_3);
x_27 = lean_box(0);
return x_27;
}
else
{
lean_object* x_28; 
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_3);
return x_28;
}
}
}
}
}
lean_object* l_Array_findIdxAux___main___at___private_Init_Lean_Elab_TermApp_7__getForallBody___main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_findIdxAux___main___at___private_Init_Lean_Elab_TermApp_7__getForallBody___main___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_7__getForallBody(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Lean_Elab_TermApp_7__getForallBody___main(x_1, x_2, x_3);
return x_4;
}
}
uint8_t l_Array_anyRangeMAux___main___at___private_Init_Lean_Elab_TermApp_8__hasTypeMVar___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_array_fget(x_3, x_5);
x_9 = lean_name_eq(x_2, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_5, x_10);
lean_dec(x_5);
x_5 = x_11;
goto _start;
}
else
{
lean_dec(x_5);
return x_9;
}
}
}
}
uint8_t l_Array_contains___at___private_Init_Lean_Elab_TermApp_8__hasTypeMVar___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_array_get_size(x_1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Array_anyRangeMAux___main___at___private_Init_Lean_Elab_TermApp_8__hasTypeMVar___spec__2(x_1, x_2, x_1, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_FindMVar_main___main___at___private_Init_Lean_Elab_TermApp_8__hasTypeMVar___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 2:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_1, 6);
x_6 = l_Array_contains___at___private_Init_Lean_Elab_TermApp_8__hasTypeMVar___spec__1(x_5, x_4);
if (x_6 == 0)
{
return x_3;
}
else
{
lean_object* x_7; 
lean_inc(x_4);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_4);
return x_7;
}
}
else
{
return x_3;
}
}
case 5:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_2, 0);
x_9 = lean_ctor_get(x_2, 1);
x_10 = l_Lean_Expr_hasMVar(x_8);
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = l_Lean_Expr_hasMVar(x_9);
if (x_11 == 0)
{
return x_3;
}
else
{
x_2 = x_9;
goto _start;
}
}
else
{
lean_object* x_13; 
x_13 = l_Lean_FindMVar_main___main___at___private_Init_Lean_Elab_TermApp_8__hasTypeMVar___spec__3(x_1, x_8, x_3);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = l_Lean_Expr_hasMVar(x_9);
if (x_14 == 0)
{
return x_13;
}
else
{
x_2 = x_9;
x_3 = x_13;
goto _start;
}
}
else
{
return x_13;
}
}
}
else
{
return x_3;
}
}
case 6:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_ctor_get(x_2, 1);
x_17 = lean_ctor_get(x_2, 2);
x_18 = l_Lean_Expr_hasMVar(x_16);
if (x_18 == 0)
{
uint8_t x_19; 
x_19 = l_Lean_Expr_hasMVar(x_17);
if (x_19 == 0)
{
return x_3;
}
else
{
x_2 = x_17;
goto _start;
}
}
else
{
lean_object* x_21; 
x_21 = l_Lean_FindMVar_main___main___at___private_Init_Lean_Elab_TermApp_8__hasTypeMVar___spec__3(x_1, x_16, x_3);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = l_Lean_Expr_hasMVar(x_17);
if (x_22 == 0)
{
return x_21;
}
else
{
x_2 = x_17;
x_3 = x_21;
goto _start;
}
}
else
{
return x_21;
}
}
}
else
{
return x_3;
}
}
case 7:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_24 = lean_ctor_get(x_2, 1);
x_25 = lean_ctor_get(x_2, 2);
x_26 = l_Lean_Expr_hasMVar(x_24);
if (x_26 == 0)
{
uint8_t x_27; 
x_27 = l_Lean_Expr_hasMVar(x_25);
if (x_27 == 0)
{
return x_3;
}
else
{
x_2 = x_25;
goto _start;
}
}
else
{
lean_object* x_29; 
x_29 = l_Lean_FindMVar_main___main___at___private_Init_Lean_Elab_TermApp_8__hasTypeMVar___spec__3(x_1, x_24, x_3);
if (lean_obj_tag(x_29) == 0)
{
uint8_t x_30; 
x_30 = l_Lean_Expr_hasMVar(x_25);
if (x_30 == 0)
{
return x_29;
}
else
{
x_2 = x_25;
x_3 = x_29;
goto _start;
}
}
else
{
return x_29;
}
}
}
else
{
return x_3;
}
}
case 8:
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_2, 1);
x_33 = lean_ctor_get(x_2, 2);
x_34 = lean_ctor_get(x_2, 3);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_43; 
x_43 = l_Lean_Expr_hasMVar(x_32);
if (x_43 == 0)
{
x_35 = x_3;
goto block_42;
}
else
{
lean_object* x_44; 
x_44 = l_Lean_FindMVar_main___main___at___private_Init_Lean_Elab_TermApp_8__hasTypeMVar___spec__3(x_1, x_32, x_3);
if (lean_obj_tag(x_44) == 0)
{
x_35 = x_44;
goto block_42;
}
else
{
return x_44;
}
}
}
else
{
return x_3;
}
block_42:
{
uint8_t x_36; 
x_36 = l_Lean_Expr_hasMVar(x_33);
if (x_36 == 0)
{
if (lean_obj_tag(x_35) == 0)
{
uint8_t x_37; 
x_37 = l_Lean_Expr_hasMVar(x_34);
if (x_37 == 0)
{
return x_35;
}
else
{
x_2 = x_34;
x_3 = x_35;
goto _start;
}
}
else
{
return x_35;
}
}
else
{
lean_object* x_39; 
x_39 = l_Lean_FindMVar_main___main___at___private_Init_Lean_Elab_TermApp_8__hasTypeMVar___spec__3(x_1, x_33, x_35);
if (lean_obj_tag(x_39) == 0)
{
uint8_t x_40; 
x_40 = l_Lean_Expr_hasMVar(x_34);
if (x_40 == 0)
{
return x_39;
}
else
{
x_2 = x_34;
x_3 = x_39;
goto _start;
}
}
else
{
return x_39;
}
}
}
}
case 10:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_45; uint8_t x_46; 
x_45 = lean_ctor_get(x_2, 1);
x_46 = l_Lean_Expr_hasMVar(x_45);
if (x_46 == 0)
{
return x_3;
}
else
{
x_2 = x_45;
goto _start;
}
}
else
{
return x_3;
}
}
case 11:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_48; uint8_t x_49; 
x_48 = lean_ctor_get(x_2, 2);
x_49 = l_Lean_Expr_hasMVar(x_48);
if (x_49 == 0)
{
return x_3;
}
else
{
x_2 = x_48;
goto _start;
}
}
else
{
return x_3;
}
}
default: 
{
return x_3;
}
}
}
}
uint8_t l___private_Init_Lean_Elab_TermApp_8__hasTypeMVar(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_Lean_FindMVar_main___main___at___private_Init_Lean_Elab_TermApp_8__hasTypeMVar___spec__3(x_1, x_2, x_3);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 1;
return x_6;
}
}
}
lean_object* l_Array_anyRangeMAux___main___at___private_Init_Lean_Elab_TermApp_8__hasTypeMVar___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at___private_Init_Lean_Elab_TermApp_8__hasTypeMVar___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Array_contains___at___private_Init_Lean_Elab_TermApp_8__hasTypeMVar___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Array_contains___at___private_Init_Lean_Elab_TermApp_8__hasTypeMVar___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_FindMVar_main___main___at___private_Init_Lean_Elab_TermApp_8__hasTypeMVar___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_FindMVar_main___main___at___private_Init_Lean_Elab_TermApp_8__hasTypeMVar___spec__3(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_8__hasTypeMVar___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Init_Lean_Elab_TermApp_8__hasTypeMVar(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_FindMVar_main___main___at___private_Init_Lean_Elab_TermApp_9__hasOnlyTypeMVar___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 2:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_1, 6);
x_6 = l_Array_contains___at___private_Init_Lean_Elab_TermApp_8__hasTypeMVar___spec__1(x_5, x_4);
if (x_6 == 0)
{
lean_object* x_7; 
lean_inc(x_4);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_4);
return x_7;
}
else
{
return x_3;
}
}
else
{
return x_3;
}
}
case 5:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_2, 0);
x_9 = lean_ctor_get(x_2, 1);
x_10 = l_Lean_Expr_hasMVar(x_8);
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = l_Lean_Expr_hasMVar(x_9);
if (x_11 == 0)
{
return x_3;
}
else
{
x_2 = x_9;
goto _start;
}
}
else
{
lean_object* x_13; 
x_13 = l_Lean_FindMVar_main___main___at___private_Init_Lean_Elab_TermApp_9__hasOnlyTypeMVar___spec__1(x_1, x_8, x_3);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = l_Lean_Expr_hasMVar(x_9);
if (x_14 == 0)
{
return x_13;
}
else
{
x_2 = x_9;
x_3 = x_13;
goto _start;
}
}
else
{
return x_13;
}
}
}
else
{
return x_3;
}
}
case 6:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_ctor_get(x_2, 1);
x_17 = lean_ctor_get(x_2, 2);
x_18 = l_Lean_Expr_hasMVar(x_16);
if (x_18 == 0)
{
uint8_t x_19; 
x_19 = l_Lean_Expr_hasMVar(x_17);
if (x_19 == 0)
{
return x_3;
}
else
{
x_2 = x_17;
goto _start;
}
}
else
{
lean_object* x_21; 
x_21 = l_Lean_FindMVar_main___main___at___private_Init_Lean_Elab_TermApp_9__hasOnlyTypeMVar___spec__1(x_1, x_16, x_3);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = l_Lean_Expr_hasMVar(x_17);
if (x_22 == 0)
{
return x_21;
}
else
{
x_2 = x_17;
x_3 = x_21;
goto _start;
}
}
else
{
return x_21;
}
}
}
else
{
return x_3;
}
}
case 7:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_24 = lean_ctor_get(x_2, 1);
x_25 = lean_ctor_get(x_2, 2);
x_26 = l_Lean_Expr_hasMVar(x_24);
if (x_26 == 0)
{
uint8_t x_27; 
x_27 = l_Lean_Expr_hasMVar(x_25);
if (x_27 == 0)
{
return x_3;
}
else
{
x_2 = x_25;
goto _start;
}
}
else
{
lean_object* x_29; 
x_29 = l_Lean_FindMVar_main___main___at___private_Init_Lean_Elab_TermApp_9__hasOnlyTypeMVar___spec__1(x_1, x_24, x_3);
if (lean_obj_tag(x_29) == 0)
{
uint8_t x_30; 
x_30 = l_Lean_Expr_hasMVar(x_25);
if (x_30 == 0)
{
return x_29;
}
else
{
x_2 = x_25;
x_3 = x_29;
goto _start;
}
}
else
{
return x_29;
}
}
}
else
{
return x_3;
}
}
case 8:
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_2, 1);
x_33 = lean_ctor_get(x_2, 2);
x_34 = lean_ctor_get(x_2, 3);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_43; 
x_43 = l_Lean_Expr_hasMVar(x_32);
if (x_43 == 0)
{
x_35 = x_3;
goto block_42;
}
else
{
lean_object* x_44; 
x_44 = l_Lean_FindMVar_main___main___at___private_Init_Lean_Elab_TermApp_9__hasOnlyTypeMVar___spec__1(x_1, x_32, x_3);
if (lean_obj_tag(x_44) == 0)
{
x_35 = x_44;
goto block_42;
}
else
{
return x_44;
}
}
}
else
{
return x_3;
}
block_42:
{
uint8_t x_36; 
x_36 = l_Lean_Expr_hasMVar(x_33);
if (x_36 == 0)
{
if (lean_obj_tag(x_35) == 0)
{
uint8_t x_37; 
x_37 = l_Lean_Expr_hasMVar(x_34);
if (x_37 == 0)
{
return x_35;
}
else
{
x_2 = x_34;
x_3 = x_35;
goto _start;
}
}
else
{
return x_35;
}
}
else
{
lean_object* x_39; 
x_39 = l_Lean_FindMVar_main___main___at___private_Init_Lean_Elab_TermApp_9__hasOnlyTypeMVar___spec__1(x_1, x_33, x_35);
if (lean_obj_tag(x_39) == 0)
{
uint8_t x_40; 
x_40 = l_Lean_Expr_hasMVar(x_34);
if (x_40 == 0)
{
return x_39;
}
else
{
x_2 = x_34;
x_3 = x_39;
goto _start;
}
}
else
{
return x_39;
}
}
}
}
case 10:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_45; uint8_t x_46; 
x_45 = lean_ctor_get(x_2, 1);
x_46 = l_Lean_Expr_hasMVar(x_45);
if (x_46 == 0)
{
return x_3;
}
else
{
x_2 = x_45;
goto _start;
}
}
else
{
return x_3;
}
}
case 11:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_48; uint8_t x_49; 
x_48 = lean_ctor_get(x_2, 2);
x_49 = l_Lean_Expr_hasMVar(x_48);
if (x_49 == 0)
{
return x_3;
}
else
{
x_2 = x_48;
goto _start;
}
}
else
{
return x_3;
}
}
default: 
{
return x_3;
}
}
}
}
uint8_t l___private_Init_Lean_Elab_TermApp_9__hasOnlyTypeMVar(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = l_Lean_FindMVar_main___main___at___private_Init_Lean_Elab_TermApp_9__hasOnlyTypeMVar___spec__1(x_1, x_2, x_3);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = 1;
return x_5;
}
else
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
}
}
lean_object* l_Lean_FindMVar_main___main___at___private_Init_Lean_Elab_TermApp_9__hasOnlyTypeMVar___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_FindMVar_main___main___at___private_Init_Lean_Elab_TermApp_9__hasOnlyTypeMVar___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_9__hasOnlyTypeMVar___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Init_Lean_Elab_TermApp_9__hasOnlyTypeMVar(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_10__propagateExpectedType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_ctor_get_uint8(x_1, sizeof(void*)*7);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = lean_ctor_get_uint8(x_1, sizeof(void*)*7 + 1);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_1, 6);
lean_inc(x_7);
x_8 = l_Array_isEmpty___rarg(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_1, 2);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_4);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = lean_ctor_get(x_9, 0);
lean_inc(x_12);
lean_dec(x_9);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
x_14 = lean_array_get_size(x_13);
lean_dec(x_13);
x_15 = lean_ctor_get(x_1, 3);
lean_inc(x_15);
x_16 = lean_nat_sub(x_14, x_15);
lean_dec(x_15);
lean_dec(x_14);
x_17 = lean_ctor_get(x_1, 4);
lean_inc(x_17);
x_18 = l___private_Init_Lean_Elab_TermApp_7__getForallBody___main(x_16, x_17, x_2);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_12);
lean_dec(x_3);
lean_dec(x_1);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_4);
return x_20;
}
else
{
lean_object* x_21; uint8_t x_22; 
x_21 = lean_ctor_get(x_18, 0);
lean_inc(x_21);
lean_dec(x_18);
x_22 = l_Lean_Expr_hasLooseBVars(x_21);
if (x_22 == 0)
{
uint8_t x_23; 
x_23 = l___private_Init_Lean_Elab_TermApp_8__hasTypeMVar(x_1, x_21);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_21);
lean_dec(x_12);
lean_dec(x_3);
lean_dec(x_1);
x_24 = lean_box(0);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_4);
return x_25;
}
else
{
uint8_t x_26; 
x_26 = l___private_Init_Lean_Elab_TermApp_9__hasOnlyTypeMVar(x_1, x_21);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_21);
lean_dec(x_12);
lean_dec(x_3);
lean_dec(x_1);
x_27 = lean_box(0);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_4);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_1, 0);
lean_inc(x_29);
lean_dec(x_1);
x_30 = l_Lean_Elab_Term_isDefEq(x_29, x_12, x_21, x_3, x_4);
lean_dec(x_29);
if (lean_obj_tag(x_30) == 0)
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_30, 0);
lean_dec(x_32);
x_33 = lean_box(0);
lean_ctor_set(x_30, 0, x_33);
return x_30;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_30, 1);
lean_inc(x_34);
lean_dec(x_30);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
return x_36;
}
}
else
{
uint8_t x_37; 
x_37 = !lean_is_exclusive(x_30);
if (x_37 == 0)
{
return x_30;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_30, 0);
x_39 = lean_ctor_get(x_30, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_30);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
}
else
{
lean_object* x_41; lean_object* x_42; 
lean_dec(x_21);
lean_dec(x_12);
lean_dec(x_3);
lean_dec(x_1);
x_41 = lean_box(0);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_4);
return x_42;
}
}
}
}
else
{
lean_object* x_43; lean_object* x_44; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_43 = lean_box(0);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_4);
return x_44;
}
}
else
{
lean_object* x_45; lean_object* x_46; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_45 = lean_box(0);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_4);
return x_46;
}
}
else
{
lean_object* x_47; lean_object* x_48; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_47 = lean_box(0);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_4);
return x_48;
}
}
}
lean_object* l_Array_findIdxAux___main___at___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_3);
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_name_eq(x_8, x_1);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_3, x_10);
lean_dec(x_3);
x_3 = x_11;
goto _start;
}
else
{
lean_object* x_13; 
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_3);
return x_13;
}
}
}
}
lean_object* l_Array_umapMAux___main___at___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_nat_dec_lt(x_1, x_3);
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_1);
x_5 = l_Array_empty___closed__1;
x_6 = x_2;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_7 = lean_array_fget(x_2, x_1);
x_8 = lean_box(0);
x_9 = x_8;
x_10 = lean_array_fset(x_2, x_1, x_9);
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_1, x_12);
x_14 = x_11;
lean_dec(x_7);
x_15 = lean_array_fset(x_10, x_1, x_14);
lean_dec(x_1);
x_1 = x_13;
x_2 = x_15;
goto _start;
}
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("explicit parameter '");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' is missing, unused named arguments ");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 2);
lean_inc(x_8);
x_9 = lean_ctor_get_uint8(x_1, sizeof(void*)*7);
x_10 = lean_ctor_get(x_1, 3);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 4);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 5);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 6);
lean_inc(x_13);
x_14 = lean_ctor_get_uint8(x_1, sizeof(void*)*7 + 1);
lean_inc(x_4);
lean_inc(x_3);
x_15 = l_Lean_Elab_Term_whnfForall(x_6, x_3, x_4, x_5);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
if (lean_obj_tag(x_16) == 7)
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; uint64_t x_83; lean_object* x_84; lean_object* x_85; 
x_80 = lean_ctor_get(x_16, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_16, 1);
lean_inc(x_81);
x_82 = lean_ctor_get(x_16, 2);
lean_inc(x_82);
x_83 = lean_ctor_get_uint64(x_16, sizeof(void*)*3);
x_84 = lean_unsigned_to_nat(0u);
x_85 = l_Array_findIdxAux___main___at___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___spec__1(x_80, x_11, x_84);
if (lean_obj_tag(x_85) == 0)
{
if (x_9 == 0)
{
uint8_t x_86; lean_object* x_87; 
x_86 = (uint8_t)((x_83 << 24) >> 61);
x_87 = lean_box(x_86);
switch (lean_obj_tag(x_87)) {
case 1:
{
uint8_t x_88; 
lean_dec(x_80);
lean_dec(x_16);
lean_dec(x_3);
x_88 = !lean_is_exclusive(x_1);
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; uint8_t x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_89 = lean_ctor_get(x_1, 6);
lean_dec(x_89);
x_90 = lean_ctor_get(x_1, 5);
lean_dec(x_90);
x_91 = lean_ctor_get(x_1, 4);
lean_dec(x_91);
x_92 = lean_ctor_get(x_1, 3);
lean_dec(x_92);
x_93 = lean_ctor_get(x_1, 2);
lean_dec(x_93);
x_94 = lean_ctor_get(x_1, 1);
lean_dec(x_94);
x_95 = lean_ctor_get(x_1, 0);
lean_dec(x_95);
x_96 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_96, 0, x_81);
x_97 = 0;
x_98 = lean_box(0);
lean_inc(x_4);
x_99 = l_Lean_Elab_Term_mkFreshExprMVar(x_6, x_96, x_97, x_98, x_4, x_17);
x_100 = lean_ctor_get(x_99, 0);
lean_inc(x_100);
x_101 = lean_ctor_get(x_99, 1);
lean_inc(x_101);
lean_dec(x_99);
lean_inc(x_4);
lean_inc(x_100);
x_102 = l_Lean_Elab_Term_isType(x_6, x_100, x_4, x_101);
if (lean_obj_tag(x_102) == 0)
{
lean_object* x_103; uint8_t x_104; 
x_103 = lean_ctor_get(x_102, 0);
lean_inc(x_103);
x_104 = lean_unbox(x_103);
lean_dec(x_103);
if (x_104 == 0)
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_ctor_get(x_102, 1);
lean_inc(x_105);
lean_dec(x_102);
lean_inc(x_100);
x_106 = l_Lean_mkApp(x_2, x_100);
x_107 = lean_expr_instantiate1(x_82, x_100);
lean_dec(x_100);
lean_dec(x_82);
x_2 = x_106;
x_3 = x_107;
x_5 = x_105;
goto _start;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_109 = lean_ctor_get(x_102, 1);
lean_inc(x_109);
lean_dec(x_102);
x_110 = l_Lean_Expr_mvarId_x21(x_100);
x_111 = lean_array_push(x_13, x_110);
lean_ctor_set(x_1, 6, x_111);
lean_inc(x_100);
x_112 = l_Lean_mkApp(x_2, x_100);
x_113 = lean_expr_instantiate1(x_82, x_100);
lean_dec(x_100);
lean_dec(x_82);
x_2 = x_112;
x_3 = x_113;
x_5 = x_109;
goto _start;
}
}
else
{
uint8_t x_115; 
lean_dec(x_100);
lean_free_object(x_1);
lean_dec(x_82);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_115 = !lean_is_exclusive(x_102);
if (x_115 == 0)
{
return x_102;
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_116 = lean_ctor_get(x_102, 0);
x_117 = lean_ctor_get(x_102, 1);
lean_inc(x_117);
lean_inc(x_116);
lean_dec(x_102);
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_116);
lean_ctor_set(x_118, 1, x_117);
return x_118;
}
}
}
else
{
lean_object* x_119; uint8_t x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; 
lean_dec(x_1);
x_119 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_119, 0, x_81);
x_120 = 0;
x_121 = lean_box(0);
lean_inc(x_4);
x_122 = l_Lean_Elab_Term_mkFreshExprMVar(x_6, x_119, x_120, x_121, x_4, x_17);
x_123 = lean_ctor_get(x_122, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_122, 1);
lean_inc(x_124);
lean_dec(x_122);
lean_inc(x_4);
lean_inc(x_123);
x_125 = l_Lean_Elab_Term_isType(x_6, x_123, x_4, x_124);
if (lean_obj_tag(x_125) == 0)
{
lean_object* x_126; uint8_t x_127; 
x_126 = lean_ctor_get(x_125, 0);
lean_inc(x_126);
x_127 = lean_unbox(x_126);
lean_dec(x_126);
if (x_127 == 0)
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_128 = lean_ctor_get(x_125, 1);
lean_inc(x_128);
lean_dec(x_125);
x_129 = lean_alloc_ctor(0, 7, 2);
lean_ctor_set(x_129, 0, x_6);
lean_ctor_set(x_129, 1, x_7);
lean_ctor_set(x_129, 2, x_8);
lean_ctor_set(x_129, 3, x_10);
lean_ctor_set(x_129, 4, x_11);
lean_ctor_set(x_129, 5, x_12);
lean_ctor_set(x_129, 6, x_13);
lean_ctor_set_uint8(x_129, sizeof(void*)*7, x_9);
lean_ctor_set_uint8(x_129, sizeof(void*)*7 + 1, x_14);
lean_inc(x_123);
x_130 = l_Lean_mkApp(x_2, x_123);
x_131 = lean_expr_instantiate1(x_82, x_123);
lean_dec(x_123);
lean_dec(x_82);
x_1 = x_129;
x_2 = x_130;
x_3 = x_131;
x_5 = x_128;
goto _start;
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_133 = lean_ctor_get(x_125, 1);
lean_inc(x_133);
lean_dec(x_125);
x_134 = l_Lean_Expr_mvarId_x21(x_123);
x_135 = lean_array_push(x_13, x_134);
x_136 = lean_alloc_ctor(0, 7, 2);
lean_ctor_set(x_136, 0, x_6);
lean_ctor_set(x_136, 1, x_7);
lean_ctor_set(x_136, 2, x_8);
lean_ctor_set(x_136, 3, x_10);
lean_ctor_set(x_136, 4, x_11);
lean_ctor_set(x_136, 5, x_12);
lean_ctor_set(x_136, 6, x_135);
lean_ctor_set_uint8(x_136, sizeof(void*)*7, x_9);
lean_ctor_set_uint8(x_136, sizeof(void*)*7 + 1, x_14);
lean_inc(x_123);
x_137 = l_Lean_mkApp(x_2, x_123);
x_138 = lean_expr_instantiate1(x_82, x_123);
lean_dec(x_123);
lean_dec(x_82);
x_1 = x_136;
x_2 = x_137;
x_3 = x_138;
x_5 = x_133;
goto _start;
}
}
else
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; 
lean_dec(x_123);
lean_dec(x_82);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_140 = lean_ctor_get(x_125, 0);
lean_inc(x_140);
x_141 = lean_ctor_get(x_125, 1);
lean_inc(x_141);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 x_142 = x_125;
} else {
 lean_dec_ref(x_125);
 x_142 = lean_box(0);
}
if (lean_is_scalar(x_142)) {
 x_143 = lean_alloc_ctor(1, 2, 0);
} else {
 x_143 = x_142;
}
lean_ctor_set(x_143, 0, x_140);
lean_ctor_set(x_143, 1, x_141);
return x_143;
}
}
}
case 3:
{
uint8_t x_144; 
lean_dec(x_80);
lean_dec(x_16);
lean_dec(x_3);
x_144 = !lean_is_exclusive(x_1);
if (x_144 == 0)
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; uint8_t x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; 
x_145 = lean_ctor_get(x_1, 6);
lean_dec(x_145);
x_146 = lean_ctor_get(x_1, 5);
lean_dec(x_146);
x_147 = lean_ctor_get(x_1, 4);
lean_dec(x_147);
x_148 = lean_ctor_get(x_1, 3);
lean_dec(x_148);
x_149 = lean_ctor_get(x_1, 2);
lean_dec(x_149);
x_150 = lean_ctor_get(x_1, 1);
lean_dec(x_150);
x_151 = lean_ctor_get(x_1, 0);
lean_dec(x_151);
x_152 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_152, 0, x_81);
x_153 = 1;
x_154 = lean_box(0);
lean_inc(x_4);
x_155 = l_Lean_Elab_Term_mkFreshExprMVar(x_6, x_152, x_153, x_154, x_4, x_17);
x_156 = lean_ctor_get(x_155, 0);
lean_inc(x_156);
x_157 = lean_ctor_get(x_155, 1);
lean_inc(x_157);
lean_dec(x_155);
x_158 = l_Lean_Expr_mvarId_x21(x_156);
x_159 = lean_array_push(x_12, x_158);
lean_ctor_set(x_1, 5, x_159);
lean_inc(x_156);
x_160 = l_Lean_mkApp(x_2, x_156);
x_161 = lean_expr_instantiate1(x_82, x_156);
lean_dec(x_156);
lean_dec(x_82);
x_2 = x_160;
x_3 = x_161;
x_5 = x_157;
goto _start;
}
else
{
lean_object* x_163; uint8_t x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; 
lean_dec(x_1);
x_163 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_163, 0, x_81);
x_164 = 1;
x_165 = lean_box(0);
lean_inc(x_4);
x_166 = l_Lean_Elab_Term_mkFreshExprMVar(x_6, x_163, x_164, x_165, x_4, x_17);
x_167 = lean_ctor_get(x_166, 0);
lean_inc(x_167);
x_168 = lean_ctor_get(x_166, 1);
lean_inc(x_168);
lean_dec(x_166);
x_169 = l_Lean_Expr_mvarId_x21(x_167);
x_170 = lean_array_push(x_12, x_169);
x_171 = lean_alloc_ctor(0, 7, 2);
lean_ctor_set(x_171, 0, x_6);
lean_ctor_set(x_171, 1, x_7);
lean_ctor_set(x_171, 2, x_8);
lean_ctor_set(x_171, 3, x_10);
lean_ctor_set(x_171, 4, x_11);
lean_ctor_set(x_171, 5, x_170);
lean_ctor_set(x_171, 6, x_13);
lean_ctor_set_uint8(x_171, sizeof(void*)*7, x_9);
lean_ctor_set_uint8(x_171, sizeof(void*)*7 + 1, x_14);
lean_inc(x_167);
x_172 = l_Lean_mkApp(x_2, x_167);
x_173 = lean_expr_instantiate1(x_82, x_167);
lean_dec(x_167);
lean_dec(x_82);
x_1 = x_171;
x_2 = x_172;
x_3 = x_173;
x_5 = x_168;
goto _start;
}
}
default: 
{
lean_object* x_175; uint8_t x_176; 
lean_dec(x_87);
lean_inc(x_4);
lean_inc(x_1);
x_175 = l___private_Init_Lean_Elab_TermApp_10__propagateExpectedType(x_1, x_16, x_4, x_17);
x_176 = !lean_is_exclusive(x_1);
if (x_176 == 0)
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; 
x_177 = lean_ctor_get(x_1, 6);
lean_dec(x_177);
x_178 = lean_ctor_get(x_1, 5);
lean_dec(x_178);
x_179 = lean_ctor_get(x_1, 4);
lean_dec(x_179);
x_180 = lean_ctor_get(x_1, 3);
lean_dec(x_180);
x_181 = lean_ctor_get(x_1, 2);
lean_dec(x_181);
x_182 = lean_ctor_get(x_1, 1);
lean_dec(x_182);
x_183 = lean_ctor_get(x_1, 0);
lean_dec(x_183);
if (lean_obj_tag(x_175) == 0)
{
lean_object* x_184; uint8_t x_185; lean_object* x_186; uint8_t x_187; 
x_184 = lean_ctor_get(x_175, 1);
lean_inc(x_184);
lean_dec(x_175);
x_185 = 1;
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_ctor_set_uint8(x_1, sizeof(void*)*7 + 1, x_185);
x_186 = lean_array_get_size(x_7);
x_187 = lean_nat_dec_lt(x_10, x_186);
lean_dec(x_186);
if (x_187 == 0)
{
lean_object* x_188; 
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_7);
x_188 = l_Lean_Expr_getOptParamDefault_x3f(x_81);
lean_dec(x_81);
if (lean_obj_tag(x_188) == 0)
{
uint8_t x_189; 
lean_dec(x_1);
lean_dec(x_82);
x_189 = l_Array_isEmpty___rarg(x_11);
if (x_189 == 0)
{
lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; 
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
x_190 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_190, 0, x_80);
x_191 = l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__3;
x_192 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_192, 0, x_191);
lean_ctor_set(x_192, 1, x_190);
x_193 = l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__6;
x_194 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_194, 0, x_192);
lean_ctor_set(x_194, 1, x_193);
x_195 = l_Array_umapMAux___main___at___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___spec__2(x_84, x_11);
x_196 = l_Array_toList___rarg(x_195);
lean_dec(x_195);
x_197 = l_List_toString___at_Lean_Elab_OpenDecl_HasToString___spec__2(x_196);
x_198 = l_Array_HasRepr___rarg___closed__1;
x_199 = lean_string_append(x_198, x_197);
lean_dec(x_197);
x_200 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_200, 0, x_199);
x_201 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_201, 0, x_200);
x_202 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_202, 0, x_194);
lean_ctor_set(x_202, 1, x_201);
x_203 = l_Lean_Elab_Term_throwError___rarg(x_6, x_202, x_4, x_184);
lean_dec(x_6);
return x_203;
}
else
{
lean_dec(x_80);
lean_dec(x_11);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_204; 
lean_dec(x_3);
x_204 = l_Array_forMAux___main___at___private_Init_Lean_Elab_TermApp_1__synthesizeAppInstMVars___spec__1(x_6, x_12, x_84, x_4, x_184);
lean_dec(x_12);
if (lean_obj_tag(x_204) == 0)
{
uint8_t x_205; 
x_205 = !lean_is_exclusive(x_204);
if (x_205 == 0)
{
lean_object* x_206; 
x_206 = lean_ctor_get(x_204, 0);
lean_dec(x_206);
lean_ctor_set(x_204, 0, x_2);
return x_204;
}
else
{
lean_object* x_207; lean_object* x_208; 
x_207 = lean_ctor_get(x_204, 1);
lean_inc(x_207);
lean_dec(x_204);
x_208 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_208, 0, x_2);
lean_ctor_set(x_208, 1, x_207);
return x_208;
}
}
else
{
uint8_t x_209; 
lean_dec(x_2);
x_209 = !lean_is_exclusive(x_204);
if (x_209 == 0)
{
return x_204;
}
else
{
lean_object* x_210; lean_object* x_211; lean_object* x_212; 
x_210 = lean_ctor_get(x_204, 0);
x_211 = lean_ctor_get(x_204, 1);
lean_inc(x_211);
lean_inc(x_210);
lean_dec(x_204);
x_212 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_212, 0, x_210);
lean_ctor_set(x_212, 1, x_211);
return x_212;
}
}
}
else
{
lean_object* x_213; lean_object* x_214; 
x_213 = lean_ctor_get(x_8, 0);
lean_inc(x_213);
lean_dec(x_8);
lean_inc(x_4);
x_214 = l_Lean_Elab_Term_isDefEq(x_6, x_213, x_3, x_4, x_184);
if (lean_obj_tag(x_214) == 0)
{
lean_object* x_215; lean_object* x_216; 
x_215 = lean_ctor_get(x_214, 1);
lean_inc(x_215);
lean_dec(x_214);
x_216 = l_Array_forMAux___main___at___private_Init_Lean_Elab_TermApp_1__synthesizeAppInstMVars___spec__1(x_6, x_12, x_84, x_4, x_215);
lean_dec(x_12);
if (lean_obj_tag(x_216) == 0)
{
uint8_t x_217; 
x_217 = !lean_is_exclusive(x_216);
if (x_217 == 0)
{
lean_object* x_218; 
x_218 = lean_ctor_get(x_216, 0);
lean_dec(x_218);
lean_ctor_set(x_216, 0, x_2);
return x_216;
}
else
{
lean_object* x_219; lean_object* x_220; 
x_219 = lean_ctor_get(x_216, 1);
lean_inc(x_219);
lean_dec(x_216);
x_220 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_220, 0, x_2);
lean_ctor_set(x_220, 1, x_219);
return x_220;
}
}
else
{
uint8_t x_221; 
lean_dec(x_2);
x_221 = !lean_is_exclusive(x_216);
if (x_221 == 0)
{
return x_216;
}
else
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; 
x_222 = lean_ctor_get(x_216, 0);
x_223 = lean_ctor_get(x_216, 1);
lean_inc(x_223);
lean_inc(x_222);
lean_dec(x_216);
x_224 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_224, 0, x_222);
lean_ctor_set(x_224, 1, x_223);
return x_224;
}
}
}
else
{
uint8_t x_225; 
lean_dec(x_12);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_225 = !lean_is_exclusive(x_214);
if (x_225 == 0)
{
return x_214;
}
else
{
lean_object* x_226; lean_object* x_227; lean_object* x_228; 
x_226 = lean_ctor_get(x_214, 0);
x_227 = lean_ctor_get(x_214, 1);
lean_inc(x_227);
lean_inc(x_226);
lean_dec(x_214);
x_228 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_228, 0, x_226);
lean_ctor_set(x_228, 1, x_227);
return x_228;
}
}
}
}
}
else
{
lean_object* x_229; lean_object* x_230; lean_object* x_231; 
lean_dec(x_80);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_3);
x_229 = lean_ctor_get(x_188, 0);
lean_inc(x_229);
lean_dec(x_188);
lean_inc(x_229);
x_230 = l_Lean_mkApp(x_2, x_229);
x_231 = lean_expr_instantiate1(x_82, x_229);
lean_dec(x_229);
lean_dec(x_82);
x_2 = x_230;
x_3 = x_231;
x_5 = x_184;
goto _start;
}
}
else
{
lean_object* x_233; lean_object* x_234; 
lean_dec(x_1);
lean_dec(x_80);
lean_dec(x_3);
x_233 = lean_array_fget(x_7, x_10);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_6);
x_234 = l___private_Init_Lean_Elab_TermApp_3__elabArg(x_6, x_2, x_233, x_81, x_4, x_184);
if (lean_obj_tag(x_234) == 0)
{
lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; 
x_235 = lean_ctor_get(x_234, 0);
lean_inc(x_235);
x_236 = lean_ctor_get(x_234, 1);
lean_inc(x_236);
lean_dec(x_234);
x_237 = lean_unsigned_to_nat(1u);
x_238 = lean_nat_add(x_10, x_237);
lean_dec(x_10);
x_239 = lean_alloc_ctor(0, 7, 2);
lean_ctor_set(x_239, 0, x_6);
lean_ctor_set(x_239, 1, x_7);
lean_ctor_set(x_239, 2, x_8);
lean_ctor_set(x_239, 3, x_238);
lean_ctor_set(x_239, 4, x_11);
lean_ctor_set(x_239, 5, x_12);
lean_ctor_set(x_239, 6, x_13);
lean_ctor_set_uint8(x_239, sizeof(void*)*7, x_9);
lean_ctor_set_uint8(x_239, sizeof(void*)*7 + 1, x_185);
lean_inc(x_235);
x_240 = l_Lean_mkApp(x_2, x_235);
x_241 = lean_expr_instantiate1(x_82, x_235);
lean_dec(x_235);
lean_dec(x_82);
x_1 = x_239;
x_2 = x_240;
x_3 = x_241;
x_5 = x_236;
goto _start;
}
else
{
uint8_t x_243; 
lean_dec(x_82);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_243 = !lean_is_exclusive(x_234);
if (x_243 == 0)
{
return x_234;
}
else
{
lean_object* x_244; lean_object* x_245; lean_object* x_246; 
x_244 = lean_ctor_get(x_234, 0);
x_245 = lean_ctor_get(x_234, 1);
lean_inc(x_245);
lean_inc(x_244);
lean_dec(x_234);
x_246 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_246, 0, x_244);
lean_ctor_set(x_246, 1, x_245);
return x_246;
}
}
}
}
else
{
uint8_t x_247; 
lean_free_object(x_1);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_247 = !lean_is_exclusive(x_175);
if (x_247 == 0)
{
return x_175;
}
else
{
lean_object* x_248; lean_object* x_249; lean_object* x_250; 
x_248 = lean_ctor_get(x_175, 0);
x_249 = lean_ctor_get(x_175, 1);
lean_inc(x_249);
lean_inc(x_248);
lean_dec(x_175);
x_250 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_250, 0, x_248);
lean_ctor_set(x_250, 1, x_249);
return x_250;
}
}
}
else
{
lean_dec(x_1);
if (lean_obj_tag(x_175) == 0)
{
lean_object* x_251; uint8_t x_252; lean_object* x_253; lean_object* x_254; uint8_t x_255; 
x_251 = lean_ctor_get(x_175, 1);
lean_inc(x_251);
lean_dec(x_175);
x_252 = 1;
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_253 = lean_alloc_ctor(0, 7, 2);
lean_ctor_set(x_253, 0, x_6);
lean_ctor_set(x_253, 1, x_7);
lean_ctor_set(x_253, 2, x_8);
lean_ctor_set(x_253, 3, x_10);
lean_ctor_set(x_253, 4, x_11);
lean_ctor_set(x_253, 5, x_12);
lean_ctor_set(x_253, 6, x_13);
lean_ctor_set_uint8(x_253, sizeof(void*)*7, x_9);
lean_ctor_set_uint8(x_253, sizeof(void*)*7 + 1, x_252);
x_254 = lean_array_get_size(x_7);
x_255 = lean_nat_dec_lt(x_10, x_254);
lean_dec(x_254);
if (x_255 == 0)
{
lean_object* x_256; 
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_7);
x_256 = l_Lean_Expr_getOptParamDefault_x3f(x_81);
lean_dec(x_81);
if (lean_obj_tag(x_256) == 0)
{
uint8_t x_257; 
lean_dec(x_253);
lean_dec(x_82);
x_257 = l_Array_isEmpty___rarg(x_11);
if (x_257 == 0)
{
lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; 
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
x_258 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_258, 0, x_80);
x_259 = l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__3;
x_260 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_260, 0, x_259);
lean_ctor_set(x_260, 1, x_258);
x_261 = l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__6;
x_262 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_262, 0, x_260);
lean_ctor_set(x_262, 1, x_261);
x_263 = l_Array_umapMAux___main___at___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___spec__2(x_84, x_11);
x_264 = l_Array_toList___rarg(x_263);
lean_dec(x_263);
x_265 = l_List_toString___at_Lean_Elab_OpenDecl_HasToString___spec__2(x_264);
x_266 = l_Array_HasRepr___rarg___closed__1;
x_267 = lean_string_append(x_266, x_265);
lean_dec(x_265);
x_268 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_268, 0, x_267);
x_269 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_269, 0, x_268);
x_270 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_270, 0, x_262);
lean_ctor_set(x_270, 1, x_269);
x_271 = l_Lean_Elab_Term_throwError___rarg(x_6, x_270, x_4, x_251);
lean_dec(x_6);
return x_271;
}
else
{
lean_dec(x_80);
lean_dec(x_11);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_272; 
lean_dec(x_3);
x_272 = l_Array_forMAux___main___at___private_Init_Lean_Elab_TermApp_1__synthesizeAppInstMVars___spec__1(x_6, x_12, x_84, x_4, x_251);
lean_dec(x_12);
if (lean_obj_tag(x_272) == 0)
{
lean_object* x_273; lean_object* x_274; lean_object* x_275; 
x_273 = lean_ctor_get(x_272, 1);
lean_inc(x_273);
if (lean_is_exclusive(x_272)) {
 lean_ctor_release(x_272, 0);
 lean_ctor_release(x_272, 1);
 x_274 = x_272;
} else {
 lean_dec_ref(x_272);
 x_274 = lean_box(0);
}
if (lean_is_scalar(x_274)) {
 x_275 = lean_alloc_ctor(0, 2, 0);
} else {
 x_275 = x_274;
}
lean_ctor_set(x_275, 0, x_2);
lean_ctor_set(x_275, 1, x_273);
return x_275;
}
else
{
lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; 
lean_dec(x_2);
x_276 = lean_ctor_get(x_272, 0);
lean_inc(x_276);
x_277 = lean_ctor_get(x_272, 1);
lean_inc(x_277);
if (lean_is_exclusive(x_272)) {
 lean_ctor_release(x_272, 0);
 lean_ctor_release(x_272, 1);
 x_278 = x_272;
} else {
 lean_dec_ref(x_272);
 x_278 = lean_box(0);
}
if (lean_is_scalar(x_278)) {
 x_279 = lean_alloc_ctor(1, 2, 0);
} else {
 x_279 = x_278;
}
lean_ctor_set(x_279, 0, x_276);
lean_ctor_set(x_279, 1, x_277);
return x_279;
}
}
else
{
lean_object* x_280; lean_object* x_281; 
x_280 = lean_ctor_get(x_8, 0);
lean_inc(x_280);
lean_dec(x_8);
lean_inc(x_4);
x_281 = l_Lean_Elab_Term_isDefEq(x_6, x_280, x_3, x_4, x_251);
if (lean_obj_tag(x_281) == 0)
{
lean_object* x_282; lean_object* x_283; 
x_282 = lean_ctor_get(x_281, 1);
lean_inc(x_282);
lean_dec(x_281);
x_283 = l_Array_forMAux___main___at___private_Init_Lean_Elab_TermApp_1__synthesizeAppInstMVars___spec__1(x_6, x_12, x_84, x_4, x_282);
lean_dec(x_12);
if (lean_obj_tag(x_283) == 0)
{
lean_object* x_284; lean_object* x_285; lean_object* x_286; 
x_284 = lean_ctor_get(x_283, 1);
lean_inc(x_284);
if (lean_is_exclusive(x_283)) {
 lean_ctor_release(x_283, 0);
 lean_ctor_release(x_283, 1);
 x_285 = x_283;
} else {
 lean_dec_ref(x_283);
 x_285 = lean_box(0);
}
if (lean_is_scalar(x_285)) {
 x_286 = lean_alloc_ctor(0, 2, 0);
} else {
 x_286 = x_285;
}
lean_ctor_set(x_286, 0, x_2);
lean_ctor_set(x_286, 1, x_284);
return x_286;
}
else
{
lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; 
lean_dec(x_2);
x_287 = lean_ctor_get(x_283, 0);
lean_inc(x_287);
x_288 = lean_ctor_get(x_283, 1);
lean_inc(x_288);
if (lean_is_exclusive(x_283)) {
 lean_ctor_release(x_283, 0);
 lean_ctor_release(x_283, 1);
 x_289 = x_283;
} else {
 lean_dec_ref(x_283);
 x_289 = lean_box(0);
}
if (lean_is_scalar(x_289)) {
 x_290 = lean_alloc_ctor(1, 2, 0);
} else {
 x_290 = x_289;
}
lean_ctor_set(x_290, 0, x_287);
lean_ctor_set(x_290, 1, x_288);
return x_290;
}
}
else
{
lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; 
lean_dec(x_12);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_291 = lean_ctor_get(x_281, 0);
lean_inc(x_291);
x_292 = lean_ctor_get(x_281, 1);
lean_inc(x_292);
if (lean_is_exclusive(x_281)) {
 lean_ctor_release(x_281, 0);
 lean_ctor_release(x_281, 1);
 x_293 = x_281;
} else {
 lean_dec_ref(x_281);
 x_293 = lean_box(0);
}
if (lean_is_scalar(x_293)) {
 x_294 = lean_alloc_ctor(1, 2, 0);
} else {
 x_294 = x_293;
}
lean_ctor_set(x_294, 0, x_291);
lean_ctor_set(x_294, 1, x_292);
return x_294;
}
}
}
}
else
{
lean_object* x_295; lean_object* x_296; lean_object* x_297; 
lean_dec(x_80);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_3);
x_295 = lean_ctor_get(x_256, 0);
lean_inc(x_295);
lean_dec(x_256);
lean_inc(x_295);
x_296 = l_Lean_mkApp(x_2, x_295);
x_297 = lean_expr_instantiate1(x_82, x_295);
lean_dec(x_295);
lean_dec(x_82);
x_1 = x_253;
x_2 = x_296;
x_3 = x_297;
x_5 = x_251;
goto _start;
}
}
else
{
lean_object* x_299; lean_object* x_300; 
lean_dec(x_253);
lean_dec(x_80);
lean_dec(x_3);
x_299 = lean_array_fget(x_7, x_10);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_6);
x_300 = l___private_Init_Lean_Elab_TermApp_3__elabArg(x_6, x_2, x_299, x_81, x_4, x_251);
if (lean_obj_tag(x_300) == 0)
{
lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; 
x_301 = lean_ctor_get(x_300, 0);
lean_inc(x_301);
x_302 = lean_ctor_get(x_300, 1);
lean_inc(x_302);
lean_dec(x_300);
x_303 = lean_unsigned_to_nat(1u);
x_304 = lean_nat_add(x_10, x_303);
lean_dec(x_10);
x_305 = lean_alloc_ctor(0, 7, 2);
lean_ctor_set(x_305, 0, x_6);
lean_ctor_set(x_305, 1, x_7);
lean_ctor_set(x_305, 2, x_8);
lean_ctor_set(x_305, 3, x_304);
lean_ctor_set(x_305, 4, x_11);
lean_ctor_set(x_305, 5, x_12);
lean_ctor_set(x_305, 6, x_13);
lean_ctor_set_uint8(x_305, sizeof(void*)*7, x_9);
lean_ctor_set_uint8(x_305, sizeof(void*)*7 + 1, x_252);
lean_inc(x_301);
x_306 = l_Lean_mkApp(x_2, x_301);
x_307 = lean_expr_instantiate1(x_82, x_301);
lean_dec(x_301);
lean_dec(x_82);
x_1 = x_305;
x_2 = x_306;
x_3 = x_307;
x_5 = x_302;
goto _start;
}
else
{
lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; 
lean_dec(x_82);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_309 = lean_ctor_get(x_300, 0);
lean_inc(x_309);
x_310 = lean_ctor_get(x_300, 1);
lean_inc(x_310);
if (lean_is_exclusive(x_300)) {
 lean_ctor_release(x_300, 0);
 lean_ctor_release(x_300, 1);
 x_311 = x_300;
} else {
 lean_dec_ref(x_300);
 x_311 = lean_box(0);
}
if (lean_is_scalar(x_311)) {
 x_312 = lean_alloc_ctor(1, 2, 0);
} else {
 x_312 = x_311;
}
lean_ctor_set(x_312, 0, x_309);
lean_ctor_set(x_312, 1, x_310);
return x_312;
}
}
}
else
{
lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; 
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_313 = lean_ctor_get(x_175, 0);
lean_inc(x_313);
x_314 = lean_ctor_get(x_175, 1);
lean_inc(x_314);
if (lean_is_exclusive(x_175)) {
 lean_ctor_release(x_175, 0);
 lean_ctor_release(x_175, 1);
 x_315 = x_175;
} else {
 lean_dec_ref(x_175);
 x_315 = lean_box(0);
}
if (lean_is_scalar(x_315)) {
 x_316 = lean_alloc_ctor(1, 2, 0);
} else {
 x_316 = x_315;
}
lean_ctor_set(x_316, 0, x_313);
lean_ctor_set(x_316, 1, x_314);
return x_316;
}
}
}
}
}
else
{
lean_object* x_317; uint8_t x_318; 
lean_inc(x_4);
lean_inc(x_1);
x_317 = l___private_Init_Lean_Elab_TermApp_10__propagateExpectedType(x_1, x_16, x_4, x_17);
x_318 = !lean_is_exclusive(x_1);
if (x_318 == 0)
{
lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; 
x_319 = lean_ctor_get(x_1, 6);
lean_dec(x_319);
x_320 = lean_ctor_get(x_1, 5);
lean_dec(x_320);
x_321 = lean_ctor_get(x_1, 4);
lean_dec(x_321);
x_322 = lean_ctor_get(x_1, 3);
lean_dec(x_322);
x_323 = lean_ctor_get(x_1, 2);
lean_dec(x_323);
x_324 = lean_ctor_get(x_1, 1);
lean_dec(x_324);
x_325 = lean_ctor_get(x_1, 0);
lean_dec(x_325);
if (lean_obj_tag(x_317) == 0)
{
lean_object* x_326; lean_object* x_327; uint8_t x_328; 
x_326 = lean_ctor_get(x_317, 1);
lean_inc(x_326);
lean_dec(x_317);
x_327 = lean_array_get_size(x_7);
x_328 = lean_nat_dec_lt(x_10, x_327);
lean_dec(x_327);
if (x_328 == 0)
{
uint8_t x_329; 
lean_free_object(x_1);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_7);
x_329 = l_Array_isEmpty___rarg(x_11);
if (x_329 == 0)
{
lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; 
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
x_330 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_330, 0, x_80);
x_331 = l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__3;
x_332 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_332, 0, x_331);
lean_ctor_set(x_332, 1, x_330);
x_333 = l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__6;
x_334 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_334, 0, x_332);
lean_ctor_set(x_334, 1, x_333);
x_335 = l_Array_umapMAux___main___at___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___spec__2(x_84, x_11);
x_336 = l_Array_toList___rarg(x_335);
lean_dec(x_335);
x_337 = l_List_toString___at_Lean_Elab_OpenDecl_HasToString___spec__2(x_336);
x_338 = l_Array_HasRepr___rarg___closed__1;
x_339 = lean_string_append(x_338, x_337);
lean_dec(x_337);
x_340 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_340, 0, x_339);
x_341 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_341, 0, x_340);
x_342 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_342, 0, x_334);
lean_ctor_set(x_342, 1, x_341);
x_343 = l_Lean_Elab_Term_throwError___rarg(x_6, x_342, x_4, x_326);
lean_dec(x_6);
return x_343;
}
else
{
lean_dec(x_80);
lean_dec(x_11);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_344; 
lean_dec(x_3);
x_344 = l_Array_forMAux___main___at___private_Init_Lean_Elab_TermApp_1__synthesizeAppInstMVars___spec__1(x_6, x_12, x_84, x_4, x_326);
lean_dec(x_12);
if (lean_obj_tag(x_344) == 0)
{
uint8_t x_345; 
x_345 = !lean_is_exclusive(x_344);
if (x_345 == 0)
{
lean_object* x_346; 
x_346 = lean_ctor_get(x_344, 0);
lean_dec(x_346);
lean_ctor_set(x_344, 0, x_2);
return x_344;
}
else
{
lean_object* x_347; lean_object* x_348; 
x_347 = lean_ctor_get(x_344, 1);
lean_inc(x_347);
lean_dec(x_344);
x_348 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_348, 0, x_2);
lean_ctor_set(x_348, 1, x_347);
return x_348;
}
}
else
{
uint8_t x_349; 
lean_dec(x_2);
x_349 = !lean_is_exclusive(x_344);
if (x_349 == 0)
{
return x_344;
}
else
{
lean_object* x_350; lean_object* x_351; lean_object* x_352; 
x_350 = lean_ctor_get(x_344, 0);
x_351 = lean_ctor_get(x_344, 1);
lean_inc(x_351);
lean_inc(x_350);
lean_dec(x_344);
x_352 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_352, 0, x_350);
lean_ctor_set(x_352, 1, x_351);
return x_352;
}
}
}
else
{
lean_object* x_353; lean_object* x_354; 
x_353 = lean_ctor_get(x_8, 0);
lean_inc(x_353);
lean_dec(x_8);
lean_inc(x_4);
x_354 = l_Lean_Elab_Term_isDefEq(x_6, x_353, x_3, x_4, x_326);
if (lean_obj_tag(x_354) == 0)
{
lean_object* x_355; lean_object* x_356; 
x_355 = lean_ctor_get(x_354, 1);
lean_inc(x_355);
lean_dec(x_354);
x_356 = l_Array_forMAux___main___at___private_Init_Lean_Elab_TermApp_1__synthesizeAppInstMVars___spec__1(x_6, x_12, x_84, x_4, x_355);
lean_dec(x_12);
if (lean_obj_tag(x_356) == 0)
{
uint8_t x_357; 
x_357 = !lean_is_exclusive(x_356);
if (x_357 == 0)
{
lean_object* x_358; 
x_358 = lean_ctor_get(x_356, 0);
lean_dec(x_358);
lean_ctor_set(x_356, 0, x_2);
return x_356;
}
else
{
lean_object* x_359; lean_object* x_360; 
x_359 = lean_ctor_get(x_356, 1);
lean_inc(x_359);
lean_dec(x_356);
x_360 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_360, 0, x_2);
lean_ctor_set(x_360, 1, x_359);
return x_360;
}
}
else
{
uint8_t x_361; 
lean_dec(x_2);
x_361 = !lean_is_exclusive(x_356);
if (x_361 == 0)
{
return x_356;
}
else
{
lean_object* x_362; lean_object* x_363; lean_object* x_364; 
x_362 = lean_ctor_get(x_356, 0);
x_363 = lean_ctor_get(x_356, 1);
lean_inc(x_363);
lean_inc(x_362);
lean_dec(x_356);
x_364 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_364, 0, x_362);
lean_ctor_set(x_364, 1, x_363);
return x_364;
}
}
}
else
{
uint8_t x_365; 
lean_dec(x_12);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_365 = !lean_is_exclusive(x_354);
if (x_365 == 0)
{
return x_354;
}
else
{
lean_object* x_366; lean_object* x_367; lean_object* x_368; 
x_366 = lean_ctor_get(x_354, 0);
x_367 = lean_ctor_get(x_354, 1);
lean_inc(x_367);
lean_inc(x_366);
lean_dec(x_354);
x_368 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_368, 0, x_366);
lean_ctor_set(x_368, 1, x_367);
return x_368;
}
}
}
}
}
else
{
lean_object* x_369; lean_object* x_370; 
lean_dec(x_80);
lean_dec(x_3);
x_369 = lean_array_fget(x_7, x_10);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_6);
x_370 = l___private_Init_Lean_Elab_TermApp_3__elabArg(x_6, x_2, x_369, x_81, x_4, x_326);
if (lean_obj_tag(x_370) == 0)
{
lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; uint8_t x_375; lean_object* x_376; lean_object* x_377; 
x_371 = lean_ctor_get(x_370, 0);
lean_inc(x_371);
x_372 = lean_ctor_get(x_370, 1);
lean_inc(x_372);
lean_dec(x_370);
x_373 = lean_unsigned_to_nat(1u);
x_374 = lean_nat_add(x_10, x_373);
lean_dec(x_10);
x_375 = 1;
lean_ctor_set(x_1, 3, x_374);
lean_ctor_set_uint8(x_1, sizeof(void*)*7 + 1, x_375);
lean_inc(x_371);
x_376 = l_Lean_mkApp(x_2, x_371);
x_377 = lean_expr_instantiate1(x_82, x_371);
lean_dec(x_371);
lean_dec(x_82);
x_2 = x_376;
x_3 = x_377;
x_5 = x_372;
goto _start;
}
else
{
uint8_t x_379; 
lean_free_object(x_1);
lean_dec(x_82);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_379 = !lean_is_exclusive(x_370);
if (x_379 == 0)
{
return x_370;
}
else
{
lean_object* x_380; lean_object* x_381; lean_object* x_382; 
x_380 = lean_ctor_get(x_370, 0);
x_381 = lean_ctor_get(x_370, 1);
lean_inc(x_381);
lean_inc(x_380);
lean_dec(x_370);
x_382 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_382, 0, x_380);
lean_ctor_set(x_382, 1, x_381);
return x_382;
}
}
}
}
else
{
uint8_t x_383; 
lean_free_object(x_1);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_383 = !lean_is_exclusive(x_317);
if (x_383 == 0)
{
return x_317;
}
else
{
lean_object* x_384; lean_object* x_385; lean_object* x_386; 
x_384 = lean_ctor_get(x_317, 0);
x_385 = lean_ctor_get(x_317, 1);
lean_inc(x_385);
lean_inc(x_384);
lean_dec(x_317);
x_386 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_386, 0, x_384);
lean_ctor_set(x_386, 1, x_385);
return x_386;
}
}
}
else
{
lean_dec(x_1);
if (lean_obj_tag(x_317) == 0)
{
lean_object* x_387; lean_object* x_388; uint8_t x_389; 
x_387 = lean_ctor_get(x_317, 1);
lean_inc(x_387);
lean_dec(x_317);
x_388 = lean_array_get_size(x_7);
x_389 = lean_nat_dec_lt(x_10, x_388);
lean_dec(x_388);
if (x_389 == 0)
{
uint8_t x_390; 
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_7);
x_390 = l_Array_isEmpty___rarg(x_11);
if (x_390 == 0)
{
lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; 
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
x_391 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_391, 0, x_80);
x_392 = l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__3;
x_393 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_393, 0, x_392);
lean_ctor_set(x_393, 1, x_391);
x_394 = l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__6;
x_395 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_395, 0, x_393);
lean_ctor_set(x_395, 1, x_394);
x_396 = l_Array_umapMAux___main___at___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___spec__2(x_84, x_11);
x_397 = l_Array_toList___rarg(x_396);
lean_dec(x_396);
x_398 = l_List_toString___at_Lean_Elab_OpenDecl_HasToString___spec__2(x_397);
x_399 = l_Array_HasRepr___rarg___closed__1;
x_400 = lean_string_append(x_399, x_398);
lean_dec(x_398);
x_401 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_401, 0, x_400);
x_402 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_402, 0, x_401);
x_403 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_403, 0, x_395);
lean_ctor_set(x_403, 1, x_402);
x_404 = l_Lean_Elab_Term_throwError___rarg(x_6, x_403, x_4, x_387);
lean_dec(x_6);
return x_404;
}
else
{
lean_dec(x_80);
lean_dec(x_11);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_405; 
lean_dec(x_3);
x_405 = l_Array_forMAux___main___at___private_Init_Lean_Elab_TermApp_1__synthesizeAppInstMVars___spec__1(x_6, x_12, x_84, x_4, x_387);
lean_dec(x_12);
if (lean_obj_tag(x_405) == 0)
{
lean_object* x_406; lean_object* x_407; lean_object* x_408; 
x_406 = lean_ctor_get(x_405, 1);
lean_inc(x_406);
if (lean_is_exclusive(x_405)) {
 lean_ctor_release(x_405, 0);
 lean_ctor_release(x_405, 1);
 x_407 = x_405;
} else {
 lean_dec_ref(x_405);
 x_407 = lean_box(0);
}
if (lean_is_scalar(x_407)) {
 x_408 = lean_alloc_ctor(0, 2, 0);
} else {
 x_408 = x_407;
}
lean_ctor_set(x_408, 0, x_2);
lean_ctor_set(x_408, 1, x_406);
return x_408;
}
else
{
lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; 
lean_dec(x_2);
x_409 = lean_ctor_get(x_405, 0);
lean_inc(x_409);
x_410 = lean_ctor_get(x_405, 1);
lean_inc(x_410);
if (lean_is_exclusive(x_405)) {
 lean_ctor_release(x_405, 0);
 lean_ctor_release(x_405, 1);
 x_411 = x_405;
} else {
 lean_dec_ref(x_405);
 x_411 = lean_box(0);
}
if (lean_is_scalar(x_411)) {
 x_412 = lean_alloc_ctor(1, 2, 0);
} else {
 x_412 = x_411;
}
lean_ctor_set(x_412, 0, x_409);
lean_ctor_set(x_412, 1, x_410);
return x_412;
}
}
else
{
lean_object* x_413; lean_object* x_414; 
x_413 = lean_ctor_get(x_8, 0);
lean_inc(x_413);
lean_dec(x_8);
lean_inc(x_4);
x_414 = l_Lean_Elab_Term_isDefEq(x_6, x_413, x_3, x_4, x_387);
if (lean_obj_tag(x_414) == 0)
{
lean_object* x_415; lean_object* x_416; 
x_415 = lean_ctor_get(x_414, 1);
lean_inc(x_415);
lean_dec(x_414);
x_416 = l_Array_forMAux___main___at___private_Init_Lean_Elab_TermApp_1__synthesizeAppInstMVars___spec__1(x_6, x_12, x_84, x_4, x_415);
lean_dec(x_12);
if (lean_obj_tag(x_416) == 0)
{
lean_object* x_417; lean_object* x_418; lean_object* x_419; 
x_417 = lean_ctor_get(x_416, 1);
lean_inc(x_417);
if (lean_is_exclusive(x_416)) {
 lean_ctor_release(x_416, 0);
 lean_ctor_release(x_416, 1);
 x_418 = x_416;
} else {
 lean_dec_ref(x_416);
 x_418 = lean_box(0);
}
if (lean_is_scalar(x_418)) {
 x_419 = lean_alloc_ctor(0, 2, 0);
} else {
 x_419 = x_418;
}
lean_ctor_set(x_419, 0, x_2);
lean_ctor_set(x_419, 1, x_417);
return x_419;
}
else
{
lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; 
lean_dec(x_2);
x_420 = lean_ctor_get(x_416, 0);
lean_inc(x_420);
x_421 = lean_ctor_get(x_416, 1);
lean_inc(x_421);
if (lean_is_exclusive(x_416)) {
 lean_ctor_release(x_416, 0);
 lean_ctor_release(x_416, 1);
 x_422 = x_416;
} else {
 lean_dec_ref(x_416);
 x_422 = lean_box(0);
}
if (lean_is_scalar(x_422)) {
 x_423 = lean_alloc_ctor(1, 2, 0);
} else {
 x_423 = x_422;
}
lean_ctor_set(x_423, 0, x_420);
lean_ctor_set(x_423, 1, x_421);
return x_423;
}
}
else
{
lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; 
lean_dec(x_12);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_424 = lean_ctor_get(x_414, 0);
lean_inc(x_424);
x_425 = lean_ctor_get(x_414, 1);
lean_inc(x_425);
if (lean_is_exclusive(x_414)) {
 lean_ctor_release(x_414, 0);
 lean_ctor_release(x_414, 1);
 x_426 = x_414;
} else {
 lean_dec_ref(x_414);
 x_426 = lean_box(0);
}
if (lean_is_scalar(x_426)) {
 x_427 = lean_alloc_ctor(1, 2, 0);
} else {
 x_427 = x_426;
}
lean_ctor_set(x_427, 0, x_424);
lean_ctor_set(x_427, 1, x_425);
return x_427;
}
}
}
}
else
{
lean_object* x_428; lean_object* x_429; 
lean_dec(x_80);
lean_dec(x_3);
x_428 = lean_array_fget(x_7, x_10);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_6);
x_429 = l___private_Init_Lean_Elab_TermApp_3__elabArg(x_6, x_2, x_428, x_81, x_4, x_387);
if (lean_obj_tag(x_429) == 0)
{
lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; uint8_t x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; 
x_430 = lean_ctor_get(x_429, 0);
lean_inc(x_430);
x_431 = lean_ctor_get(x_429, 1);
lean_inc(x_431);
lean_dec(x_429);
x_432 = lean_unsigned_to_nat(1u);
x_433 = lean_nat_add(x_10, x_432);
lean_dec(x_10);
x_434 = 1;
x_435 = lean_alloc_ctor(0, 7, 2);
lean_ctor_set(x_435, 0, x_6);
lean_ctor_set(x_435, 1, x_7);
lean_ctor_set(x_435, 2, x_8);
lean_ctor_set(x_435, 3, x_433);
lean_ctor_set(x_435, 4, x_11);
lean_ctor_set(x_435, 5, x_12);
lean_ctor_set(x_435, 6, x_13);
lean_ctor_set_uint8(x_435, sizeof(void*)*7, x_9);
lean_ctor_set_uint8(x_435, sizeof(void*)*7 + 1, x_434);
lean_inc(x_430);
x_436 = l_Lean_mkApp(x_2, x_430);
x_437 = lean_expr_instantiate1(x_82, x_430);
lean_dec(x_430);
lean_dec(x_82);
x_1 = x_435;
x_2 = x_436;
x_3 = x_437;
x_5 = x_431;
goto _start;
}
else
{
lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; 
lean_dec(x_82);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_439 = lean_ctor_get(x_429, 0);
lean_inc(x_439);
x_440 = lean_ctor_get(x_429, 1);
lean_inc(x_440);
if (lean_is_exclusive(x_429)) {
 lean_ctor_release(x_429, 0);
 lean_ctor_release(x_429, 1);
 x_441 = x_429;
} else {
 lean_dec_ref(x_429);
 x_441 = lean_box(0);
}
if (lean_is_scalar(x_441)) {
 x_442 = lean_alloc_ctor(1, 2, 0);
} else {
 x_442 = x_441;
}
lean_ctor_set(x_442, 0, x_439);
lean_ctor_set(x_442, 1, x_440);
return x_442;
}
}
}
else
{
lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; 
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_443 = lean_ctor_get(x_317, 0);
lean_inc(x_443);
x_444 = lean_ctor_get(x_317, 1);
lean_inc(x_444);
if (lean_is_exclusive(x_317)) {
 lean_ctor_release(x_317, 0);
 lean_ctor_release(x_317, 1);
 x_445 = x_317;
} else {
 lean_dec_ref(x_317);
 x_445 = lean_box(0);
}
if (lean_is_scalar(x_445)) {
 x_446 = lean_alloc_ctor(1, 2, 0);
} else {
 x_446 = x_445;
}
lean_ctor_set(x_446, 0, x_443);
lean_ctor_set(x_446, 1, x_444);
return x_446;
}
}
}
}
else
{
lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; 
lean_dec(x_80);
lean_dec(x_3);
x_447 = lean_ctor_get(x_85, 0);
lean_inc(x_447);
lean_dec(x_85);
x_448 = l_Lean_Elab_Term_NamedArg_inhabited;
x_449 = lean_array_get(x_448, x_11, x_447);
x_450 = l_Array_eraseIdx___rarg(x_11, x_447);
lean_dec(x_447);
x_451 = lean_ctor_get(x_449, 1);
lean_inc(x_451);
lean_dec(x_449);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_6);
x_452 = l___private_Init_Lean_Elab_TermApp_3__elabArg(x_6, x_2, x_451, x_81, x_4, x_17);
if (lean_obj_tag(x_452) == 0)
{
lean_object* x_453; lean_object* x_454; lean_object* x_455; uint8_t x_456; 
x_453 = lean_ctor_get(x_452, 0);
lean_inc(x_453);
x_454 = lean_ctor_get(x_452, 1);
lean_inc(x_454);
lean_dec(x_452);
lean_inc(x_4);
lean_inc(x_1);
x_455 = l___private_Init_Lean_Elab_TermApp_10__propagateExpectedType(x_1, x_16, x_4, x_454);
x_456 = !lean_is_exclusive(x_1);
if (x_456 == 0)
{
lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; 
x_457 = lean_ctor_get(x_1, 6);
lean_dec(x_457);
x_458 = lean_ctor_get(x_1, 5);
lean_dec(x_458);
x_459 = lean_ctor_get(x_1, 4);
lean_dec(x_459);
x_460 = lean_ctor_get(x_1, 3);
lean_dec(x_460);
x_461 = lean_ctor_get(x_1, 2);
lean_dec(x_461);
x_462 = lean_ctor_get(x_1, 1);
lean_dec(x_462);
x_463 = lean_ctor_get(x_1, 0);
lean_dec(x_463);
if (lean_obj_tag(x_455) == 0)
{
lean_object* x_464; uint8_t x_465; lean_object* x_466; lean_object* x_467; 
x_464 = lean_ctor_get(x_455, 1);
lean_inc(x_464);
lean_dec(x_455);
x_465 = 1;
lean_ctor_set(x_1, 4, x_450);
lean_ctor_set_uint8(x_1, sizeof(void*)*7 + 1, x_465);
lean_inc(x_453);
x_466 = l_Lean_mkApp(x_2, x_453);
x_467 = lean_expr_instantiate1(x_82, x_453);
lean_dec(x_453);
lean_dec(x_82);
x_2 = x_466;
x_3 = x_467;
x_5 = x_464;
goto _start;
}
else
{
uint8_t x_469; 
lean_free_object(x_1);
lean_dec(x_453);
lean_dec(x_450);
lean_dec(x_82);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_469 = !lean_is_exclusive(x_455);
if (x_469 == 0)
{
return x_455;
}
else
{
lean_object* x_470; lean_object* x_471; lean_object* x_472; 
x_470 = lean_ctor_get(x_455, 0);
x_471 = lean_ctor_get(x_455, 1);
lean_inc(x_471);
lean_inc(x_470);
lean_dec(x_455);
x_472 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_472, 0, x_470);
lean_ctor_set(x_472, 1, x_471);
return x_472;
}
}
}
else
{
lean_dec(x_1);
if (lean_obj_tag(x_455) == 0)
{
lean_object* x_473; uint8_t x_474; lean_object* x_475; lean_object* x_476; lean_object* x_477; 
x_473 = lean_ctor_get(x_455, 1);
lean_inc(x_473);
lean_dec(x_455);
x_474 = 1;
x_475 = lean_alloc_ctor(0, 7, 2);
lean_ctor_set(x_475, 0, x_6);
lean_ctor_set(x_475, 1, x_7);
lean_ctor_set(x_475, 2, x_8);
lean_ctor_set(x_475, 3, x_10);
lean_ctor_set(x_475, 4, x_450);
lean_ctor_set(x_475, 5, x_12);
lean_ctor_set(x_475, 6, x_13);
lean_ctor_set_uint8(x_475, sizeof(void*)*7, x_9);
lean_ctor_set_uint8(x_475, sizeof(void*)*7 + 1, x_474);
lean_inc(x_453);
x_476 = l_Lean_mkApp(x_2, x_453);
x_477 = lean_expr_instantiate1(x_82, x_453);
lean_dec(x_453);
lean_dec(x_82);
x_1 = x_475;
x_2 = x_476;
x_3 = x_477;
x_5 = x_473;
goto _start;
}
else
{
lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; 
lean_dec(x_453);
lean_dec(x_450);
lean_dec(x_82);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_479 = lean_ctor_get(x_455, 0);
lean_inc(x_479);
x_480 = lean_ctor_get(x_455, 1);
lean_inc(x_480);
if (lean_is_exclusive(x_455)) {
 lean_ctor_release(x_455, 0);
 lean_ctor_release(x_455, 1);
 x_481 = x_455;
} else {
 lean_dec_ref(x_455);
 x_481 = lean_box(0);
}
if (lean_is_scalar(x_481)) {
 x_482 = lean_alloc_ctor(1, 2, 0);
} else {
 x_482 = x_481;
}
lean_ctor_set(x_482, 0, x_479);
lean_ctor_set(x_482, 1, x_480);
return x_482;
}
}
}
else
{
uint8_t x_483; 
lean_dec(x_450);
lean_dec(x_82);
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_483 = !lean_is_exclusive(x_452);
if (x_483 == 0)
{
return x_452;
}
else
{
lean_object* x_484; lean_object* x_485; lean_object* x_486; 
x_484 = lean_ctor_get(x_452, 0);
x_485 = lean_ctor_get(x_452, 1);
lean_inc(x_485);
lean_inc(x_484);
lean_dec(x_452);
x_486 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_486, 0, x_484);
lean_ctor_set(x_486, 1, x_485);
return x_486;
}
}
}
}
else
{
lean_object* x_487; 
lean_dec(x_13);
x_487 = lean_box(0);
x_18 = x_487;
goto block_79;
}
block_79:
{
uint8_t x_19; 
lean_dec(x_18);
x_19 = l_Array_isEmpty___rarg(x_11);
lean_dec(x_11);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_inc(x_4);
x_20 = l___private_Init_Lean_Elab_TermApp_5__tryCoeFun(x_6, x_16, x_2, x_4, x_17);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_4);
lean_inc(x_21);
x_23 = l_Lean_Elab_Term_inferType(x_6, x_21, x_4, x_22);
lean_dec(x_6);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_2 = x_21;
x_3 = x_24;
x_5 = x_25;
goto _start;
}
else
{
uint8_t x_27; 
lean_dec(x_21);
lean_dec(x_4);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_23);
if (x_27 == 0)
{
return x_23;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_23, 0);
x_29 = lean_ctor_get(x_23, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_23);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
uint8_t x_31; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_20);
if (x_31 == 0)
{
return x_20;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_20, 0);
x_33 = lean_ctor_get(x_20, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_20);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
lean_object* x_35; uint8_t x_36; 
x_35 = lean_array_get_size(x_7);
lean_dec(x_7);
x_36 = lean_nat_dec_eq(x_10, x_35);
lean_dec(x_35);
lean_dec(x_10);
if (x_36 == 0)
{
lean_object* x_37; 
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_3);
lean_inc(x_4);
x_37 = l___private_Init_Lean_Elab_TermApp_5__tryCoeFun(x_6, x_16, x_2, x_4, x_17);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
lean_inc(x_4);
lean_inc(x_38);
x_40 = l_Lean_Elab_Term_inferType(x_6, x_38, x_4, x_39);
lean_dec(x_6);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_2 = x_38;
x_3 = x_41;
x_5 = x_42;
goto _start;
}
else
{
uint8_t x_44; 
lean_dec(x_38);
lean_dec(x_4);
lean_dec(x_1);
x_44 = !lean_is_exclusive(x_40);
if (x_44 == 0)
{
return x_40;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_40, 0);
x_46 = lean_ctor_get(x_40, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_40);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
else
{
uint8_t x_48; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
x_48 = !lean_is_exclusive(x_37);
if (x_48 == 0)
{
return x_37;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_37, 0);
x_50 = lean_ctor_get(x_37, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_37);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
lean_dec(x_16);
lean_dec(x_1);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_52; lean_object* x_53; 
lean_dec(x_3);
x_52 = lean_unsigned_to_nat(0u);
x_53 = l_Array_forMAux___main___at___private_Init_Lean_Elab_TermApp_1__synthesizeAppInstMVars___spec__1(x_6, x_12, x_52, x_4, x_17);
lean_dec(x_12);
if (lean_obj_tag(x_53) == 0)
{
uint8_t x_54; 
x_54 = !lean_is_exclusive(x_53);
if (x_54 == 0)
{
lean_object* x_55; 
x_55 = lean_ctor_get(x_53, 0);
lean_dec(x_55);
lean_ctor_set(x_53, 0, x_2);
return x_53;
}
else
{
lean_object* x_56; lean_object* x_57; 
x_56 = lean_ctor_get(x_53, 1);
lean_inc(x_56);
lean_dec(x_53);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_2);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
else
{
uint8_t x_58; 
lean_dec(x_2);
x_58 = !lean_is_exclusive(x_53);
if (x_58 == 0)
{
return x_53;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_53, 0);
x_60 = lean_ctor_get(x_53, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_53);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
else
{
lean_object* x_62; lean_object* x_63; 
x_62 = lean_ctor_get(x_8, 0);
lean_inc(x_62);
lean_dec(x_8);
lean_inc(x_4);
x_63 = l_Lean_Elab_Term_isDefEq(x_6, x_62, x_3, x_4, x_17);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_63, 1);
lean_inc(x_64);
lean_dec(x_63);
x_65 = lean_unsigned_to_nat(0u);
x_66 = l_Array_forMAux___main___at___private_Init_Lean_Elab_TermApp_1__synthesizeAppInstMVars___spec__1(x_6, x_12, x_65, x_4, x_64);
lean_dec(x_12);
if (lean_obj_tag(x_66) == 0)
{
uint8_t x_67; 
x_67 = !lean_is_exclusive(x_66);
if (x_67 == 0)
{
lean_object* x_68; 
x_68 = lean_ctor_get(x_66, 0);
lean_dec(x_68);
lean_ctor_set(x_66, 0, x_2);
return x_66;
}
else
{
lean_object* x_69; lean_object* x_70; 
x_69 = lean_ctor_get(x_66, 1);
lean_inc(x_69);
lean_dec(x_66);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_2);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
else
{
uint8_t x_71; 
lean_dec(x_2);
x_71 = !lean_is_exclusive(x_66);
if (x_71 == 0)
{
return x_66;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_66, 0);
x_73 = lean_ctor_get(x_66, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_66);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
}
else
{
uint8_t x_75; 
lean_dec(x_12);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_75 = !lean_is_exclusive(x_63);
if (x_75 == 0)
{
return x_63;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_63, 0);
x_77 = lean_ctor_get(x_63, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_63);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
}
}
}
}
}
else
{
uint8_t x_488; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_488 = !lean_is_exclusive(x_15);
if (x_488 == 0)
{
return x_15;
}
else
{
lean_object* x_489; lean_object* x_490; lean_object* x_491; 
x_489 = lean_ctor_get(x_15, 0);
x_490 = lean_ctor_get(x_15, 1);
lean_inc(x_490);
lean_inc(x_489);
lean_dec(x_15);
x_491 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_491, 0, x_489);
lean_ctor_set(x_491, 1, x_490);
return x_491;
}
}
}
}
lean_object* l_Array_findIdxAux___main___at___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_findIdxAux___main___at___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_12__elabAppArgs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_2);
x_9 = l_Lean_Elab_Term_inferType(x_1, x_2, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
lean_inc(x_7);
x_12 = l_Lean_Elab_Term_instantiateMVars(x_1, x_10, x_7, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_Term_tryPostponeIfMVar(x_13, x_7, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_unsigned_to_nat(0u);
x_18 = l_Array_empty___closed__1;
x_19 = 0;
x_20 = lean_alloc_ctor(0, 7, 2);
lean_ctor_set(x_20, 0, x_1);
lean_ctor_set(x_20, 1, x_4);
lean_ctor_set(x_20, 2, x_5);
lean_ctor_set(x_20, 3, x_17);
lean_ctor_set(x_20, 4, x_3);
lean_ctor_set(x_20, 5, x_18);
lean_ctor_set(x_20, 6, x_18);
lean_ctor_set_uint8(x_20, sizeof(void*)*7, x_6);
lean_ctor_set_uint8(x_20, sizeof(void*)*7 + 1, x_19);
x_21 = l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main(x_20, x_2, x_13, x_7, x_16);
return x_21;
}
else
{
uint8_t x_22; 
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_15);
if (x_22 == 0)
{
return x_15;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_15, 0);
x_24 = lean_ctor_get(x_15, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_15);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
uint8_t x_26; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_9);
if (x_26 == 0)
{
return x_9;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_9, 0);
x_28 = lean_ctor_get(x_9, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_9);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_12__elabAppArgs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_6);
lean_dec(x_6);
x_10 = l___private_Init_Lean_Elab_TermApp_12__elabAppArgs(x_1, x_2, x_3, x_4, x_5, x_9, x_7, x_8);
return x_10;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_13__throwLValError___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_7 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_7, 0, x_2);
x_8 = l_Lean_indentExpr(x_7);
x_9 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_9, 0, x_4);
lean_ctor_set(x_9, 1, x_8);
x_10 = l_Lean_MessageData_ofList___closed__3;
x_11 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
x_12 = l_Lean_Meta_Exception_mkAppTypeMismatchMessage___closed__8;
x_13 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_14, 0, x_3);
x_15 = l_Lean_indentExpr(x_14);
x_16 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_15);
x_17 = l_Lean_Elab_Term_throwError___rarg(x_1, x_16, x_5, x_6);
return x_17;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_13__throwLValError(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Lean_Elab_TermApp_13__throwLValError___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_13__throwLValError___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Init_Lean_Elab_TermApp_13__throwLValError___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid field notation, type is not of the form (C ...) where C is a constant");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid [..] notation, type is not of the form (C ...) where C is a constant");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid projection, structure has only ");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__7;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__8;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" field(s)");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__10;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__11;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid projection, structure expected");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__13;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__14;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid projection, index must be greater than 0");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__16;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__17;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__19() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid field notation, '");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__19;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__20;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__22() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' is not a valid \"field\" because environment does not contain '");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__22;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__23;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__25() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("getOp");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__26() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid [..] notation because environment does not contain '");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__27() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__26;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__28() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__27;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_14__resolveLValAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_13; 
x_13 = l_Lean_Expr_getAppFn___main(x_3);
if (lean_obj_tag(x_13) == 4)
{
switch (lean_obj_tag(x_4)) {
case 0:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get(x_4, 0);
lean_inc(x_15);
lean_dec(x_4);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_nat_dec_eq(x_15, x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_43; 
x_18 = l_Lean_Elab_Term_getEnv___rarg(x_6);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
if (lean_is_exclusive(x_18)) {
 lean_ctor_release(x_18, 0);
 lean_ctor_release(x_18, 1);
 x_21 = x_18;
} else {
 lean_dec_ref(x_18);
 x_21 = lean_box(0);
}
lean_inc(x_14);
lean_inc(x_19);
x_43 = l_Lean_isStructureLike(x_19, x_14);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; uint8_t x_46; 
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_15);
lean_dec(x_14);
x_44 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__15;
x_45 = l___private_Init_Lean_Elab_TermApp_13__throwLValError___rarg(x_1, x_2, x_3, x_44, x_5, x_20);
x_46 = !lean_is_exclusive(x_45);
if (x_46 == 0)
{
return x_45;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_45, 0);
x_48 = lean_ctor_get(x_45, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_45);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
else
{
x_22 = x_20;
goto block_42;
}
block_42:
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
lean_inc(x_14);
lean_inc(x_19);
x_23 = l_Lean_getStructureFields(x_19, x_14);
x_24 = lean_unsigned_to_nat(1u);
x_25 = lean_nat_sub(x_15, x_24);
lean_dec(x_15);
x_26 = lean_array_get_size(x_23);
x_27 = lean_nat_dec_lt(x_25, x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_14);
x_28 = l_Nat_repr(x_26);
x_29 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__9;
x_32 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
x_33 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__12;
x_34 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
x_35 = l___private_Init_Lean_Elab_TermApp_13__throwLValError___rarg(x_1, x_2, x_3, x_34, x_5, x_22);
return x_35;
}
else
{
uint8_t x_36; 
lean_dec(x_26);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_inc(x_14);
x_36 = l_Lean_isStructure(x_19, x_14);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
lean_dec(x_23);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_14);
lean_ctor_set(x_37, 1, x_25);
if (lean_is_scalar(x_21)) {
 x_38 = lean_alloc_ctor(0, 2, 0);
} else {
 x_38 = x_21;
}
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_22);
return x_38;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_array_fget(x_23, x_25);
lean_dec(x_25);
lean_dec(x_23);
lean_inc(x_14);
x_40 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_40, 0, x_14);
lean_ctor_set(x_40, 1, x_14);
lean_ctor_set(x_40, 2, x_39);
if (lean_is_scalar(x_21)) {
 x_41 = lean_alloc_ctor(0, 2, 0);
} else {
 x_41 = x_21;
}
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_22);
return x_41;
}
}
}
}
else
{
lean_object* x_50; lean_object* x_51; uint8_t x_52; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_3);
lean_dec(x_2);
x_50 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__18;
x_51 = l_Lean_Elab_Term_throwError___rarg(x_1, x_50, x_5, x_6);
x_52 = !lean_is_exclusive(x_51);
if (x_52 == 0)
{
return x_51;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_51, 0);
x_54 = lean_ctor_get(x_51, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_51);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
case 1:
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_56 = lean_ctor_get(x_13, 0);
lean_inc(x_56);
lean_dec(x_13);
x_57 = lean_ctor_get(x_4, 0);
lean_inc(x_57);
lean_dec(x_4);
x_58 = l_Lean_Elab_Term_getEnv___rarg(x_6);
x_59 = !lean_is_exclusive(x_58);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; uint8_t x_62; 
x_60 = lean_ctor_get(x_58, 0);
x_61 = lean_ctor_get(x_58, 1);
lean_inc(x_56);
lean_inc(x_60);
x_62 = l_Lean_isStructure(x_60, x_56);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
lean_free_object(x_58);
x_63 = lean_box(0);
lean_inc(x_57);
x_64 = lean_name_mk_string(x_63, x_57);
x_65 = l_Lean_Name_append___main(x_56, x_64);
x_66 = l_Lean_Elab_Term_getCurrNamespace(x_5, x_61);
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
lean_inc(x_65);
x_69 = l_Lean_Name_replacePrefix___main(x_65, x_67, x_63);
lean_dec(x_67);
x_70 = l_Lean_Elab_Term_getLCtx(x_5, x_68);
x_71 = !lean_is_exclusive(x_70);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_70, 0);
x_73 = lean_ctor_get(x_70, 1);
x_74 = lean_local_ctx_find_from_user_name(x_72, x_69);
if (lean_obj_tag(x_74) == 0)
{
lean_object* x_75; 
lean_inc(x_65);
x_75 = lean_environment_find(x_60, x_65);
if (lean_obj_tag(x_75) == 0)
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
lean_free_object(x_70);
lean_dec(x_56);
x_76 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_76, 0, x_57);
x_77 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_77, 0, x_76);
x_78 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__21;
x_79 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_77);
x_80 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__24;
x_81 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
x_82 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_82, 0, x_65);
x_83 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_83, 0, x_81);
lean_ctor_set(x_83, 1, x_82);
x_84 = l_Lean_Elab_Term_mkConst___closed__4;
x_85 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_84);
x_86 = l___private_Init_Lean_Elab_TermApp_13__throwLValError___rarg(x_1, x_2, x_3, x_85, x_5, x_73);
return x_86;
}
else
{
lean_object* x_87; 
lean_dec(x_75);
lean_dec(x_57);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_87 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_87, 0, x_56);
lean_ctor_set(x_87, 1, x_65);
lean_ctor_set(x_70, 0, x_87);
return x_70;
}
}
else
{
lean_object* x_88; uint8_t x_89; uint8_t x_90; uint8_t x_91; 
x_88 = lean_ctor_get(x_74, 0);
lean_inc(x_88);
lean_dec(x_74);
x_89 = l_Lean_LocalDecl_binderInfo(x_88);
x_90 = 4;
x_91 = l_Lean_BinderInfo_beq(x_89, x_90);
if (x_91 == 0)
{
lean_object* x_92; 
lean_dec(x_88);
lean_inc(x_65);
x_92 = lean_environment_find(x_60, x_65);
if (lean_obj_tag(x_92) == 0)
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
lean_free_object(x_70);
lean_dec(x_56);
x_93 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_93, 0, x_57);
x_94 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_94, 0, x_93);
x_95 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__21;
x_96 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_94);
x_97 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__24;
x_98 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_97);
x_99 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_99, 0, x_65);
x_100 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_100, 0, x_98);
lean_ctor_set(x_100, 1, x_99);
x_101 = l_Lean_Elab_Term_mkConst___closed__4;
x_102 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_102, 0, x_100);
lean_ctor_set(x_102, 1, x_101);
x_103 = l___private_Init_Lean_Elab_TermApp_13__throwLValError___rarg(x_1, x_2, x_3, x_102, x_5, x_73);
return x_103;
}
else
{
lean_object* x_104; 
lean_dec(x_92);
lean_dec(x_57);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_104 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_104, 0, x_56);
lean_ctor_set(x_104, 1, x_65);
lean_ctor_set(x_70, 0, x_104);
return x_70;
}
}
else
{
lean_object* x_105; lean_object* x_106; 
lean_dec(x_60);
lean_dec(x_57);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_105 = l_Lean_LocalDecl_toExpr(x_88);
lean_dec(x_88);
x_106 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_106, 0, x_56);
lean_ctor_set(x_106, 1, x_65);
lean_ctor_set(x_106, 2, x_105);
lean_ctor_set(x_70, 0, x_106);
return x_70;
}
}
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_107 = lean_ctor_get(x_70, 0);
x_108 = lean_ctor_get(x_70, 1);
lean_inc(x_108);
lean_inc(x_107);
lean_dec(x_70);
x_109 = lean_local_ctx_find_from_user_name(x_107, x_69);
if (lean_obj_tag(x_109) == 0)
{
lean_object* x_110; 
lean_inc(x_65);
x_110 = lean_environment_find(x_60, x_65);
if (lean_obj_tag(x_110) == 0)
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
lean_dec(x_56);
x_111 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_111, 0, x_57);
x_112 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_112, 0, x_111);
x_113 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__21;
x_114 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_112);
x_115 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__24;
x_116 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_116, 0, x_114);
lean_ctor_set(x_116, 1, x_115);
x_117 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_117, 0, x_65);
x_118 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_118, 0, x_116);
lean_ctor_set(x_118, 1, x_117);
x_119 = l_Lean_Elab_Term_mkConst___closed__4;
x_120 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_120, 0, x_118);
lean_ctor_set(x_120, 1, x_119);
x_121 = l___private_Init_Lean_Elab_TermApp_13__throwLValError___rarg(x_1, x_2, x_3, x_120, x_5, x_108);
return x_121;
}
else
{
lean_object* x_122; lean_object* x_123; 
lean_dec(x_110);
lean_dec(x_57);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_122 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_122, 0, x_56);
lean_ctor_set(x_122, 1, x_65);
x_123 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_123, 0, x_122);
lean_ctor_set(x_123, 1, x_108);
return x_123;
}
}
else
{
lean_object* x_124; uint8_t x_125; uint8_t x_126; uint8_t x_127; 
x_124 = lean_ctor_get(x_109, 0);
lean_inc(x_124);
lean_dec(x_109);
x_125 = l_Lean_LocalDecl_binderInfo(x_124);
x_126 = 4;
x_127 = l_Lean_BinderInfo_beq(x_125, x_126);
if (x_127 == 0)
{
lean_object* x_128; 
lean_dec(x_124);
lean_inc(x_65);
x_128 = lean_environment_find(x_60, x_65);
if (lean_obj_tag(x_128) == 0)
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
lean_dec(x_56);
x_129 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_129, 0, x_57);
x_130 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_130, 0, x_129);
x_131 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__21;
x_132 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_132, 0, x_131);
lean_ctor_set(x_132, 1, x_130);
x_133 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__24;
x_134 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_134, 0, x_132);
lean_ctor_set(x_134, 1, x_133);
x_135 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_135, 0, x_65);
x_136 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_136, 0, x_134);
lean_ctor_set(x_136, 1, x_135);
x_137 = l_Lean_Elab_Term_mkConst___closed__4;
x_138 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_138, 0, x_136);
lean_ctor_set(x_138, 1, x_137);
x_139 = l___private_Init_Lean_Elab_TermApp_13__throwLValError___rarg(x_1, x_2, x_3, x_138, x_5, x_108);
return x_139;
}
else
{
lean_object* x_140; lean_object* x_141; 
lean_dec(x_128);
lean_dec(x_57);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_140 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_140, 0, x_56);
lean_ctor_set(x_140, 1, x_65);
x_141 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_141, 0, x_140);
lean_ctor_set(x_141, 1, x_108);
return x_141;
}
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; 
lean_dec(x_60);
lean_dec(x_57);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_142 = l_Lean_LocalDecl_toExpr(x_124);
lean_dec(x_124);
x_143 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_143, 0, x_56);
lean_ctor_set(x_143, 1, x_65);
lean_ctor_set(x_143, 2, x_142);
x_144 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_144, 0, x_143);
lean_ctor_set(x_144, 1, x_108);
return x_144;
}
}
}
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; 
x_145 = lean_box(0);
lean_inc(x_57);
x_146 = lean_name_mk_string(x_145, x_57);
lean_inc(x_56);
lean_inc(x_60);
x_147 = l_Lean_findField_x3f___main(x_60, x_56, x_146);
if (lean_obj_tag(x_147) == 0)
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; uint8_t x_154; 
lean_free_object(x_58);
x_148 = l_Lean_Name_append___main(x_56, x_146);
x_149 = l_Lean_Elab_Term_getCurrNamespace(x_5, x_61);
x_150 = lean_ctor_get(x_149, 0);
lean_inc(x_150);
x_151 = lean_ctor_get(x_149, 1);
lean_inc(x_151);
lean_dec(x_149);
lean_inc(x_148);
x_152 = l_Lean_Name_replacePrefix___main(x_148, x_150, x_145);
lean_dec(x_150);
x_153 = l_Lean_Elab_Term_getLCtx(x_5, x_151);
x_154 = !lean_is_exclusive(x_153);
if (x_154 == 0)
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; 
x_155 = lean_ctor_get(x_153, 0);
x_156 = lean_ctor_get(x_153, 1);
x_157 = lean_local_ctx_find_from_user_name(x_155, x_152);
if (lean_obj_tag(x_157) == 0)
{
lean_object* x_158; 
lean_inc(x_148);
x_158 = lean_environment_find(x_60, x_148);
if (lean_obj_tag(x_158) == 0)
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
lean_free_object(x_153);
lean_dec(x_56);
x_159 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_159, 0, x_57);
x_160 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_160, 0, x_159);
x_161 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__21;
x_162 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_162, 0, x_161);
lean_ctor_set(x_162, 1, x_160);
x_163 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__24;
x_164 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_164, 0, x_162);
lean_ctor_set(x_164, 1, x_163);
x_165 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_165, 0, x_148);
x_166 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_166, 0, x_164);
lean_ctor_set(x_166, 1, x_165);
x_167 = l_Lean_Elab_Term_mkConst___closed__4;
x_168 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_168, 0, x_166);
lean_ctor_set(x_168, 1, x_167);
x_169 = l___private_Init_Lean_Elab_TermApp_13__throwLValError___rarg(x_1, x_2, x_3, x_168, x_5, x_156);
return x_169;
}
else
{
lean_object* x_170; 
lean_dec(x_158);
lean_dec(x_57);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_170 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_170, 0, x_56);
lean_ctor_set(x_170, 1, x_148);
lean_ctor_set(x_153, 0, x_170);
return x_153;
}
}
else
{
lean_object* x_171; uint8_t x_172; uint8_t x_173; uint8_t x_174; 
x_171 = lean_ctor_get(x_157, 0);
lean_inc(x_171);
lean_dec(x_157);
x_172 = l_Lean_LocalDecl_binderInfo(x_171);
x_173 = 4;
x_174 = l_Lean_BinderInfo_beq(x_172, x_173);
if (x_174 == 0)
{
lean_object* x_175; 
lean_dec(x_171);
lean_inc(x_148);
x_175 = lean_environment_find(x_60, x_148);
if (lean_obj_tag(x_175) == 0)
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; 
lean_free_object(x_153);
lean_dec(x_56);
x_176 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_176, 0, x_57);
x_177 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_177, 0, x_176);
x_178 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__21;
x_179 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_179, 0, x_178);
lean_ctor_set(x_179, 1, x_177);
x_180 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__24;
x_181 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_181, 0, x_179);
lean_ctor_set(x_181, 1, x_180);
x_182 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_182, 0, x_148);
x_183 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_183, 0, x_181);
lean_ctor_set(x_183, 1, x_182);
x_184 = l_Lean_Elab_Term_mkConst___closed__4;
x_185 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_185, 0, x_183);
lean_ctor_set(x_185, 1, x_184);
x_186 = l___private_Init_Lean_Elab_TermApp_13__throwLValError___rarg(x_1, x_2, x_3, x_185, x_5, x_156);
return x_186;
}
else
{
lean_object* x_187; 
lean_dec(x_175);
lean_dec(x_57);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_187 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_187, 0, x_56);
lean_ctor_set(x_187, 1, x_148);
lean_ctor_set(x_153, 0, x_187);
return x_153;
}
}
else
{
lean_object* x_188; lean_object* x_189; 
lean_dec(x_60);
lean_dec(x_57);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_188 = l_Lean_LocalDecl_toExpr(x_171);
lean_dec(x_171);
x_189 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_189, 0, x_56);
lean_ctor_set(x_189, 1, x_148);
lean_ctor_set(x_189, 2, x_188);
lean_ctor_set(x_153, 0, x_189);
return x_153;
}
}
}
else
{
lean_object* x_190; lean_object* x_191; lean_object* x_192; 
x_190 = lean_ctor_get(x_153, 0);
x_191 = lean_ctor_get(x_153, 1);
lean_inc(x_191);
lean_inc(x_190);
lean_dec(x_153);
x_192 = lean_local_ctx_find_from_user_name(x_190, x_152);
if (lean_obj_tag(x_192) == 0)
{
lean_object* x_193; 
lean_inc(x_148);
x_193 = lean_environment_find(x_60, x_148);
if (lean_obj_tag(x_193) == 0)
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; 
lean_dec(x_56);
x_194 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_194, 0, x_57);
x_195 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_195, 0, x_194);
x_196 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__21;
x_197 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_197, 0, x_196);
lean_ctor_set(x_197, 1, x_195);
x_198 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__24;
x_199 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_199, 0, x_197);
lean_ctor_set(x_199, 1, x_198);
x_200 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_200, 0, x_148);
x_201 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_201, 0, x_199);
lean_ctor_set(x_201, 1, x_200);
x_202 = l_Lean_Elab_Term_mkConst___closed__4;
x_203 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_203, 0, x_201);
lean_ctor_set(x_203, 1, x_202);
x_204 = l___private_Init_Lean_Elab_TermApp_13__throwLValError___rarg(x_1, x_2, x_3, x_203, x_5, x_191);
return x_204;
}
else
{
lean_object* x_205; lean_object* x_206; 
lean_dec(x_193);
lean_dec(x_57);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_205 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_205, 0, x_56);
lean_ctor_set(x_205, 1, x_148);
x_206 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_206, 0, x_205);
lean_ctor_set(x_206, 1, x_191);
return x_206;
}
}
else
{
lean_object* x_207; uint8_t x_208; uint8_t x_209; uint8_t x_210; 
x_207 = lean_ctor_get(x_192, 0);
lean_inc(x_207);
lean_dec(x_192);
x_208 = l_Lean_LocalDecl_binderInfo(x_207);
x_209 = 4;
x_210 = l_Lean_BinderInfo_beq(x_208, x_209);
if (x_210 == 0)
{
lean_object* x_211; 
lean_dec(x_207);
lean_inc(x_148);
x_211 = lean_environment_find(x_60, x_148);
if (lean_obj_tag(x_211) == 0)
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; 
lean_dec(x_56);
x_212 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_212, 0, x_57);
x_213 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_213, 0, x_212);
x_214 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__21;
x_215 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_215, 0, x_214);
lean_ctor_set(x_215, 1, x_213);
x_216 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__24;
x_217 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_217, 0, x_215);
lean_ctor_set(x_217, 1, x_216);
x_218 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_218, 0, x_148);
x_219 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_219, 0, x_217);
lean_ctor_set(x_219, 1, x_218);
x_220 = l_Lean_Elab_Term_mkConst___closed__4;
x_221 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_221, 0, x_219);
lean_ctor_set(x_221, 1, x_220);
x_222 = l___private_Init_Lean_Elab_TermApp_13__throwLValError___rarg(x_1, x_2, x_3, x_221, x_5, x_191);
return x_222;
}
else
{
lean_object* x_223; lean_object* x_224; 
lean_dec(x_211);
lean_dec(x_57);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_223 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_223, 0, x_56);
lean_ctor_set(x_223, 1, x_148);
x_224 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_224, 0, x_223);
lean_ctor_set(x_224, 1, x_191);
return x_224;
}
}
else
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; 
lean_dec(x_60);
lean_dec(x_57);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_225 = l_Lean_LocalDecl_toExpr(x_207);
lean_dec(x_207);
x_226 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_226, 0, x_56);
lean_ctor_set(x_226, 1, x_148);
lean_ctor_set(x_226, 2, x_225);
x_227 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_227, 0, x_226);
lean_ctor_set(x_227, 1, x_191);
return x_227;
}
}
}
}
else
{
lean_object* x_228; lean_object* x_229; 
lean_dec(x_60);
lean_dec(x_57);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_228 = lean_ctor_get(x_147, 0);
lean_inc(x_228);
lean_dec(x_147);
x_229 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_229, 0, x_228);
lean_ctor_set(x_229, 1, x_56);
lean_ctor_set(x_229, 2, x_146);
lean_ctor_set(x_58, 0, x_229);
return x_58;
}
}
}
else
{
lean_object* x_230; lean_object* x_231; uint8_t x_232; 
x_230 = lean_ctor_get(x_58, 0);
x_231 = lean_ctor_get(x_58, 1);
lean_inc(x_231);
lean_inc(x_230);
lean_dec(x_58);
lean_inc(x_56);
lean_inc(x_230);
x_232 = l_Lean_isStructure(x_230, x_56);
if (x_232 == 0)
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; 
x_233 = lean_box(0);
lean_inc(x_57);
x_234 = lean_name_mk_string(x_233, x_57);
x_235 = l_Lean_Name_append___main(x_56, x_234);
x_236 = l_Lean_Elab_Term_getCurrNamespace(x_5, x_231);
x_237 = lean_ctor_get(x_236, 0);
lean_inc(x_237);
x_238 = lean_ctor_get(x_236, 1);
lean_inc(x_238);
lean_dec(x_236);
lean_inc(x_235);
x_239 = l_Lean_Name_replacePrefix___main(x_235, x_237, x_233);
lean_dec(x_237);
x_240 = l_Lean_Elab_Term_getLCtx(x_5, x_238);
x_241 = lean_ctor_get(x_240, 0);
lean_inc(x_241);
x_242 = lean_ctor_get(x_240, 1);
lean_inc(x_242);
if (lean_is_exclusive(x_240)) {
 lean_ctor_release(x_240, 0);
 lean_ctor_release(x_240, 1);
 x_243 = x_240;
} else {
 lean_dec_ref(x_240);
 x_243 = lean_box(0);
}
x_244 = lean_local_ctx_find_from_user_name(x_241, x_239);
if (lean_obj_tag(x_244) == 0)
{
lean_object* x_245; 
lean_inc(x_235);
x_245 = lean_environment_find(x_230, x_235);
if (lean_obj_tag(x_245) == 0)
{
lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; 
lean_dec(x_243);
lean_dec(x_56);
x_246 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_246, 0, x_57);
x_247 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_247, 0, x_246);
x_248 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__21;
x_249 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_249, 0, x_248);
lean_ctor_set(x_249, 1, x_247);
x_250 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__24;
x_251 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_251, 0, x_249);
lean_ctor_set(x_251, 1, x_250);
x_252 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_252, 0, x_235);
x_253 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_253, 0, x_251);
lean_ctor_set(x_253, 1, x_252);
x_254 = l_Lean_Elab_Term_mkConst___closed__4;
x_255 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_255, 0, x_253);
lean_ctor_set(x_255, 1, x_254);
x_256 = l___private_Init_Lean_Elab_TermApp_13__throwLValError___rarg(x_1, x_2, x_3, x_255, x_5, x_242);
return x_256;
}
else
{
lean_object* x_257; lean_object* x_258; 
lean_dec(x_245);
lean_dec(x_57);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_257 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_257, 0, x_56);
lean_ctor_set(x_257, 1, x_235);
if (lean_is_scalar(x_243)) {
 x_258 = lean_alloc_ctor(0, 2, 0);
} else {
 x_258 = x_243;
}
lean_ctor_set(x_258, 0, x_257);
lean_ctor_set(x_258, 1, x_242);
return x_258;
}
}
else
{
lean_object* x_259; uint8_t x_260; uint8_t x_261; uint8_t x_262; 
x_259 = lean_ctor_get(x_244, 0);
lean_inc(x_259);
lean_dec(x_244);
x_260 = l_Lean_LocalDecl_binderInfo(x_259);
x_261 = 4;
x_262 = l_Lean_BinderInfo_beq(x_260, x_261);
if (x_262 == 0)
{
lean_object* x_263; 
lean_dec(x_259);
lean_inc(x_235);
x_263 = lean_environment_find(x_230, x_235);
if (lean_obj_tag(x_263) == 0)
{
lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; 
lean_dec(x_243);
lean_dec(x_56);
x_264 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_264, 0, x_57);
x_265 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_265, 0, x_264);
x_266 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__21;
x_267 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_267, 0, x_266);
lean_ctor_set(x_267, 1, x_265);
x_268 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__24;
x_269 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_269, 0, x_267);
lean_ctor_set(x_269, 1, x_268);
x_270 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_270, 0, x_235);
x_271 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_271, 0, x_269);
lean_ctor_set(x_271, 1, x_270);
x_272 = l_Lean_Elab_Term_mkConst___closed__4;
x_273 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_273, 0, x_271);
lean_ctor_set(x_273, 1, x_272);
x_274 = l___private_Init_Lean_Elab_TermApp_13__throwLValError___rarg(x_1, x_2, x_3, x_273, x_5, x_242);
return x_274;
}
else
{
lean_object* x_275; lean_object* x_276; 
lean_dec(x_263);
lean_dec(x_57);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_275 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_275, 0, x_56);
lean_ctor_set(x_275, 1, x_235);
if (lean_is_scalar(x_243)) {
 x_276 = lean_alloc_ctor(0, 2, 0);
} else {
 x_276 = x_243;
}
lean_ctor_set(x_276, 0, x_275);
lean_ctor_set(x_276, 1, x_242);
return x_276;
}
}
else
{
lean_object* x_277; lean_object* x_278; lean_object* x_279; 
lean_dec(x_230);
lean_dec(x_57);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_277 = l_Lean_LocalDecl_toExpr(x_259);
lean_dec(x_259);
x_278 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_278, 0, x_56);
lean_ctor_set(x_278, 1, x_235);
lean_ctor_set(x_278, 2, x_277);
if (lean_is_scalar(x_243)) {
 x_279 = lean_alloc_ctor(0, 2, 0);
} else {
 x_279 = x_243;
}
lean_ctor_set(x_279, 0, x_278);
lean_ctor_set(x_279, 1, x_242);
return x_279;
}
}
}
else
{
lean_object* x_280; lean_object* x_281; lean_object* x_282; 
x_280 = lean_box(0);
lean_inc(x_57);
x_281 = lean_name_mk_string(x_280, x_57);
lean_inc(x_56);
lean_inc(x_230);
x_282 = l_Lean_findField_x3f___main(x_230, x_56, x_281);
if (lean_obj_tag(x_282) == 0)
{
lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; 
x_283 = l_Lean_Name_append___main(x_56, x_281);
x_284 = l_Lean_Elab_Term_getCurrNamespace(x_5, x_231);
x_285 = lean_ctor_get(x_284, 0);
lean_inc(x_285);
x_286 = lean_ctor_get(x_284, 1);
lean_inc(x_286);
lean_dec(x_284);
lean_inc(x_283);
x_287 = l_Lean_Name_replacePrefix___main(x_283, x_285, x_280);
lean_dec(x_285);
x_288 = l_Lean_Elab_Term_getLCtx(x_5, x_286);
x_289 = lean_ctor_get(x_288, 0);
lean_inc(x_289);
x_290 = lean_ctor_get(x_288, 1);
lean_inc(x_290);
if (lean_is_exclusive(x_288)) {
 lean_ctor_release(x_288, 0);
 lean_ctor_release(x_288, 1);
 x_291 = x_288;
} else {
 lean_dec_ref(x_288);
 x_291 = lean_box(0);
}
x_292 = lean_local_ctx_find_from_user_name(x_289, x_287);
if (lean_obj_tag(x_292) == 0)
{
lean_object* x_293; 
lean_inc(x_283);
x_293 = lean_environment_find(x_230, x_283);
if (lean_obj_tag(x_293) == 0)
{
lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; 
lean_dec(x_291);
lean_dec(x_56);
x_294 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_294, 0, x_57);
x_295 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_295, 0, x_294);
x_296 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__21;
x_297 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_297, 0, x_296);
lean_ctor_set(x_297, 1, x_295);
x_298 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__24;
x_299 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_299, 0, x_297);
lean_ctor_set(x_299, 1, x_298);
x_300 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_300, 0, x_283);
x_301 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_301, 0, x_299);
lean_ctor_set(x_301, 1, x_300);
x_302 = l_Lean_Elab_Term_mkConst___closed__4;
x_303 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_303, 0, x_301);
lean_ctor_set(x_303, 1, x_302);
x_304 = l___private_Init_Lean_Elab_TermApp_13__throwLValError___rarg(x_1, x_2, x_3, x_303, x_5, x_290);
return x_304;
}
else
{
lean_object* x_305; lean_object* x_306; 
lean_dec(x_293);
lean_dec(x_57);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_305 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_305, 0, x_56);
lean_ctor_set(x_305, 1, x_283);
if (lean_is_scalar(x_291)) {
 x_306 = lean_alloc_ctor(0, 2, 0);
} else {
 x_306 = x_291;
}
lean_ctor_set(x_306, 0, x_305);
lean_ctor_set(x_306, 1, x_290);
return x_306;
}
}
else
{
lean_object* x_307; uint8_t x_308; uint8_t x_309; uint8_t x_310; 
x_307 = lean_ctor_get(x_292, 0);
lean_inc(x_307);
lean_dec(x_292);
x_308 = l_Lean_LocalDecl_binderInfo(x_307);
x_309 = 4;
x_310 = l_Lean_BinderInfo_beq(x_308, x_309);
if (x_310 == 0)
{
lean_object* x_311; 
lean_dec(x_307);
lean_inc(x_283);
x_311 = lean_environment_find(x_230, x_283);
if (lean_obj_tag(x_311) == 0)
{
lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; 
lean_dec(x_291);
lean_dec(x_56);
x_312 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_312, 0, x_57);
x_313 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_313, 0, x_312);
x_314 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__21;
x_315 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_315, 0, x_314);
lean_ctor_set(x_315, 1, x_313);
x_316 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__24;
x_317 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_317, 0, x_315);
lean_ctor_set(x_317, 1, x_316);
x_318 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_318, 0, x_283);
x_319 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_319, 0, x_317);
lean_ctor_set(x_319, 1, x_318);
x_320 = l_Lean_Elab_Term_mkConst___closed__4;
x_321 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_321, 0, x_319);
lean_ctor_set(x_321, 1, x_320);
x_322 = l___private_Init_Lean_Elab_TermApp_13__throwLValError___rarg(x_1, x_2, x_3, x_321, x_5, x_290);
return x_322;
}
else
{
lean_object* x_323; lean_object* x_324; 
lean_dec(x_311);
lean_dec(x_57);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_323 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_323, 0, x_56);
lean_ctor_set(x_323, 1, x_283);
if (lean_is_scalar(x_291)) {
 x_324 = lean_alloc_ctor(0, 2, 0);
} else {
 x_324 = x_291;
}
lean_ctor_set(x_324, 0, x_323);
lean_ctor_set(x_324, 1, x_290);
return x_324;
}
}
else
{
lean_object* x_325; lean_object* x_326; lean_object* x_327; 
lean_dec(x_230);
lean_dec(x_57);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_325 = l_Lean_LocalDecl_toExpr(x_307);
lean_dec(x_307);
x_326 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_326, 0, x_56);
lean_ctor_set(x_326, 1, x_283);
lean_ctor_set(x_326, 2, x_325);
if (lean_is_scalar(x_291)) {
 x_327 = lean_alloc_ctor(0, 2, 0);
} else {
 x_327 = x_291;
}
lean_ctor_set(x_327, 0, x_326);
lean_ctor_set(x_327, 1, x_290);
return x_327;
}
}
}
else
{
lean_object* x_328; lean_object* x_329; lean_object* x_330; 
lean_dec(x_230);
lean_dec(x_57);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_328 = lean_ctor_get(x_282, 0);
lean_inc(x_328);
lean_dec(x_282);
x_329 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_329, 0, x_328);
lean_ctor_set(x_329, 1, x_56);
lean_ctor_set(x_329, 2, x_281);
x_330 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_330, 0, x_329);
lean_ctor_set(x_330, 1, x_231);
return x_330;
}
}
}
}
default: 
{
lean_object* x_331; lean_object* x_332; lean_object* x_333; uint8_t x_334; 
x_331 = lean_ctor_get(x_13, 0);
lean_inc(x_331);
lean_dec(x_13);
x_332 = lean_ctor_get(x_4, 0);
lean_inc(x_332);
lean_dec(x_4);
x_333 = l_Lean_Elab_Term_getEnv___rarg(x_6);
x_334 = !lean_is_exclusive(x_333);
if (x_334 == 0)
{
lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; 
x_335 = lean_ctor_get(x_333, 0);
x_336 = lean_ctor_get(x_333, 1);
x_337 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__25;
x_338 = lean_name_mk_string(x_331, x_337);
lean_inc(x_338);
x_339 = lean_environment_find(x_335, x_338);
if (lean_obj_tag(x_339) == 0)
{
lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; 
lean_free_object(x_333);
lean_dec(x_332);
x_340 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_340, 0, x_338);
x_341 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__28;
x_342 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_342, 0, x_341);
lean_ctor_set(x_342, 1, x_340);
x_343 = l_Lean_Elab_Term_mkConst___closed__4;
x_344 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_344, 0, x_342);
lean_ctor_set(x_344, 1, x_343);
x_345 = l___private_Init_Lean_Elab_TermApp_13__throwLValError___rarg(x_1, x_2, x_3, x_344, x_5, x_336);
return x_345;
}
else
{
lean_object* x_346; 
lean_dec(x_339);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_346 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_346, 0, x_338);
lean_ctor_set(x_346, 1, x_332);
lean_ctor_set(x_333, 0, x_346);
return x_333;
}
}
else
{
lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; 
x_347 = lean_ctor_get(x_333, 0);
x_348 = lean_ctor_get(x_333, 1);
lean_inc(x_348);
lean_inc(x_347);
lean_dec(x_333);
x_349 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__25;
x_350 = lean_name_mk_string(x_331, x_349);
lean_inc(x_350);
x_351 = lean_environment_find(x_347, x_350);
if (lean_obj_tag(x_351) == 0)
{
lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; 
lean_dec(x_332);
x_352 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_352, 0, x_350);
x_353 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__28;
x_354 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_354, 0, x_353);
lean_ctor_set(x_354, 1, x_352);
x_355 = l_Lean_Elab_Term_mkConst___closed__4;
x_356 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_356, 0, x_354);
lean_ctor_set(x_356, 1, x_355);
x_357 = l___private_Init_Lean_Elab_TermApp_13__throwLValError___rarg(x_1, x_2, x_3, x_356, x_5, x_348);
return x_357;
}
else
{
lean_object* x_358; lean_object* x_359; 
lean_dec(x_351);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_358 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_358, 0, x_350);
lean_ctor_set(x_358, 1, x_332);
x_359 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_359, 0, x_358);
lean_ctor_set(x_359, 1, x_348);
return x_359;
}
}
}
}
}
else
{
lean_object* x_360; 
lean_dec(x_13);
x_360 = lean_box(0);
x_7 = x_360;
goto block_12;
}
block_12:
{
lean_dec(x_7);
if (lean_obj_tag(x_4) == 2)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
x_8 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__6;
x_9 = l___private_Init_Lean_Elab_TermApp_13__throwLValError___rarg(x_1, x_2, x_3, x_8, x_5, x_6);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
x_10 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__3;
x_11 = l___private_Init_Lean_Elab_TermApp_13__throwLValError___rarg(x_1, x_2, x_3, x_10, x_5, x_6);
return x_11;
}
}
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_forMAux___main___at___private_Init_Lean_Elab_TermApp_15__resolveLValLoop___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_2);
x_7 = lean_nat_dec_lt(x_3, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
lean_dec(x_1);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_5);
return x_9;
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_5);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_5, 2);
lean_inc(x_1);
x_12 = l_PersistentArray_push___rarg(x_11, x_1);
lean_ctor_set(x_5, 2, x_12);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_3, x_13);
lean_dec(x_3);
x_3 = x_14;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_16 = lean_ctor_get(x_5, 0);
x_17 = lean_ctor_get(x_5, 1);
x_18 = lean_ctor_get(x_5, 2);
x_19 = lean_ctor_get(x_5, 3);
x_20 = lean_ctor_get(x_5, 4);
x_21 = lean_ctor_get(x_5, 5);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_5);
lean_inc(x_1);
x_22 = l_PersistentArray_push___rarg(x_18, x_1);
x_23 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_23, 0, x_16);
lean_ctor_set(x_23, 1, x_17);
lean_ctor_set(x_23, 2, x_22);
lean_ctor_set(x_23, 3, x_19);
lean_ctor_set(x_23, 4, x_20);
lean_ctor_set(x_23, 5, x_21);
x_24 = lean_unsigned_to_nat(1u);
x_25 = lean_nat_add(x_3, x_24);
lean_dec(x_3);
x_3 = x_25;
x_5 = x_23;
goto _start;
}
}
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_15__resolveLValLoop___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
x_8 = l_Lean_Elab_Term_whnfCore(x_1, x_4, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_Lean_Elab_Term_tryPostponeIfMVar(x_9, x_6, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
lean_inc(x_6);
lean_inc(x_3);
lean_inc(x_9);
lean_inc(x_2);
x_13 = l___private_Init_Lean_Elab_TermApp_14__resolveLValAux(x_1, x_2, x_9, x_3, x_6, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_dec(x_13);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_6);
x_18 = l_Lean_Elab_Term_unfoldDefinition_x3f(x_1, x_9, x_6, x_16);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
lean_dec(x_3);
lean_dec(x_2);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_unsigned_to_nat(0u);
x_22 = l_Array_forMAux___main___at___private_Init_Lean_Elab_TermApp_15__resolveLValLoop___main___spec__1(x_17, x_5, x_21, x_6, x_20);
lean_dec(x_6);
lean_dec(x_5);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_22, 0);
lean_dec(x_24);
lean_ctor_set_tag(x_22, 1);
lean_ctor_set(x_22, 0, x_14);
return x_22;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_14);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_14);
x_27 = lean_ctor_get(x_18, 1);
lean_inc(x_27);
lean_dec(x_18);
x_28 = lean_ctor_get(x_19, 0);
lean_inc(x_28);
lean_dec(x_19);
x_29 = lean_array_push(x_5, x_17);
x_4 = x_28;
x_5 = x_29;
x_7 = x_27;
goto _start;
}
}
else
{
uint8_t x_31; 
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_31 = !lean_is_exclusive(x_18);
if (x_31 == 0)
{
return x_18;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_18, 0);
x_33 = lean_ctor_get(x_18, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_18);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
uint8_t x_35; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_35 = !lean_is_exclusive(x_13);
if (x_35 == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_13, 0);
lean_dec(x_36);
return x_13;
}
else
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_13, 1);
lean_inc(x_37);
lean_dec(x_13);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_14);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
else
{
uint8_t x_39; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_39 = !lean_is_exclusive(x_11);
if (x_39 == 0)
{
return x_11;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_11, 0);
x_41 = lean_ctor_get(x_11, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_11);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
else
{
uint8_t x_43; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_43 = !lean_is_exclusive(x_8);
if (x_43 == 0)
{
return x_8;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_8, 0);
x_45 = lean_ctor_get(x_8, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_8);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
lean_object* l_Array_forMAux___main___at___private_Init_Lean_Elab_TermApp_15__resolveLValLoop___main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_forMAux___main___at___private_Init_Lean_Elab_TermApp_15__resolveLValLoop___main___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_6;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_15__resolveLValLoop___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Init_Lean_Elab_TermApp_15__resolveLValLoop___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_15__resolveLValLoop(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Init_Lean_Elab_TermApp_15__resolveLValLoop___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_15__resolveLValLoop___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Init_Lean_Elab_TermApp_15__resolveLValLoop(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_16__resolveLVal(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_4);
lean_inc(x_2);
x_6 = l_Lean_Elab_Term_inferType(x_1, x_2, x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_Array_empty___closed__1;
x_10 = l___private_Init_Lean_Elab_TermApp_15__resolveLValLoop___main(x_1, x_2, x_3, x_7, x_9, x_4, x_8);
return x_10;
}
else
{
uint8_t x_11; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_11 = !lean_is_exclusive(x_6);
if (x_11 == 0)
{
return x_6;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_6, 0);
x_13 = lean_ctor_get(x_6, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_6);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_16__resolveLVal___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Init_Lean_Elab_TermApp_16__resolveLVal(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* _init_l_List_foldlM___main___at___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("self");
return x_1;
}
}
lean_object* _init_l_List_foldlM___main___at___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___spec__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_List_foldlM___main___at___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___spec__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_List_foldlM___main___at___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_1);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
lean_dec(x_3);
x_9 = lean_box(0);
lean_inc(x_4);
x_10 = l_Lean_Elab_Term_mkConst(x_1, x_7, x_9, x_4, x_5);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_2);
x_14 = l_List_foldlM___main___at___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___spec__1___closed__2;
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
x_16 = l_Lean_mkOptionalNode___closed__2;
x_17 = lean_array_push(x_16, x_15);
x_18 = lean_box(0);
x_19 = l_Array_empty___closed__1;
x_20 = 0;
lean_inc(x_4);
lean_inc(x_1);
x_21 = l___private_Init_Lean_Elab_TermApp_12__elabAppArgs(x_1, x_11, x_17, x_19, x_18, x_20, x_4, x_12);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_2 = x_22;
x_3 = x_8;
x_5 = x_23;
goto _start;
}
else
{
uint8_t x_25; 
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_21);
if (x_25 == 0)
{
return x_21;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_21, 0);
x_27 = lean_ctor_get(x_21, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_21);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
uint8_t x_29; 
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_29 = !lean_is_exclusive(x_10);
if (x_29 == 0)
{
return x_10;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_10, 0);
x_31 = lean_ctor_get(x_10, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_10);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failed to access field in parent structure");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_17__mkBaseProjections(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = l_Lean_Elab_Term_getEnv___rarg(x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Lean_getPathToBaseStructure_x3f(x_8, x_2, x_3);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_4);
x_11 = l___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___closed__3;
x_12 = l_Lean_Elab_Term_throwError___rarg(x_1, x_11, x_5, x_9);
lean_dec(x_1);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
x_14 = l_List_foldlM___main___at___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___spec__1(x_1, x_4, x_13, x_5, x_9);
return x_14;
}
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Init_Lean_Elab_TermApp_17__mkBaseProjections(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Array_findIdxAux___main___at___private_Init_Lean_Elab_TermApp_18__addLValArg___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_3);
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_name_eq(x_8, x_1);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_3, x_10);
lean_dec(x_3);
x_3 = x_11;
goto _start;
}
else
{
lean_object* x_13; 
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_3);
return x_13;
}
}
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid field notation, function '");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' does not have explicit argument with type (");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" ...)");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__7;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__8;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid field notation, insufficient number of arguments for '");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__10;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__11;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_18__addLValArg___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
if (lean_obj_tag(x_8) == 7)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint64_t x_26; uint8_t x_27; uint8_t x_28; 
x_23 = lean_ctor_get(x_8, 0);
x_24 = lean_ctor_get(x_8, 1);
x_25 = lean_ctor_get(x_8, 2);
x_26 = lean_ctor_get_uint64(x_8, sizeof(void*)*3);
x_27 = (uint8_t)((x_26 << 24) >> 61);
x_28 = l_Lean_BinderInfo_isExplicit(x_27);
if (x_28 == 0)
{
x_8 = x_25;
goto _start;
}
else
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_unsigned_to_nat(0u);
x_31 = l_Array_findIdxAux___main___at___private_Init_Lean_Elab_TermApp_18__addLValArg___main___spec__1(x_23, x_7, x_30);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; uint8_t x_33; 
x_32 = l_Lean_Expr_consumeMData___main(x_24);
x_33 = l_Lean_Expr_isAppOf(x_32, x_2);
lean_dec(x_32);
if (x_33 == 0)
{
lean_object* x_34; uint8_t x_35; 
x_34 = lean_array_get_size(x_5);
x_35 = lean_nat_dec_lt(x_6, x_34);
lean_dec(x_34);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_36 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_36, 0, x_3);
x_37 = l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__12;
x_38 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_36);
x_39 = l_Lean_Elab_Term_mkConst___closed__4;
x_40 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
x_41 = l_Lean_Elab_Term_throwError___rarg(x_1, x_40, x_9, x_10);
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_unsigned_to_nat(1u);
x_43 = lean_nat_add(x_6, x_42);
lean_dec(x_6);
x_6 = x_43;
x_8 = x_25;
goto _start;
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
x_45 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_45, 0, x_4);
x_46 = l_Array_insertAt___rarg(x_5, x_6, x_45);
lean_dec(x_6);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_10);
return x_47;
}
}
else
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_31, 0);
lean_inc(x_48);
lean_dec(x_31);
x_49 = l_Array_eraseIdx___rarg(x_7, x_48);
lean_dec(x_48);
x_7 = x_49;
x_8 = x_25;
goto _start;
}
}
}
else
{
lean_object* x_51; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_51 = lean_box(0);
x_11 = x_51;
goto block_22;
}
block_22:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_11);
x_12 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_12, 0, x_3);
x_13 = l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__3;
x_14 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
x_15 = l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__6;
x_16 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_17, 0, x_2);
x_18 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
x_19 = l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__9;
x_20 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_Lean_Elab_Term_throwError___rarg(x_1, x_20, x_9, x_10);
return x_21;
}
}
}
lean_object* l_Array_findIdxAux___main___at___private_Init_Lean_Elab_TermApp_18__addLValArg___main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_findIdxAux___main___at___private_Init_Lean_Elab_TermApp_18__addLValArg___main___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Init_Lean_Elab_TermApp_18__addLValArg___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_8);
lean_dec(x_1);
return x_11;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_18__addLValArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Init_Lean_Elab_TermApp_18__addLValArg___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_18__addLValArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Init_Lean_Elab_TermApp_18__addLValArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_8);
lean_dec(x_1);
return x_11;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_19__elabAppLValsAux___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("idx");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_19__elabAppLValsAux___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Init_Lean_Elab_TermApp_19__elabAppLValsAux___main___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_19__elabAppLValsAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_10; 
x_10 = l___private_Init_Lean_Elab_TermApp_12__elabAppArgs(x_1, x_6, x_2, x_3, x_4, x_5, x_8, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
lean_dec(x_7);
lean_inc(x_8);
lean_inc(x_6);
x_13 = l___private_Init_Lean_Elab_TermApp_16__resolveLVal(x_1, x_6, x_11, x_8, x_9);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
switch (lean_obj_tag(x_14)) {
case 0:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
x_18 = lean_ctor_get(x_14, 2);
lean_inc(x_18);
lean_dec(x_14);
lean_inc(x_8);
lean_inc(x_1);
x_19 = l___private_Init_Lean_Elab_TermApp_17__mkBaseProjections(x_1, x_16, x_17, x_6, x_8, x_15);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_Name_append___main(x_16, x_18);
lean_dec(x_16);
x_23 = lean_box(0);
lean_inc(x_8);
x_24 = l_Lean_Elab_Term_mkConst(x_1, x_22, x_23, x_8, x_21);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l_List_isEmpty___rarg(x_12);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; lean_object* x_36; 
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_20);
x_29 = l_List_foldlM___main___at___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___spec__1___closed__2;
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
x_31 = l_Lean_mkOptionalNode___closed__2;
x_32 = lean_array_push(x_31, x_30);
x_33 = lean_box(0);
x_34 = l_Array_empty___closed__1;
x_35 = 0;
lean_inc(x_8);
lean_inc(x_1);
x_36 = l___private_Init_Lean_Elab_TermApp_12__elabAppArgs(x_1, x_25, x_32, x_34, x_33, x_35, x_8, x_26);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_6 = x_37;
x_7 = x_12;
x_9 = x_38;
goto _start;
}
else
{
uint8_t x_40; 
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_40 = !lean_is_exclusive(x_36);
if (x_40 == 0)
{
return x_36;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_36, 0);
x_42 = lean_ctor_get(x_36, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_36);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_12);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_20);
x_45 = l_List_foldlM___main___at___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___spec__1___closed__2;
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_44);
lean_inc(x_8);
x_47 = l_Lean_Elab_Term_addNamedArg(x_1, x_2, x_46, x_8, x_26);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
x_50 = l___private_Init_Lean_Elab_TermApp_12__elabAppArgs(x_1, x_25, x_48, x_3, x_4, x_5, x_8, x_49);
return x_50;
}
else
{
uint8_t x_51; 
lean_dec(x_25);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_47);
if (x_51 == 0)
{
return x_47;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_47, 0);
x_53 = lean_ctor_get(x_47, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_47);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
}
else
{
uint8_t x_55; 
lean_dec(x_20);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_55 = !lean_is_exclusive(x_24);
if (x_55 == 0)
{
return x_24;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_24, 0);
x_57 = lean_ctor_get(x_24, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_24);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
else
{
uint8_t x_59; 
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_59 = !lean_is_exclusive(x_19);
if (x_59 == 0)
{
return x_19;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_19, 0);
x_61 = lean_ctor_get(x_19, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_19);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
}
}
case 1:
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_63 = lean_ctor_get(x_13, 1);
lean_inc(x_63);
lean_dec(x_13);
x_64 = lean_ctor_get(x_14, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_14, 1);
lean_inc(x_65);
lean_dec(x_14);
x_66 = l_Lean_mkProj(x_64, x_65, x_6);
x_6 = x_66;
x_7 = x_12;
x_9 = x_63;
goto _start;
}
case 2:
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_68 = lean_ctor_get(x_13, 1);
lean_inc(x_68);
lean_dec(x_13);
x_69 = lean_ctor_get(x_14, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_14, 1);
lean_inc(x_70);
lean_dec(x_14);
x_71 = lean_box(0);
lean_inc(x_8);
lean_inc(x_70);
x_72 = l_Lean_Elab_Term_mkConst(x_1, x_70, x_71, x_8, x_68);
if (lean_obj_tag(x_72) == 0)
{
lean_object* x_73; lean_object* x_74; uint8_t x_75; 
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
lean_dec(x_72);
x_75 = l_List_isEmpty___rarg(x_12);
if (x_75 == 0)
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; lean_object* x_82; 
lean_dec(x_70);
lean_dec(x_69);
x_76 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_76, 0, x_6);
x_77 = l_Lean_mkOptionalNode___closed__2;
x_78 = lean_array_push(x_77, x_76);
x_79 = lean_box(0);
x_80 = l_Array_empty___closed__1;
x_81 = 0;
lean_inc(x_8);
lean_inc(x_1);
x_82 = l___private_Init_Lean_Elab_TermApp_12__elabAppArgs(x_1, x_73, x_80, x_78, x_79, x_81, x_8, x_74);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; lean_object* x_84; 
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec(x_82);
x_6 = x_83;
x_7 = x_12;
x_9 = x_84;
goto _start;
}
else
{
uint8_t x_86; 
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_86 = !lean_is_exclusive(x_82);
if (x_86 == 0)
{
return x_82;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_87 = lean_ctor_get(x_82, 0);
x_88 = lean_ctor_get(x_82, 1);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_82);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set(x_89, 1, x_88);
return x_89;
}
}
}
else
{
lean_object* x_90; 
lean_dec(x_12);
lean_inc(x_8);
lean_inc(x_73);
x_90 = l_Lean_Elab_Term_inferType(x_1, x_73, x_8, x_74);
if (lean_obj_tag(x_90) == 0)
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_91 = lean_ctor_get(x_90, 0);
lean_inc(x_91);
x_92 = lean_ctor_get(x_90, 1);
lean_inc(x_92);
lean_dec(x_90);
x_93 = lean_unsigned_to_nat(0u);
lean_inc(x_8);
lean_inc(x_2);
x_94 = l___private_Init_Lean_Elab_TermApp_18__addLValArg___main(x_1, x_69, x_70, x_6, x_3, x_93, x_2, x_91, x_8, x_92);
lean_dec(x_91);
if (lean_obj_tag(x_94) == 0)
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_95 = lean_ctor_get(x_94, 0);
lean_inc(x_95);
x_96 = lean_ctor_get(x_94, 1);
lean_inc(x_96);
lean_dec(x_94);
x_97 = l___private_Init_Lean_Elab_TermApp_12__elabAppArgs(x_1, x_73, x_2, x_95, x_4, x_5, x_8, x_96);
return x_97;
}
else
{
uint8_t x_98; 
lean_dec(x_73);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_98 = !lean_is_exclusive(x_94);
if (x_98 == 0)
{
return x_94;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_99 = lean_ctor_get(x_94, 0);
x_100 = lean_ctor_get(x_94, 1);
lean_inc(x_100);
lean_inc(x_99);
lean_dec(x_94);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_99);
lean_ctor_set(x_101, 1, x_100);
return x_101;
}
}
}
else
{
uint8_t x_102; 
lean_dec(x_73);
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_102 = !lean_is_exclusive(x_90);
if (x_102 == 0)
{
return x_90;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_103 = lean_ctor_get(x_90, 0);
x_104 = lean_ctor_get(x_90, 1);
lean_inc(x_104);
lean_inc(x_103);
lean_dec(x_90);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_103);
lean_ctor_set(x_105, 1, x_104);
return x_105;
}
}
}
}
else
{
uint8_t x_106; 
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_106 = !lean_is_exclusive(x_72);
if (x_106 == 0)
{
return x_72;
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_107 = lean_ctor_get(x_72, 0);
x_108 = lean_ctor_get(x_72, 1);
lean_inc(x_108);
lean_inc(x_107);
lean_dec(x_72);
x_109 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_109, 0, x_107);
lean_ctor_set(x_109, 1, x_108);
return x_109;
}
}
}
case 3:
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; uint8_t x_114; 
x_110 = lean_ctor_get(x_13, 1);
lean_inc(x_110);
lean_dec(x_13);
x_111 = lean_ctor_get(x_14, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_14, 1);
lean_inc(x_112);
x_113 = lean_ctor_get(x_14, 2);
lean_inc(x_113);
lean_dec(x_14);
x_114 = l_List_isEmpty___rarg(x_12);
if (x_114 == 0)
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; uint8_t x_120; lean_object* x_121; 
lean_dec(x_112);
lean_dec(x_111);
x_115 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_115, 0, x_6);
x_116 = l_Lean_mkOptionalNode___closed__2;
x_117 = lean_array_push(x_116, x_115);
x_118 = lean_box(0);
x_119 = l_Array_empty___closed__1;
x_120 = 0;
lean_inc(x_8);
lean_inc(x_1);
x_121 = l___private_Init_Lean_Elab_TermApp_12__elabAppArgs(x_1, x_113, x_119, x_117, x_118, x_120, x_8, x_110);
if (lean_obj_tag(x_121) == 0)
{
lean_object* x_122; lean_object* x_123; 
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_121, 1);
lean_inc(x_123);
lean_dec(x_121);
x_6 = x_122;
x_7 = x_12;
x_9 = x_123;
goto _start;
}
else
{
uint8_t x_125; 
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_125 = !lean_is_exclusive(x_121);
if (x_125 == 0)
{
return x_121;
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_126 = lean_ctor_get(x_121, 0);
x_127 = lean_ctor_get(x_121, 1);
lean_inc(x_127);
lean_inc(x_126);
lean_dec(x_121);
x_128 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_128, 0, x_126);
lean_ctor_set(x_128, 1, x_127);
return x_128;
}
}
}
else
{
lean_object* x_129; 
lean_dec(x_12);
lean_inc(x_8);
lean_inc(x_113);
x_129 = l_Lean_Elab_Term_inferType(x_1, x_113, x_8, x_110);
if (lean_obj_tag(x_129) == 0)
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_130 = lean_ctor_get(x_129, 0);
lean_inc(x_130);
x_131 = lean_ctor_get(x_129, 1);
lean_inc(x_131);
lean_dec(x_129);
x_132 = lean_unsigned_to_nat(0u);
lean_inc(x_8);
lean_inc(x_2);
x_133 = l___private_Init_Lean_Elab_TermApp_18__addLValArg___main(x_1, x_111, x_112, x_6, x_3, x_132, x_2, x_130, x_8, x_131);
lean_dec(x_130);
if (lean_obj_tag(x_133) == 0)
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_134 = lean_ctor_get(x_133, 0);
lean_inc(x_134);
x_135 = lean_ctor_get(x_133, 1);
lean_inc(x_135);
lean_dec(x_133);
x_136 = l___private_Init_Lean_Elab_TermApp_12__elabAppArgs(x_1, x_113, x_2, x_134, x_4, x_5, x_8, x_135);
return x_136;
}
else
{
uint8_t x_137; 
lean_dec(x_113);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_137 = !lean_is_exclusive(x_133);
if (x_137 == 0)
{
return x_133;
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_138 = lean_ctor_get(x_133, 0);
x_139 = lean_ctor_get(x_133, 1);
lean_inc(x_139);
lean_inc(x_138);
lean_dec(x_133);
x_140 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_140, 0, x_138);
lean_ctor_set(x_140, 1, x_139);
return x_140;
}
}
}
else
{
uint8_t x_141; 
lean_dec(x_113);
lean_dec(x_112);
lean_dec(x_111);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_141 = !lean_is_exclusive(x_129);
if (x_141 == 0)
{
return x_129;
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; 
x_142 = lean_ctor_get(x_129, 0);
x_143 = lean_ctor_get(x_129, 1);
lean_inc(x_143);
lean_inc(x_142);
lean_dec(x_129);
x_144 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_144, 0, x_142);
lean_ctor_set(x_144, 1, x_143);
return x_144;
}
}
}
}
default: 
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; 
x_145 = lean_ctor_get(x_13, 1);
lean_inc(x_145);
lean_dec(x_13);
x_146 = lean_ctor_get(x_14, 0);
lean_inc(x_146);
x_147 = lean_ctor_get(x_14, 1);
lean_inc(x_147);
lean_dec(x_14);
x_148 = lean_box(0);
lean_inc(x_8);
x_149 = l_Lean_Elab_Term_mkConst(x_1, x_146, x_148, x_8, x_145);
if (lean_obj_tag(x_149) == 0)
{
lean_object* x_150; lean_object* x_151; uint8_t x_152; 
x_150 = lean_ctor_get(x_149, 0);
lean_inc(x_150);
x_151 = lean_ctor_get(x_149, 1);
lean_inc(x_151);
lean_dec(x_149);
x_152 = l_List_isEmpty___rarg(x_12);
if (x_152 == 0)
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; uint8_t x_164; lean_object* x_165; 
x_153 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_153, 0, x_6);
x_154 = l_List_foldlM___main___at___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___spec__1___closed__2;
x_155 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_155, 0, x_154);
lean_ctor_set(x_155, 1, x_153);
x_156 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_156, 0, x_147);
x_157 = l___private_Init_Lean_Elab_TermApp_19__elabAppLValsAux___main___closed__2;
x_158 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_158, 0, x_157);
lean_ctor_set(x_158, 1, x_156);
x_159 = l_Lean_mkAppStx___closed__9;
x_160 = lean_array_push(x_159, x_155);
x_161 = lean_array_push(x_160, x_158);
x_162 = lean_box(0);
x_163 = l_Array_empty___closed__1;
x_164 = 0;
lean_inc(x_8);
lean_inc(x_1);
x_165 = l___private_Init_Lean_Elab_TermApp_12__elabAppArgs(x_1, x_150, x_161, x_163, x_162, x_164, x_8, x_151);
if (lean_obj_tag(x_165) == 0)
{
lean_object* x_166; lean_object* x_167; 
x_166 = lean_ctor_get(x_165, 0);
lean_inc(x_166);
x_167 = lean_ctor_get(x_165, 1);
lean_inc(x_167);
lean_dec(x_165);
x_6 = x_166;
x_7 = x_12;
x_9 = x_167;
goto _start;
}
else
{
uint8_t x_169; 
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_169 = !lean_is_exclusive(x_165);
if (x_169 == 0)
{
return x_165;
}
else
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; 
x_170 = lean_ctor_get(x_165, 0);
x_171 = lean_ctor_get(x_165, 1);
lean_inc(x_171);
lean_inc(x_170);
lean_dec(x_165);
x_172 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_172, 0, x_170);
lean_ctor_set(x_172, 1, x_171);
return x_172;
}
}
}
else
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; 
lean_dec(x_12);
x_173 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_173, 0, x_6);
x_174 = l_List_foldlM___main___at___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___spec__1___closed__2;
x_175 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_175, 0, x_174);
lean_ctor_set(x_175, 1, x_173);
lean_inc(x_8);
x_176 = l_Lean_Elab_Term_addNamedArg(x_1, x_2, x_175, x_8, x_151);
if (lean_obj_tag(x_176) == 0)
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_177 = lean_ctor_get(x_176, 0);
lean_inc(x_177);
x_178 = lean_ctor_get(x_176, 1);
lean_inc(x_178);
lean_dec(x_176);
x_179 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_179, 0, x_147);
x_180 = l___private_Init_Lean_Elab_TermApp_19__elabAppLValsAux___main___closed__2;
x_181 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_181, 0, x_180);
lean_ctor_set(x_181, 1, x_179);
lean_inc(x_8);
x_182 = l_Lean_Elab_Term_addNamedArg(x_1, x_177, x_181, x_8, x_178);
if (lean_obj_tag(x_182) == 0)
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; 
x_183 = lean_ctor_get(x_182, 0);
lean_inc(x_183);
x_184 = lean_ctor_get(x_182, 1);
lean_inc(x_184);
lean_dec(x_182);
x_185 = l___private_Init_Lean_Elab_TermApp_12__elabAppArgs(x_1, x_150, x_183, x_3, x_4, x_5, x_8, x_184);
return x_185;
}
else
{
uint8_t x_186; 
lean_dec(x_150);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_186 = !lean_is_exclusive(x_182);
if (x_186 == 0)
{
return x_182;
}
else
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; 
x_187 = lean_ctor_get(x_182, 0);
x_188 = lean_ctor_get(x_182, 1);
lean_inc(x_188);
lean_inc(x_187);
lean_dec(x_182);
x_189 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_189, 0, x_187);
lean_ctor_set(x_189, 1, x_188);
return x_189;
}
}
}
else
{
uint8_t x_190; 
lean_dec(x_150);
lean_dec(x_147);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_190 = !lean_is_exclusive(x_176);
if (x_190 == 0)
{
return x_176;
}
else
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; 
x_191 = lean_ctor_get(x_176, 0);
x_192 = lean_ctor_get(x_176, 1);
lean_inc(x_192);
lean_inc(x_191);
lean_dec(x_176);
x_193 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_193, 0, x_191);
lean_ctor_set(x_193, 1, x_192);
return x_193;
}
}
}
}
else
{
uint8_t x_194; 
lean_dec(x_147);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_194 = !lean_is_exclusive(x_149);
if (x_194 == 0)
{
return x_149;
}
else
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; 
x_195 = lean_ctor_get(x_149, 0);
x_196 = lean_ctor_get(x_149, 1);
lean_inc(x_196);
lean_inc(x_195);
lean_dec(x_149);
x_197 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_197, 0, x_195);
lean_ctor_set(x_197, 1, x_196);
return x_197;
}
}
}
}
}
else
{
uint8_t x_198; 
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_198 = !lean_is_exclusive(x_13);
if (x_198 == 0)
{
return x_13;
}
else
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; 
x_199 = lean_ctor_get(x_13, 0);
x_200 = lean_ctor_get(x_13, 1);
lean_inc(x_200);
lean_inc(x_199);
lean_dec(x_13);
x_201 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_201, 0, x_199);
lean_ctor_set(x_201, 1, x_200);
return x_201;
}
}
}
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_19__elabAppLValsAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_5);
lean_dec(x_5);
x_11 = l___private_Init_Lean_Elab_TermApp_19__elabAppLValsAux___main(x_1, x_2, x_3, x_4, x_10, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_19__elabAppLValsAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Init_Lean_Elab_TermApp_19__elabAppLValsAux___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_19__elabAppLValsAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_5);
lean_dec(x_5);
x_11 = l___private_Init_Lean_Elab_TermApp_19__elabAppLValsAux(x_1, x_2, x_3, x_4, x_10, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_20__elabAppLVals___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid use of field notation with `@` modifier");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_20__elabAppLVals___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_20__elabAppLVals___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_20__elabAppLVals___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_20__elabAppLVals___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_20__elabAppLVals(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, uint8_t x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = l_List_isEmpty___rarg(x_3);
if (x_10 == 0)
{
if (x_7 == 0)
{
lean_object* x_11; 
x_11 = l___private_Init_Lean_Elab_TermApp_19__elabAppLValsAux___main(x_1, x_4, x_5, x_6, x_7, x_2, x_3, x_8, x_9);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_12 = l___private_Init_Lean_Elab_TermApp_20__elabAppLVals___closed__3;
x_13 = l_Lean_Elab_Term_throwError___rarg(x_1, x_12, x_8, x_9);
lean_dec(x_1);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
return x_13;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_13);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
else
{
lean_object* x_18; 
x_18 = l___private_Init_Lean_Elab_TermApp_19__elabAppLValsAux___main(x_1, x_4, x_5, x_6, x_7, x_2, x_3, x_8, x_9);
return x_18;
}
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_20__elabAppLVals___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_7);
lean_dec(x_7);
x_11 = l___private_Init_Lean_Elab_TermApp_20__elabAppLVals(x_1, x_2, x_3, x_4, x_5, x_6, x_10, x_8, x_9);
return x_11;
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Elab_Term_elabExplicitUniv___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_3, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_sub(x_3, x_10);
lean_dec(x_3);
x_12 = lean_array_fget(x_2, x_11);
x_13 = l_Lean_Elab_Term_elabLevel(x_12, x_6, x_7);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_5);
x_3 = x_11;
x_4 = lean_box(0);
x_5 = x_16;
x_7 = x_15;
goto _start;
}
else
{
uint8_t x_18; 
lean_dec(x_11);
lean_dec(x_5);
x_18 = !lean_is_exclusive(x_13);
if (x_18 == 0)
{
return x_13;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_13, 0);
x_20 = lean_ctor_get(x_13, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_13);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
else
{
lean_object* x_22; 
lean_dec(x_3);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_5);
lean_ctor_set(x_22, 1, x_7);
return x_22;
}
}
}
lean_object* l_Lean_Elab_Term_elabExplicitUniv(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = l_Lean_Syntax_getArg(x_1, x_4);
x_6 = lean_box(0);
x_7 = l_Lean_Syntax_getArgs(x_5);
lean_dec(x_5);
x_8 = lean_unsigned_to_nat(2u);
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Array_empty___closed__1;
x_11 = l_Array_foldlStepMAux___main___at_Lean_Syntax_foldSepRevArgsM___spec__1(x_8, x_7, x_9, x_10);
lean_dec(x_7);
x_12 = lean_array_get_size(x_11);
x_13 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Elab_Term_elabExplicitUniv___spec__1(x_1, x_11, x_12, lean_box(0), x_6, x_2, x_3);
lean_dec(x_11);
return x_13;
}
}
lean_object* l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Elab_Term_elabExplicitUniv___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Init_Data_Array_Basic_3__iterateRevMAux___main___at_Lean_Elab_Term_elabExplicitUniv___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_elabExplicitUniv___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_elabExplicitUniv(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_List_map___main___at___private_Init_Lean_Elab_TermApp_21__elabAppFnId___spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_6, 0, x_4);
x_7 = l_List_map___main___at___private_Init_Lean_Elab_TermApp_21__elabAppFnId___spec__1(x_5);
lean_ctor_set(x_1, 1, x_7);
lean_ctor_set(x_1, 0, x_6);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_8);
x_11 = l_List_map___main___at___private_Init_Lean_Elab_TermApp_21__elabAppFnId___spec__1(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
lean_object* l_List_foldlM___main___at___private_Init_Lean_Elab_TermApp_21__elabAppFnId___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_11; 
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_dec(x_8);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
x_16 = l_List_map___main___at___private_Init_Lean_Elab_TermApp_21__elabAppFnId___spec__1(x_15);
lean_inc(x_2);
x_17 = l_List_append___rarg(x_16, x_2);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_18 = l___private_Init_Lean_Elab_TermApp_20__elabAppLVals(x_1, x_14, x_17, x_3, x_4, x_5, x_6, x_9, x_10);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_array_push(x_7, x_18);
x_7 = x_20;
x_8 = x_13;
goto _start;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_18, 0);
x_23 = lean_ctor_get(x_18, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_18);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_array_push(x_7, x_24);
x_7 = x_25;
x_8 = x_13;
goto _start;
}
}
else
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_18, 0);
lean_inc(x_27);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
if (lean_obj_tag(x_28) == 0)
{
uint8_t x_29; 
lean_dec(x_27);
x_29 = !lean_is_exclusive(x_18);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_18, 0);
lean_dec(x_30);
x_31 = lean_ctor_get(x_28, 0);
lean_inc(x_31);
lean_dec(x_28);
lean_ctor_set(x_18, 0, x_31);
x_32 = lean_array_push(x_7, x_18);
x_7 = x_32;
x_8 = x_13;
goto _start;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = lean_ctor_get(x_18, 1);
lean_inc(x_34);
lean_dec(x_18);
x_35 = lean_ctor_get(x_28, 0);
lean_inc(x_35);
lean_dec(x_28);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
x_37 = lean_array_push(x_7, x_36);
x_7 = x_37;
x_8 = x_13;
goto _start;
}
}
else
{
uint8_t x_39; 
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_39 = !lean_is_exclusive(x_18);
if (x_39 == 0)
{
lean_object* x_40; 
x_40 = lean_ctor_get(x_18, 0);
lean_dec(x_40);
return x_18;
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_18, 1);
lean_inc(x_41);
lean_dec(x_18);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_27);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
else
{
uint8_t x_43; 
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_18);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_18, 1);
lean_dec(x_44);
x_45 = lean_ctor_get(x_18, 0);
lean_dec(x_45);
lean_ctor_set(x_18, 1, x_10);
return x_18;
}
else
{
lean_object* x_46; 
lean_dec(x_18);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_27);
lean_ctor_set(x_46, 1, x_10);
return x_46;
}
}
}
}
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_21__elabAppFnId(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, uint8_t x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
if (lean_obj_tag(x_2) == 3)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_2, 2);
lean_inc(x_12);
x_13 = lean_ctor_get(x_2, 3);
lean_inc(x_13);
lean_inc(x_10);
x_14 = l_Lean_Elab_Term_resolveName(x_2, x_12, x_13, x_3, x_10, x_11);
lean_dec(x_2);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_List_foldlM___main___at___private_Init_Lean_Elab_TermApp_21__elabAppFnId___spec__2(x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_15, x_10, x_16);
return x_17;
}
else
{
uint8_t x_18; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_18 = !lean_is_exclusive(x_14);
if (x_18 == 0)
{
return x_14;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_14, 0);
x_20 = lean_ctor_get(x_14, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_14);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
else
{
lean_object* x_22; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_22 = l_Lean_Elab_Term_throwUnsupportedSyntax___rarg(x_11);
return x_22;
}
}
}
lean_object* l_List_foldlM___main___at___private_Init_Lean_Elab_TermApp_21__elabAppFnId___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_6);
lean_dec(x_6);
x_12 = l_List_foldlM___main___at___private_Init_Lean_Elab_TermApp_21__elabAppFnId___spec__2(x_1, x_2, x_3, x_4, x_5, x_11, x_7, x_8, x_9, x_10);
return x_12;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_21__elabAppFnId___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_8);
lean_dec(x_8);
x_13 = l___private_Init_Lean_Elab_TermApp_21__elabAppFnId(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_12, x_9, x_10, x_11);
return x_13;
}
}
lean_object* l_List_map___main___at___private_Init_Lean_Elab_TermApp_22__elabAppFn___main___spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_Lean_Name_toString___closed__1;
x_7 = l_Lean_Name_toStringWithSep___main(x_6, x_4);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_7);
x_9 = l_List_map___main___at___private_Init_Lean_Elab_TermApp_22__elabAppFn___main___spec__1(x_5);
lean_ctor_set(x_1, 1, x_9);
lean_ctor_set(x_1, 0, x_8);
return x_1;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_1);
x_12 = l_Lean_Name_toString___closed__1;
x_13 = l_Lean_Name_toStringWithSep___main(x_12, x_10);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = l_List_map___main___at___private_Init_Lean_Elab_TermApp_22__elabAppFn___main___spec__1(x_11);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_Elab_TermApp_22__elabAppFn___main___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, uint8_t x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_array_get_size(x_8);
x_14 = lean_nat_dec_lt(x_9, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_12);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_array_fget(x_8, x_9);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_9, x_17);
lean_dec(x_9);
lean_inc(x_11);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_19 = l___private_Init_Lean_Elab_TermApp_22__elabAppFn___main(x_1, x_16, x_3, x_4, x_5, x_6, x_7, x_10, x_11, x_12);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_9 = x_18;
x_10 = x_20;
x_12 = x_21;
goto _start;
}
else
{
uint8_t x_23; 
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_19);
if (x_23 == 0)
{
return x_19;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_19, 0);
x_25 = lean_ctor_get(x_19, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_19);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_22__elabAppFn___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, uint8_t x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; uint8_t x_181; 
x_181 = l_Lean_Syntax_isIdent(x_2);
if (x_181 == 0)
{
lean_object* x_182; lean_object* x_183; uint8_t x_184; 
lean_inc(x_2);
x_182 = l_Lean_Syntax_getKind(x_2);
x_183 = l_Lean_choiceKind;
x_184 = lean_name_eq(x_182, x_183);
lean_dec(x_182);
if (x_184 == 0)
{
uint8_t x_185; uint8_t x_324; lean_object* x_414; uint8_t x_415; 
x_414 = l_Lean_Parser_Term_explicit___elambda__1___closed__2;
lean_inc(x_2);
x_415 = l_Lean_Syntax_isOfKind(x_2, x_414);
if (x_415 == 0)
{
uint8_t x_416; 
x_416 = 0;
x_324 = x_416;
goto block_413;
}
else
{
lean_object* x_417; lean_object* x_418; lean_object* x_419; uint8_t x_420; 
x_417 = l_Lean_Syntax_getArgs(x_2);
x_418 = lean_array_get_size(x_417);
lean_dec(x_417);
x_419 = lean_unsigned_to_nat(2u);
x_420 = lean_nat_dec_eq(x_418, x_419);
lean_dec(x_418);
x_324 = x_420;
goto block_413;
}
block_323:
{
uint8_t x_186; 
x_186 = l_coeDecidableEq(x_185);
if (x_186 == 0)
{
lean_object* x_187; uint8_t x_188; 
x_187 = l_Lean_Parser_Term_arrayRef___elambda__1___closed__2;
lean_inc(x_2);
x_188 = l_Lean_Syntax_isOfKind(x_2, x_187);
if (x_188 == 0)
{
uint8_t x_189; 
x_189 = l_Lean_Elab_Term_elabParen___closed__4;
if (x_189 == 0)
{
lean_object* x_190; uint8_t x_191; 
x_190 = l_Lean_mkTermIdFromIdent___closed__2;
lean_inc(x_2);
x_191 = l_Lean_Syntax_isOfKind(x_2, x_190);
if (x_191 == 0)
{
uint8_t x_192; 
x_192 = 0;
x_11 = x_192;
goto block_180;
}
else
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; uint8_t x_196; 
x_193 = l_Lean_Syntax_getArgs(x_2);
x_194 = lean_array_get_size(x_193);
lean_dec(x_193);
x_195 = lean_unsigned_to_nat(2u);
x_196 = lean_nat_dec_eq(x_194, x_195);
lean_dec(x_194);
x_11 = x_196;
goto block_180;
}
}
else
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; 
x_197 = lean_unsigned_to_nat(0u);
x_198 = l_Lean_Syntax_getArg(x_2, x_197);
x_199 = lean_unsigned_to_nat(2u);
x_200 = l_Lean_Syntax_getArg(x_2, x_199);
lean_dec(x_2);
x_201 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_201, 0, x_200);
x_202 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_202, 0, x_201);
lean_ctor_set(x_202, 1, x_3);
x_2 = x_198;
x_3 = x_202;
goto _start;
}
}
else
{
lean_object* x_204; lean_object* x_205; lean_object* x_206; uint8_t x_207; uint8_t x_208; 
x_204 = l_Lean_Syntax_getArgs(x_2);
x_205 = lean_array_get_size(x_204);
lean_dec(x_204);
x_206 = lean_unsigned_to_nat(4u);
x_207 = lean_nat_dec_eq(x_205, x_206);
x_208 = l_coeDecidableEq(x_207);
if (x_208 == 0)
{
lean_object* x_209; uint8_t x_210; 
x_209 = l_Lean_mkTermIdFromIdent___closed__2;
lean_inc(x_2);
x_210 = l_Lean_Syntax_isOfKind(x_2, x_209);
if (x_210 == 0)
{
uint8_t x_211; 
lean_dec(x_205);
x_211 = 0;
x_11 = x_211;
goto block_180;
}
else
{
lean_object* x_212; uint8_t x_213; 
x_212 = lean_unsigned_to_nat(2u);
x_213 = lean_nat_dec_eq(x_205, x_212);
lean_dec(x_205);
x_11 = x_213;
goto block_180;
}
}
else
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; 
lean_dec(x_205);
x_214 = lean_unsigned_to_nat(0u);
x_215 = l_Lean_Syntax_getArg(x_2, x_214);
x_216 = lean_unsigned_to_nat(2u);
x_217 = l_Lean_Syntax_getArg(x_2, x_216);
lean_dec(x_2);
x_218 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_218, 0, x_217);
x_219 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_219, 0, x_218);
lean_ctor_set(x_219, 1, x_3);
x_2 = x_215;
x_3 = x_219;
goto _start;
}
}
}
else
{
lean_object* x_221; lean_object* x_222; lean_object* x_223; uint8_t x_224; uint8_t x_225; 
x_221 = lean_unsigned_to_nat(2u);
x_222 = l_Lean_Syntax_getArg(x_2, x_221);
x_223 = l_Lean_fieldIdxKind___closed__2;
lean_inc(x_222);
x_224 = l_Lean_Syntax_isOfKind(x_222, x_223);
x_225 = l_coeDecidableEq(x_224);
if (x_225 == 0)
{
lean_object* x_226; uint8_t x_227; uint8_t x_228; 
x_226 = l_Lean_identKind___closed__2;
lean_inc(x_222);
x_227 = l_Lean_Syntax_isOfKind(x_222, x_226);
x_228 = l_coeDecidableEq(x_227);
if (x_228 == 0)
{
lean_object* x_229; uint8_t x_230; lean_object* x_231; 
lean_dec(x_222);
x_229 = lean_box(0);
x_230 = 1;
lean_inc(x_10);
lean_inc(x_9);
x_231 = l_Lean_Elab_Term_elabTermAux___main(x_229, x_230, x_2, x_9, x_10);
if (lean_obj_tag(x_231) == 0)
{
uint8_t x_232; 
x_232 = !lean_is_exclusive(x_231);
if (x_232 == 0)
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; 
x_233 = lean_ctor_get(x_231, 0);
x_234 = lean_ctor_get(x_231, 1);
x_235 = l___private_Init_Lean_Elab_TermApp_20__elabAppLVals(x_1, x_233, x_3, x_4, x_5, x_6, x_7, x_9, x_234);
if (lean_obj_tag(x_235) == 0)
{
uint8_t x_236; 
x_236 = !lean_is_exclusive(x_235);
if (x_236 == 0)
{
lean_object* x_237; 
x_237 = lean_array_push(x_8, x_235);
lean_ctor_set(x_231, 1, x_10);
lean_ctor_set(x_231, 0, x_237);
return x_231;
}
else
{
lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; 
x_238 = lean_ctor_get(x_235, 0);
x_239 = lean_ctor_get(x_235, 1);
lean_inc(x_239);
lean_inc(x_238);
lean_dec(x_235);
x_240 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_240, 0, x_238);
lean_ctor_set(x_240, 1, x_239);
x_241 = lean_array_push(x_8, x_240);
lean_ctor_set(x_231, 1, x_10);
lean_ctor_set(x_231, 0, x_241);
return x_231;
}
}
else
{
lean_object* x_242; 
x_242 = lean_ctor_get(x_235, 0);
lean_inc(x_242);
if (lean_obj_tag(x_242) == 0)
{
lean_object* x_243; 
x_243 = lean_ctor_get(x_242, 0);
lean_inc(x_243);
if (lean_obj_tag(x_243) == 0)
{
uint8_t x_244; 
lean_dec(x_242);
x_244 = !lean_is_exclusive(x_235);
if (x_244 == 0)
{
lean_object* x_245; lean_object* x_246; lean_object* x_247; 
x_245 = lean_ctor_get(x_235, 0);
lean_dec(x_245);
x_246 = lean_ctor_get(x_243, 0);
lean_inc(x_246);
lean_dec(x_243);
lean_ctor_set(x_235, 0, x_246);
x_247 = lean_array_push(x_8, x_235);
lean_ctor_set(x_231, 1, x_10);
lean_ctor_set(x_231, 0, x_247);
return x_231;
}
else
{
lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; 
x_248 = lean_ctor_get(x_235, 1);
lean_inc(x_248);
lean_dec(x_235);
x_249 = lean_ctor_get(x_243, 0);
lean_inc(x_249);
lean_dec(x_243);
x_250 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_250, 0, x_249);
lean_ctor_set(x_250, 1, x_248);
x_251 = lean_array_push(x_8, x_250);
lean_ctor_set(x_231, 1, x_10);
lean_ctor_set(x_231, 0, x_251);
return x_231;
}
}
else
{
uint8_t x_252; 
lean_free_object(x_231);
lean_dec(x_10);
lean_dec(x_8);
x_252 = !lean_is_exclusive(x_235);
if (x_252 == 0)
{
lean_object* x_253; 
x_253 = lean_ctor_get(x_235, 0);
lean_dec(x_253);
return x_235;
}
else
{
lean_object* x_254; lean_object* x_255; 
x_254 = lean_ctor_get(x_235, 1);
lean_inc(x_254);
lean_dec(x_235);
x_255 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_255, 0, x_242);
lean_ctor_set(x_255, 1, x_254);
return x_255;
}
}
}
else
{
uint8_t x_256; 
lean_free_object(x_231);
lean_dec(x_8);
x_256 = !lean_is_exclusive(x_235);
if (x_256 == 0)
{
lean_object* x_257; lean_object* x_258; 
x_257 = lean_ctor_get(x_235, 1);
lean_dec(x_257);
x_258 = lean_ctor_get(x_235, 0);
lean_dec(x_258);
lean_ctor_set(x_235, 1, x_10);
return x_235;
}
else
{
lean_object* x_259; 
lean_dec(x_235);
x_259 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_259, 0, x_242);
lean_ctor_set(x_259, 1, x_10);
return x_259;
}
}
}
}
else
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; 
x_260 = lean_ctor_get(x_231, 0);
x_261 = lean_ctor_get(x_231, 1);
lean_inc(x_261);
lean_inc(x_260);
lean_dec(x_231);
x_262 = l___private_Init_Lean_Elab_TermApp_20__elabAppLVals(x_1, x_260, x_3, x_4, x_5, x_6, x_7, x_9, x_261);
if (lean_obj_tag(x_262) == 0)
{
lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; 
x_263 = lean_ctor_get(x_262, 0);
lean_inc(x_263);
x_264 = lean_ctor_get(x_262, 1);
lean_inc(x_264);
if (lean_is_exclusive(x_262)) {
 lean_ctor_release(x_262, 0);
 lean_ctor_release(x_262, 1);
 x_265 = x_262;
} else {
 lean_dec_ref(x_262);
 x_265 = lean_box(0);
}
if (lean_is_scalar(x_265)) {
 x_266 = lean_alloc_ctor(0, 2, 0);
} else {
 x_266 = x_265;
}
lean_ctor_set(x_266, 0, x_263);
lean_ctor_set(x_266, 1, x_264);
x_267 = lean_array_push(x_8, x_266);
x_268 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_268, 0, x_267);
lean_ctor_set(x_268, 1, x_10);
return x_268;
}
else
{
lean_object* x_269; 
x_269 = lean_ctor_get(x_262, 0);
lean_inc(x_269);
if (lean_obj_tag(x_269) == 0)
{
lean_object* x_270; 
x_270 = lean_ctor_get(x_269, 0);
lean_inc(x_270);
if (lean_obj_tag(x_270) == 0)
{
lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; 
lean_dec(x_269);
x_271 = lean_ctor_get(x_262, 1);
lean_inc(x_271);
if (lean_is_exclusive(x_262)) {
 lean_ctor_release(x_262, 0);
 lean_ctor_release(x_262, 1);
 x_272 = x_262;
} else {
 lean_dec_ref(x_262);
 x_272 = lean_box(0);
}
x_273 = lean_ctor_get(x_270, 0);
lean_inc(x_273);
lean_dec(x_270);
if (lean_is_scalar(x_272)) {
 x_274 = lean_alloc_ctor(1, 2, 0);
} else {
 x_274 = x_272;
}
lean_ctor_set(x_274, 0, x_273);
lean_ctor_set(x_274, 1, x_271);
x_275 = lean_array_push(x_8, x_274);
x_276 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_276, 0, x_275);
lean_ctor_set(x_276, 1, x_10);
return x_276;
}
else
{
lean_object* x_277; lean_object* x_278; lean_object* x_279; 
lean_dec(x_10);
lean_dec(x_8);
x_277 = lean_ctor_get(x_262, 1);
lean_inc(x_277);
if (lean_is_exclusive(x_262)) {
 lean_ctor_release(x_262, 0);
 lean_ctor_release(x_262, 1);
 x_278 = x_262;
} else {
 lean_dec_ref(x_262);
 x_278 = lean_box(0);
}
if (lean_is_scalar(x_278)) {
 x_279 = lean_alloc_ctor(1, 2, 0);
} else {
 x_279 = x_278;
}
lean_ctor_set(x_279, 0, x_269);
lean_ctor_set(x_279, 1, x_277);
return x_279;
}
}
else
{
lean_object* x_280; lean_object* x_281; 
lean_dec(x_8);
if (lean_is_exclusive(x_262)) {
 lean_ctor_release(x_262, 0);
 lean_ctor_release(x_262, 1);
 x_280 = x_262;
} else {
 lean_dec_ref(x_262);
 x_280 = lean_box(0);
}
if (lean_is_scalar(x_280)) {
 x_281 = lean_alloc_ctor(1, 2, 0);
} else {
 x_281 = x_280;
}
lean_ctor_set(x_281, 0, x_269);
lean_ctor_set(x_281, 1, x_10);
return x_281;
}
}
}
}
else
{
lean_object* x_282; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_282 = lean_ctor_get(x_231, 0);
lean_inc(x_282);
if (lean_obj_tag(x_282) == 0)
{
lean_object* x_283; 
x_283 = lean_ctor_get(x_282, 0);
lean_inc(x_283);
if (lean_obj_tag(x_283) == 0)
{
uint8_t x_284; 
lean_dec(x_282);
x_284 = !lean_is_exclusive(x_231);
if (x_284 == 0)
{
lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; 
x_285 = lean_ctor_get(x_231, 0);
lean_dec(x_285);
x_286 = lean_ctor_get(x_283, 0);
lean_inc(x_286);
lean_dec(x_283);
lean_ctor_set(x_231, 0, x_286);
x_287 = lean_array_push(x_8, x_231);
x_288 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_288, 0, x_287);
lean_ctor_set(x_288, 1, x_10);
return x_288;
}
else
{
lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; 
x_289 = lean_ctor_get(x_231, 1);
lean_inc(x_289);
lean_dec(x_231);
x_290 = lean_ctor_get(x_283, 0);
lean_inc(x_290);
lean_dec(x_283);
x_291 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_291, 0, x_290);
lean_ctor_set(x_291, 1, x_289);
x_292 = lean_array_push(x_8, x_291);
x_293 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_293, 0, x_292);
lean_ctor_set(x_293, 1, x_10);
return x_293;
}
}
else
{
uint8_t x_294; 
lean_dec(x_10);
lean_dec(x_8);
x_294 = !lean_is_exclusive(x_231);
if (x_294 == 0)
{
lean_object* x_295; 
x_295 = lean_ctor_get(x_231, 0);
lean_dec(x_295);
return x_231;
}
else
{
lean_object* x_296; lean_object* x_297; 
x_296 = lean_ctor_get(x_231, 1);
lean_inc(x_296);
lean_dec(x_231);
x_297 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_297, 0, x_282);
lean_ctor_set(x_297, 1, x_296);
return x_297;
}
}
}
else
{
uint8_t x_298; 
lean_dec(x_8);
x_298 = !lean_is_exclusive(x_231);
if (x_298 == 0)
{
lean_object* x_299; lean_object* x_300; 
x_299 = lean_ctor_get(x_231, 1);
lean_dec(x_299);
x_300 = lean_ctor_get(x_231, 0);
lean_dec(x_300);
lean_ctor_set(x_231, 1, x_10);
return x_231;
}
else
{
lean_object* x_301; 
lean_dec(x_231);
x_301 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_301, 0, x_282);
lean_ctor_set(x_301, 1, x_10);
return x_301;
}
}
}
}
else
{
lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; 
x_302 = l_Lean_Syntax_getId(x_222);
lean_dec(x_222);
x_303 = l_Lean_Name_components(x_302);
x_304 = l_List_map___main___at___private_Init_Lean_Elab_TermApp_22__elabAppFn___main___spec__1(x_303);
x_305 = lean_unsigned_to_nat(0u);
x_306 = l_Lean_Syntax_getArg(x_2, x_305);
lean_dec(x_2);
x_307 = l_List_append___rarg(x_304, x_3);
x_2 = x_306;
x_3 = x_307;
goto _start;
}
}
else
{
lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; 
x_309 = l_Lean_fieldIdxKind;
x_310 = l_Lean_Syntax_isNatLitAux(x_309, x_222);
lean_dec(x_222);
x_311 = lean_unsigned_to_nat(0u);
x_312 = l_Lean_Syntax_getArg(x_2, x_311);
lean_dec(x_2);
if (lean_obj_tag(x_310) == 0)
{
lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; 
x_313 = l_Nat_Inhabited;
x_314 = l_Option_get_x21___rarg___closed__3;
x_315 = lean_panic_fn(x_313, x_314);
x_316 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_316, 0, x_315);
x_317 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_317, 0, x_316);
lean_ctor_set(x_317, 1, x_3);
x_2 = x_312;
x_3 = x_317;
goto _start;
}
else
{
lean_object* x_319; lean_object* x_320; lean_object* x_321; 
x_319 = lean_ctor_get(x_310, 0);
lean_inc(x_319);
lean_dec(x_310);
x_320 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_320, 0, x_319);
x_321 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_321, 0, x_320);
lean_ctor_set(x_321, 1, x_3);
x_2 = x_312;
x_3 = x_321;
goto _start;
}
}
}
}
block_413:
{
uint8_t x_325; 
x_325 = l_coeDecidableEq(x_324);
if (x_325 == 0)
{
lean_object* x_326; uint8_t x_327; 
x_326 = l_Lean_Parser_Term_proj___elambda__1___closed__2;
lean_inc(x_2);
x_327 = l_Lean_Syntax_isOfKind(x_2, x_326);
if (x_327 == 0)
{
uint8_t x_328; 
x_328 = 0;
x_185 = x_328;
goto block_323;
}
else
{
lean_object* x_329; lean_object* x_330; lean_object* x_331; uint8_t x_332; 
x_329 = l_Lean_Syntax_getArgs(x_2);
x_330 = lean_array_get_size(x_329);
lean_dec(x_329);
x_331 = lean_unsigned_to_nat(3u);
x_332 = lean_nat_dec_eq(x_330, x_331);
lean_dec(x_330);
x_185 = x_332;
goto block_323;
}
}
else
{
lean_object* x_333; lean_object* x_334; lean_object* x_335; uint8_t x_336; uint8_t x_337; 
x_333 = lean_unsigned_to_nat(1u);
x_334 = l_Lean_Syntax_getArg(x_2, x_333);
x_335 = l_Lean_mkTermIdFromIdent___closed__2;
lean_inc(x_334);
x_336 = l_Lean_Syntax_isOfKind(x_334, x_335);
x_337 = l_coeDecidableEq(x_336);
if (x_337 == 0)
{
lean_object* x_338; uint8_t x_339; lean_object* x_340; 
lean_dec(x_334);
x_338 = lean_box(0);
x_339 = 1;
lean_inc(x_10);
lean_inc(x_9);
x_340 = l_Lean_Elab_Term_elabTermAux___main(x_338, x_339, x_2, x_9, x_10);
if (lean_obj_tag(x_340) == 0)
{
uint8_t x_341; 
x_341 = !lean_is_exclusive(x_340);
if (x_341 == 0)
{
lean_object* x_342; lean_object* x_343; lean_object* x_344; 
x_342 = lean_ctor_get(x_340, 0);
x_343 = lean_ctor_get(x_340, 1);
x_344 = l___private_Init_Lean_Elab_TermApp_20__elabAppLVals(x_1, x_342, x_3, x_4, x_5, x_6, x_7, x_9, x_343);
if (lean_obj_tag(x_344) == 0)
{
uint8_t x_345; 
x_345 = !lean_is_exclusive(x_344);
if (x_345 == 0)
{
lean_object* x_346; 
x_346 = lean_array_push(x_8, x_344);
lean_ctor_set(x_340, 1, x_10);
lean_ctor_set(x_340, 0, x_346);
return x_340;
}
else
{
lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; 
x_347 = lean_ctor_get(x_344, 0);
x_348 = lean_ctor_get(x_344, 1);
lean_inc(x_348);
lean_inc(x_347);
lean_dec(x_344);
x_349 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_349, 0, x_347);
lean_ctor_set(x_349, 1, x_348);
x_350 = lean_array_push(x_8, x_349);
lean_ctor_set(x_340, 1, x_10);
lean_ctor_set(x_340, 0, x_350);
return x_340;
}
}
else
{
lean_object* x_351; 
x_351 = lean_ctor_get(x_344, 0);
lean_inc(x_351);
if (lean_obj_tag(x_351) == 0)
{
lean_object* x_352; 
x_352 = lean_ctor_get(x_351, 0);
lean_inc(x_352);
if (lean_obj_tag(x_352) == 0)
{
uint8_t x_353; 
lean_dec(x_351);
x_353 = !lean_is_exclusive(x_344);
if (x_353 == 0)
{
lean_object* x_354; lean_object* x_355; lean_object* x_356; 
x_354 = lean_ctor_get(x_344, 0);
lean_dec(x_354);
x_355 = lean_ctor_get(x_352, 0);
lean_inc(x_355);
lean_dec(x_352);
lean_ctor_set(x_344, 0, x_355);
x_356 = lean_array_push(x_8, x_344);
lean_ctor_set(x_340, 1, x_10);
lean_ctor_set(x_340, 0, x_356);
return x_340;
}
else
{
lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; 
x_357 = lean_ctor_get(x_344, 1);
lean_inc(x_357);
lean_dec(x_344);
x_358 = lean_ctor_get(x_352, 0);
lean_inc(x_358);
lean_dec(x_352);
x_359 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_359, 0, x_358);
lean_ctor_set(x_359, 1, x_357);
x_360 = lean_array_push(x_8, x_359);
lean_ctor_set(x_340, 1, x_10);
lean_ctor_set(x_340, 0, x_360);
return x_340;
}
}
else
{
uint8_t x_361; 
lean_free_object(x_340);
lean_dec(x_10);
lean_dec(x_8);
x_361 = !lean_is_exclusive(x_344);
if (x_361 == 0)
{
lean_object* x_362; 
x_362 = lean_ctor_get(x_344, 0);
lean_dec(x_362);
return x_344;
}
else
{
lean_object* x_363; lean_object* x_364; 
x_363 = lean_ctor_get(x_344, 1);
lean_inc(x_363);
lean_dec(x_344);
x_364 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_364, 0, x_351);
lean_ctor_set(x_364, 1, x_363);
return x_364;
}
}
}
else
{
uint8_t x_365; 
lean_free_object(x_340);
lean_dec(x_8);
x_365 = !lean_is_exclusive(x_344);
if (x_365 == 0)
{
lean_object* x_366; lean_object* x_367; 
x_366 = lean_ctor_get(x_344, 1);
lean_dec(x_366);
x_367 = lean_ctor_get(x_344, 0);
lean_dec(x_367);
lean_ctor_set(x_344, 1, x_10);
return x_344;
}
else
{
lean_object* x_368; 
lean_dec(x_344);
x_368 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_368, 0, x_351);
lean_ctor_set(x_368, 1, x_10);
return x_368;
}
}
}
}
else
{
lean_object* x_369; lean_object* x_370; lean_object* x_371; 
x_369 = lean_ctor_get(x_340, 0);
x_370 = lean_ctor_get(x_340, 1);
lean_inc(x_370);
lean_inc(x_369);
lean_dec(x_340);
x_371 = l___private_Init_Lean_Elab_TermApp_20__elabAppLVals(x_1, x_369, x_3, x_4, x_5, x_6, x_7, x_9, x_370);
if (lean_obj_tag(x_371) == 0)
{
lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; 
x_372 = lean_ctor_get(x_371, 0);
lean_inc(x_372);
x_373 = lean_ctor_get(x_371, 1);
lean_inc(x_373);
if (lean_is_exclusive(x_371)) {
 lean_ctor_release(x_371, 0);
 lean_ctor_release(x_371, 1);
 x_374 = x_371;
} else {
 lean_dec_ref(x_371);
 x_374 = lean_box(0);
}
if (lean_is_scalar(x_374)) {
 x_375 = lean_alloc_ctor(0, 2, 0);
} else {
 x_375 = x_374;
}
lean_ctor_set(x_375, 0, x_372);
lean_ctor_set(x_375, 1, x_373);
x_376 = lean_array_push(x_8, x_375);
x_377 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_377, 0, x_376);
lean_ctor_set(x_377, 1, x_10);
return x_377;
}
else
{
lean_object* x_378; 
x_378 = lean_ctor_get(x_371, 0);
lean_inc(x_378);
if (lean_obj_tag(x_378) == 0)
{
lean_object* x_379; 
x_379 = lean_ctor_get(x_378, 0);
lean_inc(x_379);
if (lean_obj_tag(x_379) == 0)
{
lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; 
lean_dec(x_378);
x_380 = lean_ctor_get(x_371, 1);
lean_inc(x_380);
if (lean_is_exclusive(x_371)) {
 lean_ctor_release(x_371, 0);
 lean_ctor_release(x_371, 1);
 x_381 = x_371;
} else {
 lean_dec_ref(x_371);
 x_381 = lean_box(0);
}
x_382 = lean_ctor_get(x_379, 0);
lean_inc(x_382);
lean_dec(x_379);
if (lean_is_scalar(x_381)) {
 x_383 = lean_alloc_ctor(1, 2, 0);
} else {
 x_383 = x_381;
}
lean_ctor_set(x_383, 0, x_382);
lean_ctor_set(x_383, 1, x_380);
x_384 = lean_array_push(x_8, x_383);
x_385 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_385, 0, x_384);
lean_ctor_set(x_385, 1, x_10);
return x_385;
}
else
{
lean_object* x_386; lean_object* x_387; lean_object* x_388; 
lean_dec(x_10);
lean_dec(x_8);
x_386 = lean_ctor_get(x_371, 1);
lean_inc(x_386);
if (lean_is_exclusive(x_371)) {
 lean_ctor_release(x_371, 0);
 lean_ctor_release(x_371, 1);
 x_387 = x_371;
} else {
 lean_dec_ref(x_371);
 x_387 = lean_box(0);
}
if (lean_is_scalar(x_387)) {
 x_388 = lean_alloc_ctor(1, 2, 0);
} else {
 x_388 = x_387;
}
lean_ctor_set(x_388, 0, x_378);
lean_ctor_set(x_388, 1, x_386);
return x_388;
}
}
else
{
lean_object* x_389; lean_object* x_390; 
lean_dec(x_8);
if (lean_is_exclusive(x_371)) {
 lean_ctor_release(x_371, 0);
 lean_ctor_release(x_371, 1);
 x_389 = x_371;
} else {
 lean_dec_ref(x_371);
 x_389 = lean_box(0);
}
if (lean_is_scalar(x_389)) {
 x_390 = lean_alloc_ctor(1, 2, 0);
} else {
 x_390 = x_389;
}
lean_ctor_set(x_390, 0, x_378);
lean_ctor_set(x_390, 1, x_10);
return x_390;
}
}
}
}
else
{
lean_object* x_391; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_391 = lean_ctor_get(x_340, 0);
lean_inc(x_391);
if (lean_obj_tag(x_391) == 0)
{
lean_object* x_392; 
x_392 = lean_ctor_get(x_391, 0);
lean_inc(x_392);
if (lean_obj_tag(x_392) == 0)
{
uint8_t x_393; 
lean_dec(x_391);
x_393 = !lean_is_exclusive(x_340);
if (x_393 == 0)
{
lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; 
x_394 = lean_ctor_get(x_340, 0);
lean_dec(x_394);
x_395 = lean_ctor_get(x_392, 0);
lean_inc(x_395);
lean_dec(x_392);
lean_ctor_set(x_340, 0, x_395);
x_396 = lean_array_push(x_8, x_340);
x_397 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_397, 0, x_396);
lean_ctor_set(x_397, 1, x_10);
return x_397;
}
else
{
lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; 
x_398 = lean_ctor_get(x_340, 1);
lean_inc(x_398);
lean_dec(x_340);
x_399 = lean_ctor_get(x_392, 0);
lean_inc(x_399);
lean_dec(x_392);
x_400 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_400, 0, x_399);
lean_ctor_set(x_400, 1, x_398);
x_401 = lean_array_push(x_8, x_400);
x_402 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_402, 0, x_401);
lean_ctor_set(x_402, 1, x_10);
return x_402;
}
}
else
{
uint8_t x_403; 
lean_dec(x_10);
lean_dec(x_8);
x_403 = !lean_is_exclusive(x_340);
if (x_403 == 0)
{
lean_object* x_404; 
x_404 = lean_ctor_get(x_340, 0);
lean_dec(x_404);
return x_340;
}
else
{
lean_object* x_405; lean_object* x_406; 
x_405 = lean_ctor_get(x_340, 1);
lean_inc(x_405);
lean_dec(x_340);
x_406 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_406, 0, x_391);
lean_ctor_set(x_406, 1, x_405);
return x_406;
}
}
}
else
{
uint8_t x_407; 
lean_dec(x_8);
x_407 = !lean_is_exclusive(x_340);
if (x_407 == 0)
{
lean_object* x_408; lean_object* x_409; 
x_408 = lean_ctor_get(x_340, 1);
lean_dec(x_408);
x_409 = lean_ctor_get(x_340, 0);
lean_dec(x_409);
lean_ctor_set(x_340, 1, x_10);
return x_340;
}
else
{
lean_object* x_410; 
lean_dec(x_340);
x_410 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_410, 0, x_391);
lean_ctor_set(x_410, 1, x_10);
return x_410;
}
}
}
}
else
{
uint8_t x_411; 
lean_dec(x_2);
x_411 = 1;
x_2 = x_334;
x_7 = x_411;
goto _start;
}
}
}
}
else
{
lean_object* x_421; lean_object* x_422; lean_object* x_423; 
x_421 = l_Lean_Syntax_getArgs(x_2);
x_422 = lean_unsigned_to_nat(0u);
x_423 = l_Array_iterateMAux___main___at___private_Init_Lean_Elab_TermApp_22__elabAppFn___main___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_421, x_422, x_8, x_9, x_10);
lean_dec(x_421);
lean_dec(x_2);
return x_423;
}
}
else
{
lean_object* x_424; lean_object* x_425; 
x_424 = lean_box(0);
x_425 = l___private_Init_Lean_Elab_TermApp_21__elabAppFnId(x_1, x_2, x_424, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_425;
}
block_180:
{
uint8_t x_12; 
x_12 = l_coeDecidableEq(x_11);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; lean_object* x_15; 
x_13 = lean_box(0);
x_14 = 1;
lean_inc(x_10);
lean_inc(x_9);
x_15 = l_Lean_Elab_Term_elabTermAux___main(x_13, x_14, x_2, x_9, x_10);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
x_19 = l___private_Init_Lean_Elab_TermApp_20__elabAppLVals(x_1, x_17, x_3, x_4, x_5, x_6, x_7, x_9, x_18);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; 
x_21 = lean_array_push(x_8, x_19);
lean_ctor_set(x_15, 1, x_10);
lean_ctor_set(x_15, 0, x_21);
return x_15;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_19, 0);
x_23 = lean_ctor_get(x_19, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_19);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_array_push(x_8, x_24);
lean_ctor_set(x_15, 1, x_10);
lean_ctor_set(x_15, 0, x_25);
return x_15;
}
}
else
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_19, 0);
lean_inc(x_26);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
if (lean_obj_tag(x_27) == 0)
{
uint8_t x_28; 
lean_dec(x_26);
x_28 = !lean_is_exclusive(x_19);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_19, 0);
lean_dec(x_29);
x_30 = lean_ctor_get(x_27, 0);
lean_inc(x_30);
lean_dec(x_27);
lean_ctor_set(x_19, 0, x_30);
x_31 = lean_array_push(x_8, x_19);
lean_ctor_set(x_15, 1, x_10);
lean_ctor_set(x_15, 0, x_31);
return x_15;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_19, 1);
lean_inc(x_32);
lean_dec(x_19);
x_33 = lean_ctor_get(x_27, 0);
lean_inc(x_33);
lean_dec(x_27);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
x_35 = lean_array_push(x_8, x_34);
lean_ctor_set(x_15, 1, x_10);
lean_ctor_set(x_15, 0, x_35);
return x_15;
}
}
else
{
uint8_t x_36; 
lean_free_object(x_15);
lean_dec(x_10);
lean_dec(x_8);
x_36 = !lean_is_exclusive(x_19);
if (x_36 == 0)
{
lean_object* x_37; 
x_37 = lean_ctor_get(x_19, 0);
lean_dec(x_37);
return x_19;
}
else
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_ctor_get(x_19, 1);
lean_inc(x_38);
lean_dec(x_19);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_26);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
else
{
uint8_t x_40; 
lean_free_object(x_15);
lean_dec(x_8);
x_40 = !lean_is_exclusive(x_19);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_19, 1);
lean_dec(x_41);
x_42 = lean_ctor_get(x_19, 0);
lean_dec(x_42);
lean_ctor_set(x_19, 1, x_10);
return x_19;
}
else
{
lean_object* x_43; 
lean_dec(x_19);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_26);
lean_ctor_set(x_43, 1, x_10);
return x_43;
}
}
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_15, 0);
x_45 = lean_ctor_get(x_15, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_15);
x_46 = l___private_Init_Lean_Elab_TermApp_20__elabAppLVals(x_1, x_44, x_3, x_4, x_5, x_6, x_7, x_9, x_45);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_49 = x_46;
} else {
 lean_dec_ref(x_46);
 x_49 = lean_box(0);
}
if (lean_is_scalar(x_49)) {
 x_50 = lean_alloc_ctor(0, 2, 0);
} else {
 x_50 = x_49;
}
lean_ctor_set(x_50, 0, x_47);
lean_ctor_set(x_50, 1, x_48);
x_51 = lean_array_push(x_8, x_50);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_10);
return x_52;
}
else
{
lean_object* x_53; 
x_53 = lean_ctor_get(x_46, 0);
lean_inc(x_53);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_53);
x_55 = lean_ctor_get(x_46, 1);
lean_inc(x_55);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_56 = x_46;
} else {
 lean_dec_ref(x_46);
 x_56 = lean_box(0);
}
x_57 = lean_ctor_get(x_54, 0);
lean_inc(x_57);
lean_dec(x_54);
if (lean_is_scalar(x_56)) {
 x_58 = lean_alloc_ctor(1, 2, 0);
} else {
 x_58 = x_56;
}
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_55);
x_59 = lean_array_push(x_8, x_58);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_10);
return x_60;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
lean_dec(x_10);
lean_dec(x_8);
x_61 = lean_ctor_get(x_46, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_62 = x_46;
} else {
 lean_dec_ref(x_46);
 x_62 = lean_box(0);
}
if (lean_is_scalar(x_62)) {
 x_63 = lean_alloc_ctor(1, 2, 0);
} else {
 x_63 = x_62;
}
lean_ctor_set(x_63, 0, x_53);
lean_ctor_set(x_63, 1, x_61);
return x_63;
}
}
else
{
lean_object* x_64; lean_object* x_65; 
lean_dec(x_8);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_64 = x_46;
} else {
 lean_dec_ref(x_46);
 x_64 = lean_box(0);
}
if (lean_is_scalar(x_64)) {
 x_65 = lean_alloc_ctor(1, 2, 0);
} else {
 x_65 = x_64;
}
lean_ctor_set(x_65, 0, x_53);
lean_ctor_set(x_65, 1, x_10);
return x_65;
}
}
}
}
else
{
lean_object* x_66; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_66 = lean_ctor_get(x_15, 0);
lean_inc(x_66);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
if (lean_obj_tag(x_67) == 0)
{
uint8_t x_68; 
lean_dec(x_66);
x_68 = !lean_is_exclusive(x_15);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_69 = lean_ctor_get(x_15, 0);
lean_dec(x_69);
x_70 = lean_ctor_get(x_67, 0);
lean_inc(x_70);
lean_dec(x_67);
lean_ctor_set(x_15, 0, x_70);
x_71 = lean_array_push(x_8, x_15);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_10);
return x_72;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_73 = lean_ctor_get(x_15, 1);
lean_inc(x_73);
lean_dec(x_15);
x_74 = lean_ctor_get(x_67, 0);
lean_inc(x_74);
lean_dec(x_67);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_73);
x_76 = lean_array_push(x_8, x_75);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_10);
return x_77;
}
}
else
{
uint8_t x_78; 
lean_dec(x_10);
lean_dec(x_8);
x_78 = !lean_is_exclusive(x_15);
if (x_78 == 0)
{
lean_object* x_79; 
x_79 = lean_ctor_get(x_15, 0);
lean_dec(x_79);
return x_15;
}
else
{
lean_object* x_80; lean_object* x_81; 
x_80 = lean_ctor_get(x_15, 1);
lean_inc(x_80);
lean_dec(x_15);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_66);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
}
}
else
{
uint8_t x_82; 
lean_dec(x_8);
x_82 = !lean_is_exclusive(x_15);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; 
x_83 = lean_ctor_get(x_15, 1);
lean_dec(x_83);
x_84 = lean_ctor_get(x_15, 0);
lean_dec(x_84);
lean_ctor_set(x_15, 1, x_10);
return x_15;
}
else
{
lean_object* x_85; 
lean_dec(x_15);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_66);
lean_ctor_set(x_85, 1, x_10);
return x_85;
}
}
}
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; uint8_t x_89; uint8_t x_90; 
x_86 = lean_unsigned_to_nat(0u);
x_87 = l_Lean_Syntax_getArg(x_2, x_86);
x_88 = l_Lean_identKind___closed__2;
lean_inc(x_87);
x_89 = l_Lean_Syntax_isOfKind(x_87, x_88);
x_90 = l_coeDecidableEq(x_89);
if (x_90 == 0)
{
lean_object* x_91; uint8_t x_92; lean_object* x_93; 
lean_dec(x_87);
x_91 = lean_box(0);
x_92 = 1;
lean_inc(x_10);
lean_inc(x_9);
x_93 = l_Lean_Elab_Term_elabTermAux___main(x_91, x_92, x_2, x_9, x_10);
if (lean_obj_tag(x_93) == 0)
{
uint8_t x_94; 
x_94 = !lean_is_exclusive(x_93);
if (x_94 == 0)
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_95 = lean_ctor_get(x_93, 0);
x_96 = lean_ctor_get(x_93, 1);
x_97 = l___private_Init_Lean_Elab_TermApp_20__elabAppLVals(x_1, x_95, x_3, x_4, x_5, x_6, x_7, x_9, x_96);
if (lean_obj_tag(x_97) == 0)
{
uint8_t x_98; 
x_98 = !lean_is_exclusive(x_97);
if (x_98 == 0)
{
lean_object* x_99; 
x_99 = lean_array_push(x_8, x_97);
lean_ctor_set(x_93, 1, x_10);
lean_ctor_set(x_93, 0, x_99);
return x_93;
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_100 = lean_ctor_get(x_97, 0);
x_101 = lean_ctor_get(x_97, 1);
lean_inc(x_101);
lean_inc(x_100);
lean_dec(x_97);
x_102 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_102, 0, x_100);
lean_ctor_set(x_102, 1, x_101);
x_103 = lean_array_push(x_8, x_102);
lean_ctor_set(x_93, 1, x_10);
lean_ctor_set(x_93, 0, x_103);
return x_93;
}
}
else
{
lean_object* x_104; 
x_104 = lean_ctor_get(x_97, 0);
lean_inc(x_104);
if (lean_obj_tag(x_104) == 0)
{
lean_object* x_105; 
x_105 = lean_ctor_get(x_104, 0);
lean_inc(x_105);
if (lean_obj_tag(x_105) == 0)
{
uint8_t x_106; 
lean_dec(x_104);
x_106 = !lean_is_exclusive(x_97);
if (x_106 == 0)
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_107 = lean_ctor_get(x_97, 0);
lean_dec(x_107);
x_108 = lean_ctor_get(x_105, 0);
lean_inc(x_108);
lean_dec(x_105);
lean_ctor_set(x_97, 0, x_108);
x_109 = lean_array_push(x_8, x_97);
lean_ctor_set(x_93, 1, x_10);
lean_ctor_set(x_93, 0, x_109);
return x_93;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_110 = lean_ctor_get(x_97, 1);
lean_inc(x_110);
lean_dec(x_97);
x_111 = lean_ctor_get(x_105, 0);
lean_inc(x_111);
lean_dec(x_105);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_111);
lean_ctor_set(x_112, 1, x_110);
x_113 = lean_array_push(x_8, x_112);
lean_ctor_set(x_93, 1, x_10);
lean_ctor_set(x_93, 0, x_113);
return x_93;
}
}
else
{
uint8_t x_114; 
lean_free_object(x_93);
lean_dec(x_10);
lean_dec(x_8);
x_114 = !lean_is_exclusive(x_97);
if (x_114 == 0)
{
lean_object* x_115; 
x_115 = lean_ctor_get(x_97, 0);
lean_dec(x_115);
return x_97;
}
else
{
lean_object* x_116; lean_object* x_117; 
x_116 = lean_ctor_get(x_97, 1);
lean_inc(x_116);
lean_dec(x_97);
x_117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_117, 0, x_104);
lean_ctor_set(x_117, 1, x_116);
return x_117;
}
}
}
else
{
uint8_t x_118; 
lean_free_object(x_93);
lean_dec(x_8);
x_118 = !lean_is_exclusive(x_97);
if (x_118 == 0)
{
lean_object* x_119; lean_object* x_120; 
x_119 = lean_ctor_get(x_97, 1);
lean_dec(x_119);
x_120 = lean_ctor_get(x_97, 0);
lean_dec(x_120);
lean_ctor_set(x_97, 1, x_10);
return x_97;
}
else
{
lean_object* x_121; 
lean_dec(x_97);
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_104);
lean_ctor_set(x_121, 1, x_10);
return x_121;
}
}
}
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_122 = lean_ctor_get(x_93, 0);
x_123 = lean_ctor_get(x_93, 1);
lean_inc(x_123);
lean_inc(x_122);
lean_dec(x_93);
x_124 = l___private_Init_Lean_Elab_TermApp_20__elabAppLVals(x_1, x_122, x_3, x_4, x_5, x_6, x_7, x_9, x_123);
if (lean_obj_tag(x_124) == 0)
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_125 = lean_ctor_get(x_124, 0);
lean_inc(x_125);
x_126 = lean_ctor_get(x_124, 1);
lean_inc(x_126);
if (lean_is_exclusive(x_124)) {
 lean_ctor_release(x_124, 0);
 lean_ctor_release(x_124, 1);
 x_127 = x_124;
} else {
 lean_dec_ref(x_124);
 x_127 = lean_box(0);
}
if (lean_is_scalar(x_127)) {
 x_128 = lean_alloc_ctor(0, 2, 0);
} else {
 x_128 = x_127;
}
lean_ctor_set(x_128, 0, x_125);
lean_ctor_set(x_128, 1, x_126);
x_129 = lean_array_push(x_8, x_128);
x_130 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_130, 0, x_129);
lean_ctor_set(x_130, 1, x_10);
return x_130;
}
else
{
lean_object* x_131; 
x_131 = lean_ctor_get(x_124, 0);
lean_inc(x_131);
if (lean_obj_tag(x_131) == 0)
{
lean_object* x_132; 
x_132 = lean_ctor_get(x_131, 0);
lean_inc(x_132);
if (lean_obj_tag(x_132) == 0)
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
lean_dec(x_131);
x_133 = lean_ctor_get(x_124, 1);
lean_inc(x_133);
if (lean_is_exclusive(x_124)) {
 lean_ctor_release(x_124, 0);
 lean_ctor_release(x_124, 1);
 x_134 = x_124;
} else {
 lean_dec_ref(x_124);
 x_134 = lean_box(0);
}
x_135 = lean_ctor_get(x_132, 0);
lean_inc(x_135);
lean_dec(x_132);
if (lean_is_scalar(x_134)) {
 x_136 = lean_alloc_ctor(1, 2, 0);
} else {
 x_136 = x_134;
}
lean_ctor_set(x_136, 0, x_135);
lean_ctor_set(x_136, 1, x_133);
x_137 = lean_array_push(x_8, x_136);
x_138 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_138, 0, x_137);
lean_ctor_set(x_138, 1, x_10);
return x_138;
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; 
lean_dec(x_10);
lean_dec(x_8);
x_139 = lean_ctor_get(x_124, 1);
lean_inc(x_139);
if (lean_is_exclusive(x_124)) {
 lean_ctor_release(x_124, 0);
 lean_ctor_release(x_124, 1);
 x_140 = x_124;
} else {
 lean_dec_ref(x_124);
 x_140 = lean_box(0);
}
if (lean_is_scalar(x_140)) {
 x_141 = lean_alloc_ctor(1, 2, 0);
} else {
 x_141 = x_140;
}
lean_ctor_set(x_141, 0, x_131);
lean_ctor_set(x_141, 1, x_139);
return x_141;
}
}
else
{
lean_object* x_142; lean_object* x_143; 
lean_dec(x_8);
if (lean_is_exclusive(x_124)) {
 lean_ctor_release(x_124, 0);
 lean_ctor_release(x_124, 1);
 x_142 = x_124;
} else {
 lean_dec_ref(x_124);
 x_142 = lean_box(0);
}
if (lean_is_scalar(x_142)) {
 x_143 = lean_alloc_ctor(1, 2, 0);
} else {
 x_143 = x_142;
}
lean_ctor_set(x_143, 0, x_131);
lean_ctor_set(x_143, 1, x_10);
return x_143;
}
}
}
}
else
{
lean_object* x_144; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_144 = lean_ctor_get(x_93, 0);
lean_inc(x_144);
if (lean_obj_tag(x_144) == 0)
{
lean_object* x_145; 
x_145 = lean_ctor_get(x_144, 0);
lean_inc(x_145);
if (lean_obj_tag(x_145) == 0)
{
uint8_t x_146; 
lean_dec(x_144);
x_146 = !lean_is_exclusive(x_93);
if (x_146 == 0)
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_147 = lean_ctor_get(x_93, 0);
lean_dec(x_147);
x_148 = lean_ctor_get(x_145, 0);
lean_inc(x_148);
lean_dec(x_145);
lean_ctor_set(x_93, 0, x_148);
x_149 = lean_array_push(x_8, x_93);
x_150 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_150, 0, x_149);
lean_ctor_set(x_150, 1, x_10);
return x_150;
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; 
x_151 = lean_ctor_get(x_93, 1);
lean_inc(x_151);
lean_dec(x_93);
x_152 = lean_ctor_get(x_145, 0);
lean_inc(x_152);
lean_dec(x_145);
x_153 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_153, 0, x_152);
lean_ctor_set(x_153, 1, x_151);
x_154 = lean_array_push(x_8, x_153);
x_155 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_155, 0, x_154);
lean_ctor_set(x_155, 1, x_10);
return x_155;
}
}
else
{
uint8_t x_156; 
lean_dec(x_10);
lean_dec(x_8);
x_156 = !lean_is_exclusive(x_93);
if (x_156 == 0)
{
lean_object* x_157; 
x_157 = lean_ctor_get(x_93, 0);
lean_dec(x_157);
return x_93;
}
else
{
lean_object* x_158; lean_object* x_159; 
x_158 = lean_ctor_get(x_93, 1);
lean_inc(x_158);
lean_dec(x_93);
x_159 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_159, 0, x_144);
lean_ctor_set(x_159, 1, x_158);
return x_159;
}
}
}
else
{
uint8_t x_160; 
lean_dec(x_8);
x_160 = !lean_is_exclusive(x_93);
if (x_160 == 0)
{
lean_object* x_161; lean_object* x_162; 
x_161 = lean_ctor_get(x_93, 1);
lean_dec(x_161);
x_162 = lean_ctor_get(x_93, 0);
lean_dec(x_162);
lean_ctor_set(x_93, 1, x_10);
return x_93;
}
else
{
lean_object* x_163; 
lean_dec(x_93);
x_163 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_163, 0, x_144);
lean_ctor_set(x_163, 1, x_10);
return x_163;
}
}
}
}
else
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; uint8_t x_167; 
x_164 = lean_unsigned_to_nat(1u);
x_165 = l_Lean_Syntax_getArg(x_2, x_164);
lean_dec(x_2);
x_166 = l_Lean_Syntax_getArgs(x_165);
lean_dec(x_165);
x_167 = l_Array_isEmpty___rarg(x_166);
if (x_167 == 0)
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_168 = l_Lean_Syntax_inhabited;
x_169 = lean_array_get(x_168, x_166, x_86);
lean_dec(x_166);
x_170 = l_Lean_Elab_Term_elabExplicitUniv(x_169, x_9, x_10);
lean_dec(x_169);
if (lean_obj_tag(x_170) == 0)
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; 
x_171 = lean_ctor_get(x_170, 0);
lean_inc(x_171);
x_172 = lean_ctor_get(x_170, 1);
lean_inc(x_172);
lean_dec(x_170);
x_173 = l___private_Init_Lean_Elab_TermApp_21__elabAppFnId(x_1, x_87, x_171, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_172);
return x_173;
}
else
{
uint8_t x_174; 
lean_dec(x_87);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_174 = !lean_is_exclusive(x_170);
if (x_174 == 0)
{
return x_170;
}
else
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; 
x_175 = lean_ctor_get(x_170, 0);
x_176 = lean_ctor_get(x_170, 1);
lean_inc(x_176);
lean_inc(x_175);
lean_dec(x_170);
x_177 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_177, 0, x_175);
lean_ctor_set(x_177, 1, x_176);
return x_177;
}
}
}
else
{
lean_object* x_178; lean_object* x_179; 
lean_dec(x_166);
x_178 = lean_box(0);
x_179 = l___private_Init_Lean_Elab_TermApp_21__elabAppFnId(x_1, x_87, x_178, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_179;
}
}
}
}
}
}
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_Elab_TermApp_22__elabAppFn___main___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_7);
lean_dec(x_7);
x_14 = l_Array_iterateMAux___main___at___private_Init_Lean_Elab_TermApp_22__elabAppFn___main___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_13, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_8);
lean_dec(x_2);
return x_14;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_22__elabAppFn___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_7);
lean_dec(x_7);
x_12 = l___private_Init_Lean_Elab_TermApp_22__elabAppFn___main(x_1, x_2, x_3, x_4, x_5, x_6, x_11, x_8, x_9, x_10);
return x_12;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_22__elabAppFn(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, uint8_t x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Init_Lean_Elab_TermApp_22__elabAppFn___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_22__elabAppFn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_7);
lean_dec(x_7);
x_12 = l___private_Init_Lean_Elab_TermApp_22__elabAppFn(x_1, x_2, x_3, x_4, x_5, x_6, x_11, x_8, x_9, x_10);
return x_12;
}
}
lean_object* l_Array_filterAux___main___at___private_Init_Lean_Elab_TermApp_23__getSuccess___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_1);
x_5 = lean_nat_dec_lt(x_2, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = l_Array_shrink___main___rarg(x_1, x_3);
lean_dec(x_3);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_array_fget(x_1, x_2);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
lean_dec(x_7);
x_8 = lean_nat_dec_lt(x_3, x_2);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_2, x_9);
lean_dec(x_2);
x_11 = lean_nat_add(x_3, x_9);
lean_dec(x_3);
x_2 = x_10;
x_3 = x_11;
goto _start;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_array_fswap(x_1, x_2, x_3);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_2, x_14);
lean_dec(x_2);
x_16 = lean_nat_add(x_3, x_14);
lean_dec(x_3);
x_1 = x_13;
x_2 = x_15;
x_3 = x_16;
goto _start;
}
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_7);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_2, x_18);
lean_dec(x_2);
x_2 = x_19;
goto _start;
}
}
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_23__getSuccess(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Array_filterAux___main___at___private_Init_Lean_Elab_TermApp_23__getSuccess___spec__1(x_1, x_2, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_getPosition___at___private_Init_Lean_Elab_TermApp_24__toMessageData___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_2, 2);
x_5 = lean_ctor_get(x_2, 3);
x_6 = l_Lean_FileMap_toPosition(x_4, x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_2, 2);
x_9 = lean_ctor_get(x_1, 0);
x_10 = l_Lean_FileMap_toPosition(x_8, x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_3);
return x_11;
}
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_24__toMessageData___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Util_1__mkPanicMessage___closed__2;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_24__toMessageData___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_24__toMessageData___closed__1;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_24__toMessageData(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_5 = l_Lean_Elab_getPos___at_Lean_Elab_Term_throwError___spec__2(x_2, x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_6);
x_9 = l_Lean_Elab_getPosition___at___private_Init_Lean_Elab_TermApp_24__toMessageData___spec__1(x_8, x_3, x_7);
lean_dec(x_8);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = l_Lean_Position_DecidableEq(x_11, x_12);
lean_dec(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
x_15 = l_Nat_repr(x_14);
x_16 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_16, 0, x_15);
x_17 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_17, 0, x_16);
x_18 = l___private_Init_Lean_Elab_TermApp_24__toMessageData___closed__2;
x_19 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = lean_ctor_get(x_12, 1);
lean_inc(x_20);
lean_dec(x_12);
x_21 = l_Nat_repr(x_20);
x_22 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_24, 0, x_19);
lean_ctor_set(x_24, 1, x_23);
x_25 = l_Lean_Meta_Exception_toTraceMessageData___closed__4;
x_26 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_ctor_get(x_1, 4);
lean_inc(x_27);
lean_dec(x_1);
x_28 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
lean_ctor_set(x_9, 0, x_28);
return x_9;
}
else
{
lean_object* x_29; 
lean_dec(x_12);
x_29 = lean_ctor_get(x_1, 4);
lean_inc(x_29);
lean_dec(x_1);
lean_ctor_set(x_9, 0, x_29);
return x_9;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_30 = lean_ctor_get(x_9, 0);
x_31 = lean_ctor_get(x_9, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_9);
x_32 = lean_ctor_get(x_1, 1);
lean_inc(x_32);
x_33 = l_Lean_Position_DecidableEq(x_30, x_32);
lean_dec(x_30);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_34 = lean_ctor_get(x_32, 0);
lean_inc(x_34);
x_35 = l_Nat_repr(x_34);
x_36 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_36, 0, x_35);
x_37 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_37, 0, x_36);
x_38 = l___private_Init_Lean_Elab_TermApp_24__toMessageData___closed__2;
x_39 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_ctor_get(x_32, 1);
lean_inc(x_40);
lean_dec(x_32);
x_41 = l_Nat_repr(x_40);
x_42 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_42, 0, x_41);
x_43 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_43, 0, x_42);
x_44 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_44, 0, x_39);
lean_ctor_set(x_44, 1, x_43);
x_45 = l_Lean_Meta_Exception_toTraceMessageData___closed__4;
x_46 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
x_47 = lean_ctor_get(x_1, 4);
lean_inc(x_47);
lean_dec(x_1);
x_48 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_31);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; 
lean_dec(x_32);
x_50 = lean_ctor_get(x_1, 4);
lean_inc(x_50);
lean_dec(x_1);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_31);
return x_51;
}
}
}
}
lean_object* l_Lean_Elab_getPosition___at___private_Init_Lean_Elab_TermApp_24__toMessageData___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_getPosition___at___private_Init_Lean_Elab_TermApp_24__toMessageData___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_24__toMessageData___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Lean_Elab_TermApp_24__toMessageData(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* _init_l_Array_umapMAux___main___at___private_Init_Lean_Elab_TermApp_25__mergeFailures___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_TermElabM_inhabited___boxed), 2, 1);
lean_closure_set(x_1, 0, lean_box(0));
return x_1;
}
}
lean_object* l_Array_umapMAux___main___at___private_Init_Lean_Elab_TermApp_25__mergeFailures___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_3);
x_7 = lean_nat_dec_lt(x_2, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_2);
x_8 = l_Array_empty___closed__1;
x_9 = x_3;
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_5);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_array_fget(x_3, x_2);
x_12 = lean_box(0);
x_13 = x_12;
x_14 = lean_array_fset(x_3, x_2, x_13);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = l_Array_umapMAux___main___at___private_Init_Lean_Elab_TermApp_25__mergeFailures___spec__1___closed__1;
x_16 = l_unreachable_x21___rarg(x_15);
lean_inc(x_4);
x_17 = lean_apply_2(x_16, x_4, x_5);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_add(x_2, x_20);
x_22 = x_18;
lean_dec(x_11);
x_23 = lean_array_fset(x_14, x_2, x_22);
lean_dec(x_2);
x_2 = x_21;
x_3 = x_23;
x_5 = x_19;
goto _start;
}
else
{
uint8_t x_25; 
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_4);
lean_dec(x_2);
x_25 = !lean_is_exclusive(x_17);
if (x_25 == 0)
{
return x_17;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_17, 0);
x_27 = lean_ctor_get(x_17, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_17);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_29 = lean_ctor_get(x_11, 0);
lean_inc(x_29);
x_30 = l___private_Init_Lean_Elab_TermApp_24__toMessageData(x_29, x_1, x_4, x_5);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_unsigned_to_nat(1u);
x_34 = lean_nat_add(x_2, x_33);
x_35 = x_31;
lean_dec(x_11);
x_36 = lean_array_fset(x_14, x_2, x_35);
lean_dec(x_2);
x_2 = x_34;
x_3 = x_36;
x_5 = x_32;
goto _start;
}
}
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_25__mergeFailures___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("overloaded, errors ");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_25__mergeFailures___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_25__mergeFailures___rarg___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_25__mergeFailures___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_25__mergeFailures___rarg___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_25__mergeFailures___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_unsigned_to_nat(0u);
lean_inc(x_3);
x_6 = l_Array_umapMAux___main___at___private_Init_Lean_Elab_TermApp_25__mergeFailures___spec__1(x_2, x_5, x_1, x_3, x_4);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_Lean_MessageData_ofArray(x_7);
lean_dec(x_7);
x_10 = l___private_Init_Lean_Elab_TermApp_25__mergeFailures___rarg___closed__3;
x_11 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
x_12 = l_Lean_Elab_Term_throwError___rarg(x_2, x_11, x_3, x_8);
return x_12;
}
else
{
uint8_t x_13; 
lean_dec(x_3);
x_13 = !lean_is_exclusive(x_6);
if (x_13 == 0)
{
return x_6;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_6, 0);
x_15 = lean_ctor_get(x_6, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_6);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_25__mergeFailures(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Lean_Elab_TermApp_25__mergeFailures___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_umapMAux___main___at___private_Init_Lean_Elab_TermApp_25__mergeFailures___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_umapMAux___main___at___private_Init_Lean_Elab_TermApp_25__mergeFailures___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_25__mergeFailures___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Lean_Elab_TermApp_25__mergeFailures___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Array_umapMAux___main___at___private_Init_Lean_Elab_TermApp_26__elabAppAux___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_4);
x_6 = lean_nat_dec_lt(x_3, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = l_Array_empty___closed__1;
x_8 = x_4;
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_array_fget(x_4, x_3);
x_10 = lean_box(0);
x_11 = x_10;
x_12 = lean_array_fset(x_4, x_3, x_11);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_3, x_13);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_15 = lean_ctor_get(x_9, 1);
lean_inc(x_15);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_ctor_get(x_9, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
lean_inc(x_2);
lean_inc(x_1);
x_20 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
lean_ctor_set(x_20, 2, x_1);
lean_ctor_set(x_20, 3, x_2);
x_21 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_21, 0, x_17);
x_22 = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
x_23 = x_22;
lean_dec(x_9);
x_24 = lean_array_fset(x_12, x_3, x_23);
lean_dec(x_3);
x_3 = x_14;
x_4 = x_24;
goto _start;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_26 = l_Lean_MessageData_Inhabited;
x_27 = l_unreachable_x21___rarg(x_26);
x_28 = x_27;
lean_dec(x_9);
x_29 = lean_array_fset(x_12, x_3, x_28);
lean_dec(x_3);
x_3 = x_14;
x_4 = x_29;
goto _start;
}
}
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_26__elabAppAux___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ambiguous, possible interpretations ");
return x_1;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_26__elabAppAux___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_26__elabAppAux___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_26__elabAppAux___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Lean_Elab_TermApp_26__elabAppAux___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_26__elabAppAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_box(0);
x_9 = 0;
x_10 = l_Array_empty___closed__1;
lean_inc(x_6);
lean_inc(x_2);
x_11 = l___private_Init_Lean_Elab_TermApp_22__elabAppFn___main(x_1, x_2, x_8, x_3, x_4, x_5, x_9, x_10, x_6, x_7);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_array_get_size(x_12);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_dec_eq(x_14, x_15);
lean_dec(x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_unsigned_to_nat(0u);
lean_inc(x_12);
x_18 = l_Array_filterAux___main___at___private_Init_Lean_Elab_TermApp_23__getSuccess___spec__1(x_12, x_17, x_17);
x_19 = lean_array_get_size(x_18);
x_20 = lean_nat_dec_eq(x_19, x_15);
if (x_20 == 0)
{
uint8_t x_21; 
x_21 = lean_nat_dec_lt(x_15, x_19);
lean_dec(x_19);
if (x_21 == 0)
{
lean_object* x_22; 
lean_dec(x_18);
x_22 = l___private_Init_Lean_Elab_TermApp_25__mergeFailures___rarg(x_12, x_2, x_6, x_13);
lean_dec(x_2);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_12);
x_23 = l_Lean_Elab_Term_getLCtx(x_6, x_13);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_Elab_Term_getOptions(x_6, x_25);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Array_umapMAux___main___at___private_Init_Lean_Elab_TermApp_26__elabAppAux___spec__1(x_24, x_27, x_17, x_18);
x_30 = l_Lean_MessageData_ofArray(x_29);
lean_dec(x_29);
x_31 = l___private_Init_Lean_Elab_TermApp_26__elabAppAux___closed__3;
x_32 = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
x_33 = l_Lean_Elab_Term_throwError___rarg(x_2, x_32, x_6, x_28);
lean_dec(x_2);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_19);
lean_dec(x_12);
lean_dec(x_2);
x_34 = l_Lean_Elab_Term_TermElabResult_inhabited;
x_35 = lean_array_get(x_34, x_18, x_17);
lean_dec(x_18);
x_36 = l_Lean_Elab_Term_applyResult(x_35, x_6, x_13);
lean_dec(x_13);
lean_dec(x_6);
return x_36;
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_2);
x_37 = l_Lean_Elab_Term_TermElabResult_inhabited;
x_38 = lean_unsigned_to_nat(0u);
x_39 = lean_array_get(x_37, x_12, x_38);
lean_dec(x_12);
x_40 = l_Lean_Elab_Term_applyResult(x_39, x_6, x_13);
lean_dec(x_13);
lean_dec(x_6);
return x_40;
}
}
else
{
uint8_t x_41; 
lean_dec(x_6);
lean_dec(x_2);
x_41 = !lean_is_exclusive(x_11);
if (x_41 == 0)
{
return x_11;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_11, 0);
x_43 = lean_ctor_get(x_11, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_11);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
}
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_Elab_TermApp_27__expandApp___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_2);
x_8 = lean_nat_dec_lt(x_3, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_3);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_4);
lean_ctor_set(x_9, 1, x_6);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_array_fget(x_2, x_3);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_3, x_11);
lean_dec(x_3);
x_13 = !lean_is_exclusive(x_4);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_14 = lean_ctor_get(x_4, 0);
x_15 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
x_16 = l_Lean_Syntax_getKind(x_10);
x_17 = l_Lean_Parser_Term_namedArgument___elambda__1___closed__2;
x_18 = lean_name_eq(x_16, x_17);
lean_dec(x_16);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_19, 0, x_10);
x_20 = lean_array_push(x_15, x_19);
lean_ctor_set(x_4, 1, x_20);
x_3 = x_12;
goto _start;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_22 = l_Lean_Syntax_getArg(x_10, x_11);
x_23 = l_Lean_Syntax_getId(x_22);
lean_dec(x_22);
x_24 = lean_unsigned_to_nat(3u);
x_25 = l_Lean_Syntax_getArg(x_10, x_24);
x_26 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_26, 0, x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_23);
lean_ctor_set(x_27, 1, x_26);
lean_inc(x_5);
x_28 = l_Lean_Elab_Term_addNamedArg(x_10, x_14, x_27, x_5, x_6);
lean_dec(x_10);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
lean_ctor_set(x_4, 0, x_29);
x_3 = x_12;
x_6 = x_30;
goto _start;
}
else
{
uint8_t x_32; 
lean_free_object(x_4);
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_5);
x_32 = !lean_is_exclusive(x_28);
if (x_32 == 0)
{
return x_28;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_28, 0);
x_34 = lean_ctor_get(x_28, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_28);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_36 = lean_ctor_get(x_4, 0);
x_37 = lean_ctor_get(x_4, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_4);
lean_inc(x_10);
x_38 = l_Lean_Syntax_getKind(x_10);
x_39 = l_Lean_Parser_Term_namedArgument___elambda__1___closed__2;
x_40 = lean_name_eq(x_38, x_39);
lean_dec(x_38);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_41, 0, x_10);
x_42 = lean_array_push(x_37, x_41);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_36);
lean_ctor_set(x_43, 1, x_42);
x_3 = x_12;
x_4 = x_43;
goto _start;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_45 = l_Lean_Syntax_getArg(x_10, x_11);
x_46 = l_Lean_Syntax_getId(x_45);
lean_dec(x_45);
x_47 = lean_unsigned_to_nat(3u);
x_48 = l_Lean_Syntax_getArg(x_10, x_47);
x_49 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_49, 0, x_48);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_46);
lean_ctor_set(x_50, 1, x_49);
lean_inc(x_5);
x_51 = l_Lean_Elab_Term_addNamedArg(x_10, x_36, x_50, x_5, x_6);
lean_dec(x_10);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_37);
x_3 = x_12;
x_4 = x_54;
x_6 = x_53;
goto _start;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
lean_dec(x_37);
lean_dec(x_12);
lean_dec(x_5);
x_56 = lean_ctor_get(x_51, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_51, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_51)) {
 lean_ctor_release(x_51, 0);
 lean_ctor_release(x_51, 1);
 x_58 = x_51;
} else {
 lean_dec_ref(x_51);
 x_58 = lean_box(0);
}
if (lean_is_scalar(x_58)) {
 x_59 = lean_alloc_ctor(1, 2, 0);
} else {
 x_59 = x_58;
}
lean_ctor_set(x_59, 0, x_56);
lean_ctor_set(x_59, 1, x_57);
return x_59;
}
}
}
}
}
}
lean_object* l_ReaderT_pure___at___private_Init_Lean_Elab_TermApp_27__expandApp___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
lean_object* l_ReaderT_pure___at___private_Init_Lean_Elab_TermApp_27__expandApp___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ReaderT_pure___at___private_Init_Lean_Elab_TermApp_27__expandApp___spec__2___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_27__expandApp(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Lean_Syntax_getArg(x_1, x_4);
x_6 = lean_unsigned_to_nat(1u);
x_7 = l_Lean_Syntax_getArg(x_1, x_6);
x_8 = l_Lean_Syntax_getArgs(x_7);
lean_dec(x_7);
x_9 = l___private_Init_Lean_Meta_Tactic_Apply_7__reorderNonDependentFirst___closed__1;
x_10 = l_Array_iterateMAux___main___at___private_Init_Lean_Elab_TermApp_27__expandApp___spec__1(x_1, x_8, x_4, x_9, x_2, x_3);
lean_dec(x_8);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_5);
lean_ctor_set(x_13, 1, x_12);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_5);
lean_ctor_set(x_16, 1, x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
uint8_t x_18; 
lean_dec(x_5);
x_18 = !lean_is_exclusive(x_10);
if (x_18 == 0)
{
return x_10;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_10, 0);
x_20 = lean_ctor_get(x_10, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_10);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
lean_object* l_Array_iterateMAux___main___at___private_Init_Lean_Elab_TermApp_27__expandApp___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Array_iterateMAux___main___at___private_Init_Lean_Elab_TermApp_27__expandApp___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_ReaderT_pure___at___private_Init_Lean_Elab_TermApp_27__expandApp___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_ReaderT_pure___at___private_Init_Lean_Elab_TermApp_27__expandApp___spec__2___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_27__expandApp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Lean_Elab_TermApp_27__expandApp(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Elab_Term_elabApp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_3);
x_5 = l___private_Init_Lean_Elab_TermApp_27__expandApp(x_1, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
lean_dec(x_6);
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_11);
lean_dec(x_7);
x_12 = l___private_Init_Lean_Elab_TermApp_26__elabAppAux(x_1, x_9, x_10, x_11, x_2, x_3, x_8);
return x_12;
}
else
{
uint8_t x_13; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_13 = !lean_is_exclusive(x_5);
if (x_13 == 0)
{
return x_5;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_5, 0);
x_15 = lean_ctor_get(x_5, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_5);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* _init_l___regBuiltinTermElab_Lean_Elab_Term_elabApp___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elabApp");
return x_1;
}
}
lean_object* _init_l___regBuiltinTermElab_Lean_Elab_Term_elabApp___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_declareBuiltinTermElab___closed__3;
x_2 = l___regBuiltinTermElab_Lean_Elab_Term_elabApp___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltinTermElab_Lean_Elab_Term_elabApp___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabApp), 4, 0);
return x_1;
}
}
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabApp(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_mkAppStx___closed__8;
x_3 = l___regBuiltinTermElab_Lean_Elab_Term_elabApp___closed__2;
x_4 = l___regBuiltinTermElab_Lean_Elab_Term_elabApp___closed__3;
x_5 = l_Lean_Elab_Term_addBuiltinTermElab(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_elabAtom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Array_empty___closed__1;
lean_inc(x_1);
x_6 = l___private_Init_Lean_Elab_TermApp_26__elabAppAux(x_1, x_1, x_5, x_5, x_2, x_3, x_4);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_elabId(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Term_elabAtom(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* _init_l___regBuiltinTermElab_Lean_Elab_Term_elabId___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elabId");
return x_1;
}
}
lean_object* _init_l___regBuiltinTermElab_Lean_Elab_Term_elabId___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_declareBuiltinTermElab___closed__3;
x_2 = l___regBuiltinTermElab_Lean_Elab_Term_elabId___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltinTermElab_Lean_Elab_Term_elabId___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabId), 4, 0);
return x_1;
}
}
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabId(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_mkTermIdFromIdent___closed__2;
x_3 = l___regBuiltinTermElab_Lean_Elab_Term_elabId___closed__2;
x_4 = l___regBuiltinTermElab_Lean_Elab_Term_elabId___closed__3;
x_5 = l_Lean_Elab_Term_addBuiltinTermElab(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_elabExplicit(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Term_elabAtom(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* _init_l___regBuiltinTermElab_Lean_Elab_Term_elabExplicit___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elabExplicit");
return x_1;
}
}
lean_object* _init_l___regBuiltinTermElab_Lean_Elab_Term_elabExplicit___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_declareBuiltinTermElab___closed__3;
x_2 = l___regBuiltinTermElab_Lean_Elab_Term_elabExplicit___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltinTermElab_Lean_Elab_Term_elabExplicit___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabExplicit), 4, 0);
return x_1;
}
}
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabExplicit(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Parser_Term_explicit___elambda__1___closed__2;
x_3 = l___regBuiltinTermElab_Lean_Elab_Term_elabExplicit___closed__2;
x_4 = l___regBuiltinTermElab_Lean_Elab_Term_elabExplicit___closed__3;
x_5 = l_Lean_Elab_Term_addBuiltinTermElab(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_elabChoice(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Term_elabAtom(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* _init_l___regBuiltinTermElab_Lean_Elab_Term_elabChoice___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elabChoice");
return x_1;
}
}
lean_object* _init_l___regBuiltinTermElab_Lean_Elab_Term_elabChoice___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_declareBuiltinTermElab___closed__3;
x_2 = l___regBuiltinTermElab_Lean_Elab_Term_elabChoice___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltinTermElab_Lean_Elab_Term_elabChoice___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabChoice), 4, 0);
return x_1;
}
}
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabChoice(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_choiceKind___closed__2;
x_3 = l___regBuiltinTermElab_Lean_Elab_Term_elabChoice___closed__2;
x_4 = l___regBuiltinTermElab_Lean_Elab_Term_elabChoice___closed__3;
x_5 = l_Lean_Elab_Term_addBuiltinTermElab(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_elabProj(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Term_elabAtom(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* _init_l___regBuiltinTermElab_Lean_Elab_Term_elabProj___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elabProj");
return x_1;
}
}
lean_object* _init_l___regBuiltinTermElab_Lean_Elab_Term_elabProj___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_declareBuiltinTermElab___closed__3;
x_2 = l___regBuiltinTermElab_Lean_Elab_Term_elabProj___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltinTermElab_Lean_Elab_Term_elabProj___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabProj), 4, 0);
return x_1;
}
}
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabProj(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Parser_Term_proj___elambda__1___closed__2;
x_3 = l___regBuiltinTermElab_Lean_Elab_Term_elabProj___closed__2;
x_4 = l___regBuiltinTermElab_Lean_Elab_Term_elabProj___closed__3;
x_5 = l_Lean_Elab_Term_addBuiltinTermElab(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_elabArrayRef(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Term_elabAtom(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* _init_l___regBuiltinTermElab_Lean_Elab_Term_elabArrayRef___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elabArrayRef");
return x_1;
}
}
lean_object* _init_l___regBuiltinTermElab_Lean_Elab_Term_elabArrayRef___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_declareBuiltinTermElab___closed__3;
x_2 = l___regBuiltinTermElab_Lean_Elab_Term_elabArrayRef___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltinTermElab_Lean_Elab_Term_elabArrayRef___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabArrayRef), 4, 0);
return x_1;
}
}
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabArrayRef(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Parser_Term_arrayRef___elambda__1___closed__2;
x_3 = l___regBuiltinTermElab_Lean_Elab_Term_elabArrayRef___closed__2;
x_4 = l___regBuiltinTermElab_Lean_Elab_Term_elabArrayRef___closed__3;
x_5 = l_Lean_Elab_Term_addBuiltinTermElab(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_elabRawIdent(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Term_elabAtom(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* _init_l___regBuiltinTermElab_Lean_Elab_Term_elabRawIdent___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elabRawIdent");
return x_1;
}
}
lean_object* _init_l___regBuiltinTermElab_Lean_Elab_Term_elabRawIdent___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_declareBuiltinTermElab___closed__3;
x_2 = l___regBuiltinTermElab_Lean_Elab_Term_elabRawIdent___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltinTermElab_Lean_Elab_Term_elabRawIdent___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabRawIdent), 4, 0);
return x_1;
}
}
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabRawIdent(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_identKind___closed__2;
x_3 = l___regBuiltinTermElab_Lean_Elab_Term_elabRawIdent___closed__2;
x_4 = l___regBuiltinTermElab_Lean_Elab_Term_elabRawIdent___closed__3;
x_5 = l_Lean_Elab_Term_addBuiltinTermElab(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_elabSortApp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = l_Lean_Syntax_getArg(x_1, x_5);
x_7 = l_Lean_Elab_Term_elabLevel(x_6, x_3, x_4);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = l_Lean_Syntax_getKind(x_11);
x_13 = l_Lean_Parser_Term_sort___elambda__1___closed__2;
x_14 = lean_name_eq(x_12, x_13);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Lean_mkLevelSucc(x_9);
x_16 = l_Lean_mkSort(x_15);
lean_ctor_set(x_7, 0, x_16);
return x_7;
}
else
{
lean_object* x_17; 
x_17 = l_Lean_mkSort(x_9);
lean_ctor_set(x_7, 0, x_17);
return x_7;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_18 = lean_ctor_get(x_7, 0);
x_19 = lean_ctor_get(x_7, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_7);
x_20 = lean_unsigned_to_nat(0u);
x_21 = l_Lean_Syntax_getArg(x_1, x_20);
x_22 = l_Lean_Syntax_getKind(x_21);
x_23 = l_Lean_Parser_Term_sort___elambda__1___closed__2;
x_24 = lean_name_eq(x_22, x_23);
lean_dec(x_22);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = l_Lean_mkLevelSucc(x_18);
x_26 = l_Lean_mkSort(x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_19);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; 
x_28 = l_Lean_mkSort(x_18);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_19);
return x_29;
}
}
}
else
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_7);
if (x_30 == 0)
{
return x_7;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_7, 0);
x_32 = lean_ctor_get(x_7, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_7);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabSortApp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Term_elabSortApp(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* _init_l___regBuiltinTermElab_Lean_Elab_Term_elabSortApp___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elabSortApp");
return x_1;
}
}
lean_object* _init_l___regBuiltinTermElab_Lean_Elab_Term_elabSortApp___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_declareBuiltinTermElab___closed__3;
x_2 = l___regBuiltinTermElab_Lean_Elab_Term_elabSortApp___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltinTermElab_Lean_Elab_Term_elabSortApp___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabSortApp___boxed), 4, 0);
return x_1;
}
}
lean_object* l___regBuiltinTermElab_Lean_Elab_Term_elabSortApp(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Parser_Term_sortApp___elambda__1___closed__2;
x_3 = l___regBuiltinTermElab_Lean_Elab_Term_elabSortApp___closed__2;
x_4 = l___regBuiltinTermElab_Lean_Elab_Term_elabSortApp___closed__3;
x_5 = l_Lean_Elab_Term_addBuiltinTermElab(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* _init_l___private_Init_Lean_Elab_TermApp_28__regTraceClasses___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Init_Lean_Elab_Util_8__regTraceClasses___closed__1;
x_2 = l_Lean_mkAppStx___closed__7;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Init_Lean_Elab_TermApp_28__regTraceClasses(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l___private_Init_Lean_Elab_TermApp_28__regTraceClasses___closed__1;
x_3 = l_Lean_registerTraceClass(x_2, x_1);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_dec(x_5);
x_6 = lean_box(0);
lean_ctor_set(x_3, 0, x_6);
return x_3;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_3);
if (x_10 == 0)
{
return x_3;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* initialize_Init_Lean_Elab_Term(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Init_Lean_Elab_TermApp(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_mk_io_result(lean_box(0));
_G_initialized = true;
res = initialize_Init_Lean_Elab_Term(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_Arg_inhabited___closed__1 = _init_l_Lean_Elab_Term_Arg_inhabited___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_Arg_inhabited___closed__1);
l_Lean_Elab_Term_Arg_inhabited = _init_l_Lean_Elab_Term_Arg_inhabited();
lean_mark_persistent(l_Lean_Elab_Term_Arg_inhabited);
l_Lean_Elab_Term_NamedArg_inhabited___closed__1 = _init_l_Lean_Elab_Term_NamedArg_inhabited___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_NamedArg_inhabited___closed__1);
l_Lean_Elab_Term_NamedArg_inhabited = _init_l_Lean_Elab_Term_NamedArg_inhabited();
lean_mark_persistent(l_Lean_Elab_Term_NamedArg_inhabited);
l_Lean_Elab_Term_addNamedArg___closed__1 = _init_l_Lean_Elab_Term_addNamedArg___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_addNamedArg___closed__1);
l_Lean_Elab_Term_addNamedArg___closed__2 = _init_l_Lean_Elab_Term_addNamedArg___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_addNamedArg___closed__2);
l_Lean_Elab_Term_addNamedArg___closed__3 = _init_l_Lean_Elab_Term_addNamedArg___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_addNamedArg___closed__3);
l_Lean_Elab_Term_addNamedArg___closed__4 = _init_l_Lean_Elab_Term_addNamedArg___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_addNamedArg___closed__4);
l_Lean_Elab_Term_addNamedArg___closed__5 = _init_l_Lean_Elab_Term_addNamedArg___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_addNamedArg___closed__5);
l_Lean_Elab_Term_addNamedArg___closed__6 = _init_l_Lean_Elab_Term_addNamedArg___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_addNamedArg___closed__6);
l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__1 = _init_l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__1();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__1);
l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__2 = _init_l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__2();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__2);
l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__3 = _init_l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__3();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__3);
l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__4 = _init_l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__4();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__4);
l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__5 = _init_l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__5();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__5);
l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__6 = _init_l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__6();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__6);
l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__7 = _init_l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__7();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_5__tryCoeFun___closed__7);
l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__1 = _init_l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__1();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__1);
l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__2 = _init_l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__2();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__2);
l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__3 = _init_l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__3();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__3);
l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__4 = _init_l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__4();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__4);
l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__5 = _init_l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__5();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__5);
l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__6 = _init_l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__6();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_11__elabAppArgsAux___main___closed__6);
l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__1 = _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__1();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__1);
l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__2 = _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__2();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__2);
l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__3 = _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__3();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__3);
l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__4 = _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__4();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__4);
l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__5 = _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__5();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__5);
l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__6 = _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__6();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__6);
l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__7 = _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__7();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__7);
l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__8 = _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__8();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__8);
l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__9 = _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__9();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__9);
l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__10 = _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__10();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__10);
l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__11 = _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__11();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__11);
l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__12 = _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__12();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__12);
l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__13 = _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__13();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__13);
l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__14 = _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__14();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__14);
l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__15 = _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__15();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__15);
l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__16 = _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__16();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__16);
l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__17 = _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__17();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__17);
l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__18 = _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__18();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__18);
l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__19 = _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__19();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__19);
l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__20 = _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__20();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__20);
l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__21 = _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__21();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__21);
l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__22 = _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__22();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__22);
l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__23 = _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__23();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__23);
l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__24 = _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__24();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__24);
l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__25 = _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__25();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__25);
l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__26 = _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__26();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__26);
l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__27 = _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__27();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__27);
l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__28 = _init_l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__28();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_14__resolveLValAux___closed__28);
l_List_foldlM___main___at___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___spec__1___closed__1 = _init_l_List_foldlM___main___at___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___spec__1___closed__1();
lean_mark_persistent(l_List_foldlM___main___at___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___spec__1___closed__1);
l_List_foldlM___main___at___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___spec__1___closed__2 = _init_l_List_foldlM___main___at___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___spec__1___closed__2();
lean_mark_persistent(l_List_foldlM___main___at___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___spec__1___closed__2);
l___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___closed__1 = _init_l___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___closed__1();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___closed__1);
l___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___closed__2 = _init_l___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___closed__2();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___closed__2);
l___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___closed__3 = _init_l___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___closed__3();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_17__mkBaseProjections___closed__3);
l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__1 = _init_l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__1();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__1);
l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__2 = _init_l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__2();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__2);
l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__3 = _init_l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__3();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__3);
l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__4 = _init_l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__4();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__4);
l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__5 = _init_l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__5();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__5);
l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__6 = _init_l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__6();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__6);
l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__7 = _init_l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__7();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__7);
l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__8 = _init_l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__8();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__8);
l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__9 = _init_l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__9();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__9);
l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__10 = _init_l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__10();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__10);
l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__11 = _init_l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__11();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__11);
l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__12 = _init_l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__12();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_18__addLValArg___main___closed__12);
l___private_Init_Lean_Elab_TermApp_19__elabAppLValsAux___main___closed__1 = _init_l___private_Init_Lean_Elab_TermApp_19__elabAppLValsAux___main___closed__1();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_19__elabAppLValsAux___main___closed__1);
l___private_Init_Lean_Elab_TermApp_19__elabAppLValsAux___main___closed__2 = _init_l___private_Init_Lean_Elab_TermApp_19__elabAppLValsAux___main___closed__2();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_19__elabAppLValsAux___main___closed__2);
l___private_Init_Lean_Elab_TermApp_20__elabAppLVals___closed__1 = _init_l___private_Init_Lean_Elab_TermApp_20__elabAppLVals___closed__1();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_20__elabAppLVals___closed__1);
l___private_Init_Lean_Elab_TermApp_20__elabAppLVals___closed__2 = _init_l___private_Init_Lean_Elab_TermApp_20__elabAppLVals___closed__2();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_20__elabAppLVals___closed__2);
l___private_Init_Lean_Elab_TermApp_20__elabAppLVals___closed__3 = _init_l___private_Init_Lean_Elab_TermApp_20__elabAppLVals___closed__3();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_20__elabAppLVals___closed__3);
l___private_Init_Lean_Elab_TermApp_24__toMessageData___closed__1 = _init_l___private_Init_Lean_Elab_TermApp_24__toMessageData___closed__1();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_24__toMessageData___closed__1);
l___private_Init_Lean_Elab_TermApp_24__toMessageData___closed__2 = _init_l___private_Init_Lean_Elab_TermApp_24__toMessageData___closed__2();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_24__toMessageData___closed__2);
l_Array_umapMAux___main___at___private_Init_Lean_Elab_TermApp_25__mergeFailures___spec__1___closed__1 = _init_l_Array_umapMAux___main___at___private_Init_Lean_Elab_TermApp_25__mergeFailures___spec__1___closed__1();
lean_mark_persistent(l_Array_umapMAux___main___at___private_Init_Lean_Elab_TermApp_25__mergeFailures___spec__1___closed__1);
l___private_Init_Lean_Elab_TermApp_25__mergeFailures___rarg___closed__1 = _init_l___private_Init_Lean_Elab_TermApp_25__mergeFailures___rarg___closed__1();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_25__mergeFailures___rarg___closed__1);
l___private_Init_Lean_Elab_TermApp_25__mergeFailures___rarg___closed__2 = _init_l___private_Init_Lean_Elab_TermApp_25__mergeFailures___rarg___closed__2();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_25__mergeFailures___rarg___closed__2);
l___private_Init_Lean_Elab_TermApp_25__mergeFailures___rarg___closed__3 = _init_l___private_Init_Lean_Elab_TermApp_25__mergeFailures___rarg___closed__3();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_25__mergeFailures___rarg___closed__3);
l___private_Init_Lean_Elab_TermApp_26__elabAppAux___closed__1 = _init_l___private_Init_Lean_Elab_TermApp_26__elabAppAux___closed__1();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_26__elabAppAux___closed__1);
l___private_Init_Lean_Elab_TermApp_26__elabAppAux___closed__2 = _init_l___private_Init_Lean_Elab_TermApp_26__elabAppAux___closed__2();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_26__elabAppAux___closed__2);
l___private_Init_Lean_Elab_TermApp_26__elabAppAux___closed__3 = _init_l___private_Init_Lean_Elab_TermApp_26__elabAppAux___closed__3();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_26__elabAppAux___closed__3);
l___regBuiltinTermElab_Lean_Elab_Term_elabApp___closed__1 = _init_l___regBuiltinTermElab_Lean_Elab_Term_elabApp___closed__1();
lean_mark_persistent(l___regBuiltinTermElab_Lean_Elab_Term_elabApp___closed__1);
l___regBuiltinTermElab_Lean_Elab_Term_elabApp___closed__2 = _init_l___regBuiltinTermElab_Lean_Elab_Term_elabApp___closed__2();
lean_mark_persistent(l___regBuiltinTermElab_Lean_Elab_Term_elabApp___closed__2);
l___regBuiltinTermElab_Lean_Elab_Term_elabApp___closed__3 = _init_l___regBuiltinTermElab_Lean_Elab_Term_elabApp___closed__3();
lean_mark_persistent(l___regBuiltinTermElab_Lean_Elab_Term_elabApp___closed__3);
res = l___regBuiltinTermElab_Lean_Elab_Term_elabApp(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltinTermElab_Lean_Elab_Term_elabId___closed__1 = _init_l___regBuiltinTermElab_Lean_Elab_Term_elabId___closed__1();
lean_mark_persistent(l___regBuiltinTermElab_Lean_Elab_Term_elabId___closed__1);
l___regBuiltinTermElab_Lean_Elab_Term_elabId___closed__2 = _init_l___regBuiltinTermElab_Lean_Elab_Term_elabId___closed__2();
lean_mark_persistent(l___regBuiltinTermElab_Lean_Elab_Term_elabId___closed__2);
l___regBuiltinTermElab_Lean_Elab_Term_elabId___closed__3 = _init_l___regBuiltinTermElab_Lean_Elab_Term_elabId___closed__3();
lean_mark_persistent(l___regBuiltinTermElab_Lean_Elab_Term_elabId___closed__3);
res = l___regBuiltinTermElab_Lean_Elab_Term_elabId(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltinTermElab_Lean_Elab_Term_elabExplicit___closed__1 = _init_l___regBuiltinTermElab_Lean_Elab_Term_elabExplicit___closed__1();
lean_mark_persistent(l___regBuiltinTermElab_Lean_Elab_Term_elabExplicit___closed__1);
l___regBuiltinTermElab_Lean_Elab_Term_elabExplicit___closed__2 = _init_l___regBuiltinTermElab_Lean_Elab_Term_elabExplicit___closed__2();
lean_mark_persistent(l___regBuiltinTermElab_Lean_Elab_Term_elabExplicit___closed__2);
l___regBuiltinTermElab_Lean_Elab_Term_elabExplicit___closed__3 = _init_l___regBuiltinTermElab_Lean_Elab_Term_elabExplicit___closed__3();
lean_mark_persistent(l___regBuiltinTermElab_Lean_Elab_Term_elabExplicit___closed__3);
res = l___regBuiltinTermElab_Lean_Elab_Term_elabExplicit(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltinTermElab_Lean_Elab_Term_elabChoice___closed__1 = _init_l___regBuiltinTermElab_Lean_Elab_Term_elabChoice___closed__1();
lean_mark_persistent(l___regBuiltinTermElab_Lean_Elab_Term_elabChoice___closed__1);
l___regBuiltinTermElab_Lean_Elab_Term_elabChoice___closed__2 = _init_l___regBuiltinTermElab_Lean_Elab_Term_elabChoice___closed__2();
lean_mark_persistent(l___regBuiltinTermElab_Lean_Elab_Term_elabChoice___closed__2);
l___regBuiltinTermElab_Lean_Elab_Term_elabChoice___closed__3 = _init_l___regBuiltinTermElab_Lean_Elab_Term_elabChoice___closed__3();
lean_mark_persistent(l___regBuiltinTermElab_Lean_Elab_Term_elabChoice___closed__3);
res = l___regBuiltinTermElab_Lean_Elab_Term_elabChoice(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltinTermElab_Lean_Elab_Term_elabProj___closed__1 = _init_l___regBuiltinTermElab_Lean_Elab_Term_elabProj___closed__1();
lean_mark_persistent(l___regBuiltinTermElab_Lean_Elab_Term_elabProj___closed__1);
l___regBuiltinTermElab_Lean_Elab_Term_elabProj___closed__2 = _init_l___regBuiltinTermElab_Lean_Elab_Term_elabProj___closed__2();
lean_mark_persistent(l___regBuiltinTermElab_Lean_Elab_Term_elabProj___closed__2);
l___regBuiltinTermElab_Lean_Elab_Term_elabProj___closed__3 = _init_l___regBuiltinTermElab_Lean_Elab_Term_elabProj___closed__3();
lean_mark_persistent(l___regBuiltinTermElab_Lean_Elab_Term_elabProj___closed__3);
res = l___regBuiltinTermElab_Lean_Elab_Term_elabProj(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltinTermElab_Lean_Elab_Term_elabArrayRef___closed__1 = _init_l___regBuiltinTermElab_Lean_Elab_Term_elabArrayRef___closed__1();
lean_mark_persistent(l___regBuiltinTermElab_Lean_Elab_Term_elabArrayRef___closed__1);
l___regBuiltinTermElab_Lean_Elab_Term_elabArrayRef___closed__2 = _init_l___regBuiltinTermElab_Lean_Elab_Term_elabArrayRef___closed__2();
lean_mark_persistent(l___regBuiltinTermElab_Lean_Elab_Term_elabArrayRef___closed__2);
l___regBuiltinTermElab_Lean_Elab_Term_elabArrayRef___closed__3 = _init_l___regBuiltinTermElab_Lean_Elab_Term_elabArrayRef___closed__3();
lean_mark_persistent(l___regBuiltinTermElab_Lean_Elab_Term_elabArrayRef___closed__3);
res = l___regBuiltinTermElab_Lean_Elab_Term_elabArrayRef(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltinTermElab_Lean_Elab_Term_elabRawIdent___closed__1 = _init_l___regBuiltinTermElab_Lean_Elab_Term_elabRawIdent___closed__1();
lean_mark_persistent(l___regBuiltinTermElab_Lean_Elab_Term_elabRawIdent___closed__1);
l___regBuiltinTermElab_Lean_Elab_Term_elabRawIdent___closed__2 = _init_l___regBuiltinTermElab_Lean_Elab_Term_elabRawIdent___closed__2();
lean_mark_persistent(l___regBuiltinTermElab_Lean_Elab_Term_elabRawIdent___closed__2);
l___regBuiltinTermElab_Lean_Elab_Term_elabRawIdent___closed__3 = _init_l___regBuiltinTermElab_Lean_Elab_Term_elabRawIdent___closed__3();
lean_mark_persistent(l___regBuiltinTermElab_Lean_Elab_Term_elabRawIdent___closed__3);
res = l___regBuiltinTermElab_Lean_Elab_Term_elabRawIdent(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltinTermElab_Lean_Elab_Term_elabSortApp___closed__1 = _init_l___regBuiltinTermElab_Lean_Elab_Term_elabSortApp___closed__1();
lean_mark_persistent(l___regBuiltinTermElab_Lean_Elab_Term_elabSortApp___closed__1);
l___regBuiltinTermElab_Lean_Elab_Term_elabSortApp___closed__2 = _init_l___regBuiltinTermElab_Lean_Elab_Term_elabSortApp___closed__2();
lean_mark_persistent(l___regBuiltinTermElab_Lean_Elab_Term_elabSortApp___closed__2);
l___regBuiltinTermElab_Lean_Elab_Term_elabSortApp___closed__3 = _init_l___regBuiltinTermElab_Lean_Elab_Term_elabSortApp___closed__3();
lean_mark_persistent(l___regBuiltinTermElab_Lean_Elab_Term_elabSortApp___closed__3);
res = l___regBuiltinTermElab_Lean_Elab_Term_elabSortApp(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Init_Lean_Elab_TermApp_28__regTraceClasses___closed__1 = _init_l___private_Init_Lean_Elab_TermApp_28__regTraceClasses___closed__1();
lean_mark_persistent(l___private_Init_Lean_Elab_TermApp_28__regTraceClasses___closed__1);
res = l___private_Init_Lean_Elab_TermApp_28__regTraceClasses(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_mk_io_result(lean_box(0));
}
#ifdef __cplusplus
}
#endif
