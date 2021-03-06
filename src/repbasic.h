/* repbasic.c */
Bool UnsignedIntIsString(char *s);
int IntMin(int x, int y);
int IntMax(int x, int y);
int IntAbs(int x);
Bool IntIsChar(int c);
Bool IntIsString(char *s);
Bool IntIsSpecification(int specific, int general);
int IntParse(char *s, int len);
long LongAbs(long x);
Float FloatMin(Float x, Float y);
Float FloatMax(Float x, Float y);
Float FloatAbs(Float x);
Float FloatSign(Float x);
Float FloatRound(Float x, Float nearest);
Float FloatInt(Float x);
Float FloatAvgMinMax(Float x, Float y, Float xmin, Float ymin);
void FloatAvgInit(Float *numer, Float *denom);
void FloatAvgAdd(Float x, Float *numer, Float *denom);
Float FloatAvgResult(Float numer, Float denom, Float def);
Bool FloatIsChar(int c);
Bool FloatIsString(char *s);
Float FloatParse(char *s, int len);
void FloatRangeParse(char *s, Float *from, Float *to);
void RandomSeed(long seed);
Float RandomFloat0_1(void);
void RandomInit(void);
Float RandomFloatFromTo(Float from, Float to);
int Roll(int n);
int RandomIntFromTo(int from, int to);
Bool WithProbability(Float x);
Bool CharIsOpening(int c);
Bool CharClosing(int c);
Bool CharIsGreekLower(int c);
Bool CharIsGreekUpper(int c);
Bool CharIsUpper(int c);
Bool CharIsLower(int c);
Bool CharIsAlpha(int c);
Bool CharIsAlphanumeric(int c);
int CharToUpper(int c);
int CharToLowerNoAccents(int c);
int CharToLower(int c);
int CharDevoice(int c);
int CharReduceVowel(int c);
void CharPutN(FILE *stream, int c, int n);
int HashTableHash(HashTable *ht, char *symbol);
HashTable *HashTableCreate(size_t size);
void *HashTableGet(HashTable *ht, char *symbol);
char *HashTableIntern(HashTable *ht, char *symbol);
void HashTableSet(HashTable *ht, char *symbol, void *value);
void HashTableSetDup(HashTable *ht, char *symbol, void *value);
void HashTableForeach(HashTable *ht, void (fn)());
void HashTablePrint(FILE *stream, HashTable *ht);
void pht(HashTable *ht);
void FileTemp(char *stem, int fn_len, char *fn);
void FileNameGen(char *stem, char *suffix, int fn_len, /* OUTPUT */ char *fn);
FILE *StreamOpen(char *filename, char *mode);
FILE *StreamOpenEnv(char *filename, char *mode);
void StreamClose(FILE *stream);
int StreamReadc(FILE *stream);
int StreamPeekc(FILE *stream);
int StreamAsk(FILE *in, FILE *out, char *question, int maxlen, char *answer);
int StreamAskStd(char *question, int maxlen, char *answer);
void StreamPrintf(FILE *stream, char *fmt, ...);
void StreamPutc(int c, FILE *stream);
void StreamPutcExpandCntrlChar(int c, FILE *stream);
void StreamPutsExpandCntrlChar(char *s, FILE *stream);
void StreamPutcNoNewline(int c, FILE *stream);
void StreamPuts(char *s, FILE *stream);
void StreamPutsNoNewline(char *s, FILE *stream);
void StreamPutsNoNewlineMax(char *s, FILE *stream, int len);
void StreamPutsExpandCR(char *s, FILE *stream);
int StreamWriteWord(FILE *stream, char *word, int pos, int linelen);
int StreamReadTo(FILE *stream, int including, char *buf, int maxlen, int sep1, int sep2, int sep3);
int StreamSkipTo(FILE *stream, int sep1, int sep2, int sep3);
void StreamPrintSpaces(FILE *stream, int spaces);
void StreamSep(FILE *stream);
void StreamGen(FILE *stream, char *preface, Obj *obj, int eos, Discourse *dc);
void StreamGenParagraph(FILE *stream, char *preface, ObjList *in_objs, int sort_by_ts, int gen_pairs, Discourse *dc);
void StreamGrep(char *fn, char *ptn);
void StreamHTMLMassage(char *infn, char *outfn);
void StreamHTMLMassageDirectory(char *indir, char *outdir);
void StreamSortIn(int treesort);
Bool StreamFileModtime(char *fn, Ts *ts);
void IndentInit(void);
void IndentUp(void);
void IndentDown(void);
void IndentPrint(FILE *stream);
void IndentPrintText(Text *text, char *s);
Directory *DirectoryCreate(char *fn, char *basename, Ts *ts, Directory *next);
void DirectoryFree(Directory *dir);
Directory *DirectoryReadDIRDIR(char *dirfn);
Directory *DirectoryRead(char *dirfn);
Directory *DirectoryReadEnv(char *dirfn);
void Sleep(int secs);
void SleepMs(int ms);
void *nofail_malloc(size_t size);
void *nofail_realloc(void *ptr, size_t size);
void qallocInit(void);
void MemCheckReset(void);
void MemCheckPrint(void);
void *MemAlloc1(size_t size, char *typ, Bool force_malloc);
void *MemAlloc(size_t size, char *typ);
void *MemRealloc(void *buffer, size_t size, char *typ);
void MemFree(void *buffer, char *typ);
Bool IsLengthStem(char *s);
Float LengthParse(char *s, char *stem);
Bool IsVelocityStem(char *s);
Float VelocityParse(char *s, char *stem);
Bool IsFreqStem(char *s);
Float FreqParse(char *s, char *stem);
Bool IsMassStem(char *s);
Float MassParse(char *s, char *stem);
Bool IsBytesStem(char *s);
Float BytesParse(char *s, char *stem);
Bool IsCurrencyStem(char *s);
Obj *CurrencyParse(char *s, char *stem);
char *NumberStem(char *s);
Obj *NumberParse(char *s, char *stem);
Bool IsUnprocessedTail(char *s);
Bool IsStem(char *s);
Obj *RangeParse(char *tok1, char *tok2, char *stem);
Obj *TokenStringParse(char *s0);
Obj *TokenNumberParse(char *s);
Obj *TokenGetQuickobj(char *s1, char *s2, char *s3, Obj *class, int createok, Bool *wascreated);
Obj *TokenGetCountry(char *country);
Obj *TokenGetState(char *state, char *country);
Obj *TokenGetCity(char *city, char *state, char *country);
Obj *TokenGetStreet(char *street, char *city);
Obj *TokenGetHuman(char *type, char *lexentry);
Obj *TokenGetBuilding(char *lexentry, char *streetnumber, char *street, char *postalcode, char *city, char *state, char *country);
Obj *TokenGetFloor(char *lexentry, char *level, char *streetnumber, char *street, char *postalcode, char *city, char *state, char *country);
Obj *TokenGetApartment(char *lexentry, char *apt, char *level, char *streetnumber, char *street, char *postalcode, char *city, char *state, char *country);
Obj *TokenGetRoom(char *lexentry, char *room, char *apt, char *level, char *streetnumber, char *street, char *postalcode, char *city, char *state, char *country);
Obj *TokenParseQiBuilding(char *type, char *text);
Obj *TokenParseQiPlay(char *type, char *text);
Obj *TokenParseQiOpera(char *type, char *text);
Obj *TokenParseQiDance(char *type, char *text);
Obj *TokenParseQiMusic(char *type, char *text);
Obj *TokenParseQuickInstance(char *text);
Obj *TokenToObj(char *s);
