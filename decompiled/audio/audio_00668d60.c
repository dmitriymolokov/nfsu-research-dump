/* spd-match: far pct=2.17 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int __cdecl FUN_00668d10();
extern int DAT_007177d0;

void FUN_00668d60(DWORD *param_1)

{
  int iVar1;
  LONG LVar2;
  DWORD DVar3;
  DWORD *local_4;
  
  if (param_1 == (DWORD *)0x0) {
    local_4 = &DAT_007177d0;
  }
  else {
    local_4 = param_1;
  }
  iVar1 = FUN_00668d10(param_1);
  if (iVar1 == 0) {
    while( true ) {
      EnterCriticalSection((LPCRITICAL_SECTION)(local_4 + 3));
      LVar2 = InterlockedExchange((LONG *)(local_4 + 2),1);
      if (LVar2 == 0) break;
      LeaveCriticalSection((LPCRITICAL_SECTION)(local_4 + 3));
      iVar1 = FUN_00668d10(param_1);
      if (iVar1 != 0) {
        return;
      }
    }
    DVar3 = GetCurrentThreadId();
    *local_4 = DVar3;
    local_4[1] = local_4[1] + 1;
  }
  return;
}
