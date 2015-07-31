/* semgen1.c */
ObjList *GenParagraph(ObjList *in_objs, int sort_by_ts, int gen_pairs, Discourse *dc);
PNode *Gen(int constit, Obj *obj, Obj *comptense, Discourse *dc);
PNode *Generate(int constit, Obj *obj, Obj *comptense, Discourse *dc);
PNode *GenReference(int constit, Obj *obj, Obj *comptense, Discourse *dc);
PNode *GenCoordAppendNext(int constit, Obj *coord, PNode *pn, PNode *pn1, int i, int len, Discourse *dc);
PNode *GenCoord(int constit, Obj *coord, Obj *obj, Obj *comptense, Discourse *dc);
Bool GenIsDirectSpeech(Obj *obj, Discourse *dc);
PNode *GenWithAdverb(int constit, Obj *obj, Discourse *dc);
PNode *Generate1(int constit, Obj *obj, Obj *comptense, Discourse *dc);
PNode *GenerateNoTS(int constit, Obj *obj, Obj *comptense, Discourse *dc);
void GenGridTraversalIndices(Obj *obj, int *gridi, int *fromrowi, int *fromcoli, int *torowi, int *tocoli);
Obj *GenGridTraversal(Obj *obj);
Obj *GenAtGrid(Obj *obj);
Obj *GenToNonCanonical(Obj *obj);
Obj *GenCreateTemporalRelation(Obj *obj1, Obj *obj2, Discourse *dc);
PNode *GenQuantifiedNoun(Obj *count, Obj *noun, Discourse *dc);
PNode *GenDeterminedNoun(Obj *determiner, Obj *noun, Discourse *dc);
PNode *GenModifiedNoun(Obj *value_prop, Discourse *dc);
PNode *GenGenitiveMod(Obj *mod_obj, ObjList *props, Discourse *dc);
PNode *GenIntension1(int constit, Obj *noun, ObjList *props, Discourse *dc);
PNode *GenIntension(int constit, Obj *obj, Discourse *dc);
PNode *GenQuestionElement(int constit, Obj *obj, Discourse *dc);
PNode *GenConj(int constit, Obj *rel, Obj *obj1, Obj *obj2, Discourse *dc);
Obj *GenSubtense(int subcat, Obj *comptense, Discourse *dc);
void GenTrouble(char *s, Obj *con, Obj *subcon, LexEntry *le);
PNode *GenConj1(int subcat, int constit, Obj *rel, Obj *obj1, Obj *obj2, Discourse *dc);
PNode *GenInterventionObj(int constit, Obj *obj, Discourse *dc);
PNode *GenInterjectionOfGreeting(Discourse *dc);
PNode *GenInterjectionOfDeparture(Discourse *dc);
PNode *GenIntervention1(Obj *head, Discourse *dc);
PNode *GenIntervention(int constit, Obj *obj, Discourse *dc);
PNode *Generate2(Obj *obj, Obj *comptense, Discourse *dc);
PNode *Generate3(Obj *obj, int recursed, Obj *comptense, Discourse *dc);
Bool GenIsCopula(ObjToLexEntry *ole);
void GenSortArgs(PNode **args, int args_len);
PNode *GenExpl(PNode *pn, ObjToLexEntry *ole, int position, PNode *subjnp, Discourse *dc);
Bool GenArguments1(int start_i, Obj *cas, Obj *gen_cas, PNode *subjnp, Obj *obj, ObjToLexEntry *ole, Obj *comptense, Discourse *dc, PNode **args, int *args_len);
PNode *GenArguments(int constit, PNode *xp, Obj *obj_cas, int obj_start_i, PNode *subjnp, Obj *obj, ObjToLexEntry *ole, Obj *comptense, Discourse *dc, PNode **args, int *args_len);
PNode *GenS_VerbPred(Obj *obj, ObjToLexEntry *ole, Obj *comptense, Discourse *dc);
PNode *GenS_AscriptiveAdj(Obj *obj, ObjToLexEntry *ole, Obj *comptense, Discourse *dc);
PNode *GenRelationObjNP(Obj *rel, LexEntry *le, char *features, Obj *rel_article, PNode *subjnp, Discourse *dc);
PNode *GenObjNPSimple(Obj *obj, Discourse *dc);
PNode *GenS_EquativeRole(Obj *obj, ObjToLexEntry *ole, Obj *comptense, Discourse *dc);
PNode *GenMakeModifiedNoun(int pos, PNode *adjdetp, PNode *np, char *punc1, char *punc2, Discourse *dc);
PNode *GenMakeADJP(LexEntry *adj_le, LexEntry *adv_le, Word *adj_infl, Word *adv_infl, Obj *adj_obj, Obj *adv_obj);
Obj *WeightToAdjAdverb(Float weight);
PNode *GenADJPSimple(Obj *obj, Float weight, ObjToLexEntry *ole, PNode *modifies, Discourse *dc);
PNode *GenADJP(LexEntry *adj_le, LexEntry *adv_le, int superlative, int agree_gender, int agree_number, Discourse *dc);