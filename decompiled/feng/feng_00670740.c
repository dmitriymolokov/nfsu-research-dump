/* spd-match: far pct=11.49 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int __cdecl FUN_006702d0();

undefined4 FUN_00670740(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0xbc) == 1)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1910));
    uVar1 = FUN_006702d0(param_1,param_2);
    if (*(int *)(param_1 + 0xbc) == 5) {
      *(undefined4 *)(param_1 + 0xbc) = 2;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1910));
    return uVar1;
  }
  return 0xfffffffe;
}
