/* spd-match: far pct=7.50 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0049FE10 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004a9900();
int __cdecl FUN_004ef050();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004ffb70();
extern int DAT_0073578c;
int __fastcall FUN_0049fe10(undefined4 val, int param_1)

{

  int iVar1;
  
  if (((*(int *)(param_1 + 8) == 0) || (iVar1 = FUN_004f65d0(), iVar1 == 0)) ||
     (iVar1 = FUN_004ffb70(), iVar1 == 0)) {
    if (DAT_0073578c == 0) {
      return 0;
    }
    iVar1 = FUN_004ef050(val);
  }
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x18) == 1)) {
    FUN_004a9900(iVar1);
    return iVar1;
  }
  return 0;
}
