/* spd-match: far pct=11.59 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

extern int DAT_007177d0;

undefined4 FUN_00668d10(DWORD *param_1)

{
  DWORD DVar1;
  LONG LVar2;
  
  if (param_1 == (DWORD *)0x0) {
    param_1 = &DAT_007177d0;
  }
  DVar1 = GetCurrentThreadId();
  if (*param_1 != DVar1) {
    LVar2 = InterlockedExchange((LONG *)(param_1 + 2),1);
    if (LVar2 != 0) {
      return 0;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    DVar1 = GetCurrentThreadId();
    *param_1 = DVar1;
  }
  param_1[1] = param_1[1] + 1;
  return 1;
}
