/* spd-match: far pct=14.58 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_00533140 */
#include "ghidra_compat.h"
int __cdecl FUN_00532d40(int, int);
int __cdecl FUN_00533100(void);
extern int DAT_0072f568;
extern unsigned char *DAT_00735604;
extern int unaff_EDI;
void FUN_00533140(void) { int arg1, arg2; FUN_00533100(); if (unaff_EDI == 0x3ec) { arg1 = 0; arg2 = 0; ((int*)(&DAT_0072f568))[(int)DAT_00735604] = FUN_00532d40(arg1, arg2); DAT_00735604++; } }
