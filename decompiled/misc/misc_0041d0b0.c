/* spd-match: close pct=93.55 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.6-c3-ctx/va_0041D0B0 */
#include "ghidra_compat.h"
int __cdecl FUN_0041c420(int);
int __cdecl FUN_0041dd60(void*, int);
extern int DAT_0078a478;
unsigned char __fastcall FUN_0041d0b0(int val) { int iVar1; unsigned char b; iVar1 = FUN_0041dd60(&DAT_0078a478, val); b = (iVar1 != 0); FUN_0041c420(0); return b; }
