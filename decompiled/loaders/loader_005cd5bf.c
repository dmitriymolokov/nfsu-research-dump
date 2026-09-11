/* spd-match: far pct=6.05 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8/p1/buckets/p1_08/attempt2_recursive */
#include "ghidra_compat.h"

int __cdecl FUN_m375_thunk_helper(...);

int __cdecl FUN_005c8e04(...);
int __cdecl FUN_005ccec4(...);
int __cdecl FUN_005e8fb1(...);
extern unsigned char *DAT_006dc264;

struct ThisCallBox {
  int FUN_005cd5bf(int *param_2, int *param_3, uint *param_4);
};
int ThisCallBox::FUN_005cd5bf(int *param_2, int *param_3, uint *param_4) {
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint local_8;
  
  if ((*(int *)(&DAT_006dc264 + *param_2 * 0x1c) != 0x10) &&
     (*(int *)(&DAT_006dc264 + *param_2 * 0x1c) != 0xf)) {
    return 0;
  }
  local_8 = ((uint)this);
  if ((param_3 != (int *)0x0) &&
     (uVar2 = (**(code **)(*param_3 + 0x10))(param_3), *param_4 + 1 <= uVar2)) {
    iVar3 = (**(code **)(*param_3 + 0xc))(param_3);
    local_8 = *(uint *)(iVar3 + *param_4 * 4);
  }
  *param_4 = *param_4 + 1;
  if ((param_3 == (int *)0x0) ||
     (uVar2 = (**(code **)(*param_3 + 0x10))(param_3), *param_4 <= uVar2)) {
    iVar3 = *(int *)(*(int *)(((uint)this) + 0x8c) + param_2[3] * 4);
    iVar1 = *(int *)(iVar3 + 0x38);
    iVar3 = *(int *)(iVar3 + 0x28) + param_2[5];
    if (iVar1 == 0) {
      iVar3 = *(int *)(iVar3 + *(int *)(((uint)this) + 0x2c));
    }
    else {
      iVar3 = *(int *)(*(int *)(iVar1 + 8) +
                      *(int *)(iVar3 + *(int *)(*(int *)(((uint)this) + 0xc) + 8)) * 4);
    }
    piVar5 = (int *)(iVar3 * 0x1c + *(int *)(((uint)this) + 0x24));
    *piVar5 = *(int *)(&DAT_006dc264 + *param_2 * 0x1c);
    *(int *)(piVar5[6] + 0x54) = param_2[0x15];
    *(int *)(piVar5[6] + 0x58) = param_2[0x16];
    *(undefined4 *)(piVar5[6] + 0x5c) = 0;
    piVar6 = param_2 + 2;
    piVar8 = (int *)(piVar5[6] + 8);
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar8 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar8 = piVar8 + 1;
    }
    if (local_8 == 0) {
      return 0;
    }
    iVar3 = FUN_m375_thunk_helper(local_8,piVar5 + 4);
    if (iVar3 < 0) {
      return iVar3;
    }
    piVar6 = (int *)piVar5[4];
    puVar4 = (undefined4 *)(**(code **)(*piVar6 + 0xc))(piVar6);
    if ((param_3 != (int *)0x0) &&
       (uVar2 = (**(code **)(*param_3 + 0x10))(param_3),
       (uint)((local_8 & 3) != 0) + (local_8 >> 2) + *param_4 <= uVar2)) {
      iVar3 = (**(code **)(*param_3 + 0xc))(param_3);
      puVar7 = (undefined4 *)(iVar3 + *param_4 * 4);
      puVar9 = puVar4;
      for (uVar2 = local_8 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar2 = local_8 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
    }
    *param_4 = *param_4 + (uint)((local_8 & 3) != 0) + (local_8 >> 2);
    if ((param_3 == (int *)0x0) ||
       (uVar2 = (**(code **)(*param_3 + 0x10))(param_3), *param_4 <= uVar2)) {
      iVar3 = FUN_005c8e04(puVar4,piVar5 + 5);
      if (iVar3 < 0) {
        return iVar3;
      }
      FUN_005e8fb1(1);
      if (((*piVar5 == 0x10) &&
          (iVar3 = (**(code **)(**(int **)(((uint)this) + 8) + 0x16c))
                             (*(int **)(((uint)this) + 8),puVar4,piVar5 + 1), -1 < iVar3)) ||
         ((*piVar5 == 0xf &&
          (iVar3 = (**(code **)(**(int **)(((uint)this) + 8) + 0x1a8))
                             (*(int **)(((uint)this) + 8),puVar4,piVar5 + 1), -1 < iVar3)))) {
        FUN_005e8fb1(0);
        piVar5[3] = 1;
      }
      else {
        FUN_005e8fb1(0);
        piVar5[1] = 0;
        piVar5[3] = 0;
      }
      iVar3 = FUN_005ccec4(piVar5[6],piVar5[5],0);
      return iVar3;
    }
  }
  return -0x7fffbffb;
}
