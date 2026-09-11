/* spd-match: far pct=11.11 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00432810 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004327d0();
undefined4 __fastcall FUN_00432810(int val, int param_1)

{

  undefined4 uVar1;
  
  if (-1 < *(int *)(param_1 + 0x120 + val * 4)) {
    uVar1 = FUN_004327d0();
    return uVar1;
  }
  return 0;
}
