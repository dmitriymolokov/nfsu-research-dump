/* spd-match: far pct=66.09 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int __cdecl FUN_0067733f();
extern int DAT_00793240;

undefined4 FUN_006806ac(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (param_1 & 0x1f) * 0x24;
  iVar2 = (&DAT_00793240)[(int)param_1 >> 5] + iVar3;
  if (*(int *)(iVar2 + 8) == 0) {
    __lock(10);
    if (*(int *)(iVar2 + 8) == 0) {
      iVar1 = ___crtInitCritSecAndSpinCount(iVar2 + 0xc,4000);
      if (iVar1 == 0) {
        FUN_0067733f(10);
        return 0;
      }
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
    }
    FUN_0067733f(10);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_00793240)[(int)param_1 >> 5] + 0xc + iVar3));
  return 1;
}
