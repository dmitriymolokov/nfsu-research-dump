/* spd-match: far pct=70.21 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.4-float/va_00432C90 */
/* Decompiled from Speed.exe @ 00432c90 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
typedef struct { int dummy; int val; } Data; extern int DAT_0073ad34; extern float _DAT_006cca38; extern float _DAT_006cc8a8; float __fastcall FUN_00432c90(Data *p) { if (p->val != 0 && p->val != 0x7fffffff) { return (float)(DAT_0073ad34 - p->val) * _DAT_006cca38; } return _DAT_006cc8a8; }

