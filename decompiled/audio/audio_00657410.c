/* spd-match: far pct=1.10 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

undefined4 FUN_00657410(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined1 local_4 [4];
  
  iVar2 = param_1;
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar4 = 2;
  }
  else {
    uVar6 = 0;
    puVar5 = local_4;
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x2c))
              (*(int **)(param_1 + 0x3c),0,*(int *)(param_1 + 0x30) << 1,puVar5,&param_1,0,0,0);
    *(undefined4 *)(iVar2 + 0x34) = *(undefined4 *)(iVar2 + 0x30);
    uVar4 = 1;
    (**(code **)(**(int **)(iVar2 + 0x3c) + 0x4c))(*(int **)(iVar2 + 0x3c),puVar5,uVar6,0,0);
  }
  if (*(int *)(iVar2 + 0x24) != 0) {
    uVar4 = uVar4 | 1;
  }
  iVar3 = (**(code **)(**(int **)(iVar2 + 0x3c) + 0x30))(*(int **)(iVar2 + 0x3c),0,0,uVar4);
  if (iVar3 != 0) {
    piVar1 = *(int **)(iVar2 + 0x3c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x48))(piVar1);
    }
    piVar1 = *(int **)(iVar2 + 0x44);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    piVar1 = *(int **)(iVar2 + 0x40);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    piVar1 = *(int **)(iVar2 + 0x3c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    return 0xffffffff;
  }
  return 0;
}
