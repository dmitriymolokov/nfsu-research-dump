/* spd-match: far pct=1.68 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00660080();

int FUN_00660160(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  iVar2 = param_2;
  if ((puVar1 == (undefined4 *)0x0) ||
     (iVar3 = (*(code *)*puVar1)(puVar1,param_2,param_4,param_3,*(undefined1 *)(param_1 + 0x1a)),
     0 < iVar3)) {
    for (; iVar3 = param_2, 0 < iVar2; iVar2 = iVar2 - iVar3) {
      if (*(int *)(param_1 + 0x28) <= *(int *)(param_1 + 0x24)) {
        *(undefined4 *)(param_1 + 0x24) = 0;
      }
      iVar3 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24);
      if (iVar2 < iVar3) {
        iVar3 = iVar2;
      }
      FUN_00660080(param_1,iVar3,param_3,param_4);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + iVar3;
      param_4 = param_4 + iVar3 * 4;
      param_3 = param_3 + iVar3 * 4;
    }
  }
  return iVar3;
}
