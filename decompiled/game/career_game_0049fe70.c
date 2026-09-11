/* spd-match: far pct=16.67 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.6-c3/va_0049FE70 */
#include "ghidra_compat.h"
int __cdecl FUN_004a9900(int);
int __cdecl FUN_004ef050(int);
int __cdecl FUN_004f65d0();
int __cdecl FUN_004ffb70();
extern int DAT_0073578c;
int __fastcall FUN_0049fe70(int obj, int param_1) { int iVar1; if (((*(int *)(obj + 8) == 0) || (iVar1 = FUN_004f65d0(), iVar1 == 0)) || (iVar1 = FUN_004ffb70(), iVar1 == 0)) { if (DAT_0073578c == 0) return 0; iVar1 = FUN_004ef050(param_1); if (iVar1 == 0) return 0; } return FUN_004a9900(iVar1); }
