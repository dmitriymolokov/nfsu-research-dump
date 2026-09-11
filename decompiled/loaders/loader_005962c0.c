/* spd-match: far pct=53.57 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005962C0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00596570();
undefined4 __fastcall FUN_005962c0(undefined4 * obj)

{

  undefined4 uVar1;
  
  uVar1 = FUN_00596570();
  if (obj != (undefined4 *)0x0) {
    (**(code **)*obj)(1);
  }
  return uVar1;
}
