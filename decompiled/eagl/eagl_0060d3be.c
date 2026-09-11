/* spd-match: far pct=33.56 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0061a3fb();

void __fastcall FUN_0060d3be(int *param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int local_38 [4];
  int local_28 [4];
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  puVar1 = (uint *)param_1[0x26];
  local_8 = (int *)puVar1[3];
  piVar2 = (int *)puVar1[2];
  local_14 = (int *)puVar1[4];
  uVar4 = *puVar1 & 0xffffff;
  local_10 = piVar2 + uVar4;
  iVar3 = param_1[5];
  local_c = *(int **)(iVar3 + *piVar2 * 4);
  piVar6 = *(int **)(iVar3 + *local_14 * 4);
  local_18 = *(int **)(iVar3 + *local_10 * 4);
  if (((*piVar6 == *local_c) && (piVar6[2] == local_c[2])) ||
     ((*piVar6 == *local_18 && (piVar6[2] == local_18[2])))) {
    iVar3 = (**(code **)(*param_1 + 0x6c))(param_1[0x25],local_38,4,0,0);
    if (iVar3 < 0) {
      return;
    }
    local_c = (int *)0x0;
    if (local_8 != (int *)0x0) {
      iVar3 = param_1[5];
      local_18 = (int *)((int)local_14 - (int)local_28);
      do {
        piVar6 = local_c;
        piVar7 = local_18 + (int)local_c;
        local_c = (int *)((int)local_c + 1);
        local_28[(int)piVar6] =
             local_38[*(int *)(*(int *)(iVar3 + *(int *)((int)local_28 + (int)piVar7) * 4) + 0xc)];
      } while (local_c < local_8);
    }
    FUN_0061a3fb(2,local_28,local_8,piVar2,local_10,0,uVar4,0,0x1000000,0);
    uVar5 = 0x58;
    piVar6 = local_28;
    piVar7 = piVar2;
  }
  else {
    piVar7 = (int *)0x0;
    uVar5 = 10;
    piVar6 = piVar2;
  }
  FUN_0061a3fb(uVar5,local_14,local_8,piVar6,local_10,piVar7,uVar4,0,0,0);
  return;
}
