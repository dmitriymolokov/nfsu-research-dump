/* spd-match: far pct=76.56 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00533100 */
/* Decompiled from Speed.exe @ 00533100 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */
#define DAT_0072F568 (*(int**)0x72f568)
#define DAT_00735604 (*(int*)0x735604)
void FUN_00533100(void) { int *p = (int*)0x72f568; do { int *obj = (int*)*p; if (obj) { int a = obj[0x84]; int *b = (int*)obj[0x85]; *b = a; *(int*)(a + 4) = (int)b; (*(void (__stdcall **)(int))*obj)(1); *p = 0; } p++; } while ((unsigned int)p < 0x72f5e4); DAT_00735604 = 0; }

