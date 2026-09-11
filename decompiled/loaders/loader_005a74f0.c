/* spd-match: far pct=15.00 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.3/va_005A74F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
/* M4.1.3: drop phantom param_1,param_2 (phantom_param; sync only on uplift). */
#include "ghidra_compat.h"

int __cdecl FUN_00578730();
int __cdecl FUN_005791c0();
int __cdecl FUN_005a7390();
void __fastcall FUN_005a74f0(int obj, undefined4 param_3)

{
  int iVar1;

  if (*(int *)(*(int *)(*(int *)(obj + 0x1d4) + 0x1c) + 0xe4) != 0) {
    FUN_005791c0();
  }
  iVar1 = *(int *)(*(int *)(obj + 0x1d4) + 0x1c);
  if (*(int *)(iVar1 + 0xe4) != 0) {
    FUN_005791c0();
  }
  FUN_00578730();
  FUN_005a7390(iVar1 + 0x40,param_3);
  return;
}
