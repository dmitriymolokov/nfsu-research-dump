/* spd-match: far pct=3.43 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00650fd0();
int __cdecl FUN_006510d0();

uint FUN_0065fdf0(int param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(short *)(param_1 + 0x24) != 0) {
    *(undefined2 *)(param_1 + 0x24) = 0;
    *(undefined2 *)(param_1 + 0x26) = 1;
  }
  if (*(int *)(param_1 + 0x20) < (int)param_2) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      FUN_006510d0(*(int *)(param_1 + 0x1c));
    }
    uVar1 = FUN_00650fd0(param_2 * 4);
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
    *(uint *)(param_1 + 0x20) = param_2;
  }
  if (*(short *)(param_1 + 0x26) == 0) {
    puVar4 = *(undefined4 **)(param_1 + 0x1c);
    for (uVar2 = param_2 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *param_4 = *puVar4;
      puVar4 = puVar4 + 1;
      param_4 = param_4 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)param_4 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      param_4 = (undefined4 *)((int)param_4 + 1);
    }
    *(undefined2 *)(param_1 + 0x24) = 1;
    uVar2 = param_2;
  }
  else {
    uVar2 = (*(code *)**(undefined4 **)(param_1 + 8))
                      (*(undefined4 **)(param_1 + 8),param_2,param_4,param_3,1);
    if (0 < (int)uVar2) {
      puVar4 = param_3;
      for (uVar2 = param_2 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
        *param_4 = *puVar4;
        puVar4 = puVar4 + 1;
        param_4 = param_4 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)param_4 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        param_4 = (undefined4 *)((int)param_4 + 1);
      }
      puVar4 = *(undefined4 **)(param_1 + 0x1c);
      for (uVar2 = param_2 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = *param_3;
        param_3 = param_3 + 1;
        puVar4 = puVar4 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)puVar4 = *(undefined1 *)param_3;
        param_3 = (undefined4 *)((int)param_3 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      *(undefined2 *)(param_1 + 0x26) = 0;
      return param_2;
    }
  }
  return uVar2;
}
