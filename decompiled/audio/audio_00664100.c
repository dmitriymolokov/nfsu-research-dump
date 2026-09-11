/* spd-match: far pct=6.67 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int * FUN_00664100(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = param_1 + 9;
  do {
    iVar3 = param_1[10];
    iVar2 = (**(code **)(*param_1 + 0x28))(*param_1);
    *piVar1 = iVar2;
  } while (param_1[10] != iVar3);
  iVar3 = (**(code **)(*param_1 + 0x24))(*param_1);
  *(bool *)(param_1 + 0x1a) = iVar3 == 2;
  if ((iVar3 != 2) && (iVar3 != 3)) {
    *(undefined1 *)((int)param_1 + 0x69) = 0;
    return piVar1;
  }
  *(undefined1 *)((int)param_1 + 0x69) = 1;
  return piVar1;
}
