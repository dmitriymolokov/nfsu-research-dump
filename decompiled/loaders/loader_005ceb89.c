/* spd-match: far pct=5.43 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_005ccec4(...);
int __cdecl FUN_005e8fb1(...);
extern void LAB_005cf051(...);

struct ThisCallBox {
  int FUN_005ceb89(int *param_2, int *param_3, int *param_4, int param_5, int param_6, int param_7);
};
int ThisCallBox::FUN_005ceb89(int *param_2, int *param_3, int *param_4, int param_5, int param_6, int param_7) {
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  bool bVar11;
  bool bVar12;
  int local_10;
  int local_8;
  
  piVar1 = (int *)*param_2;
  local_8 = 0;
  iVar4 = *piVar1;
  local_10 = piVar1[4];
  iVar5 = piVar1[1];
  if (local_10 == 0) {
    local_10 = 1;
  }
  if (-1 < iVar5) {
    if (iVar5 < 4) {
      uVar7 = piVar1[6] * piVar1[5] * local_10;
      if (((iVar4 != 1) && (iVar4 != 2)) && (iVar4 != 3)) {
        return -0x7fffbffb;
      }
      iVar4 = uVar7 * 4;
      puVar9 = (undefined4 *)*param_4;
      puVar10 = (undefined4 *)*param_3;
      for (uVar7 = uVar7 & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      *param_3 = *param_3 + iVar4;
      *param_4 = *param_4 + iVar4;
      *param_2 = *param_2 + 0x1c;
      return 0;
    }
    if (iVar5 != 4) {
      if (iVar5 != 5) {
        return -0x7fffbffb;
      }
      uVar7 = piVar1[5];
      *param_2 = (int)(piVar1 + 6);
      do {
        if (local_10 == 0) {
          return local_8;
        }
        uVar8 = 0;
        *param_2 = (int)(piVar1 + 6);
        if (uVar7 != 0) {
          do {
            local_8 = FUN_005ceb89(param_2,param_3,param_4,param_5,param_6,param_7);
            if (local_8 < 0) {
              return local_8;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar7);
        }
        local_10 = local_10 + -1;
      } while( true );
    }
    if (iVar4 < 0x10) {
      if (iVar4 == 0xf) {
        for (; local_10 != 0; local_10 = local_10 + -1) {
          if (param_6 == 0) {
            iVar4 = *(int *)*param_4;
          }
          else {
            iVar4 = *(int *)(*(int *)(param_6 + 8) + *(int *)*param_4 * 4);
          }
          iVar4 = iVar4 * 0x1c + *(int *)(param_7 + 0x24);
          if (param_5 == 0) {
            iVar5 = *(int *)*param_3;
          }
          else {
            iVar5 = *(int *)(*(int *)(param_5 + 8) + *(int *)*param_3 * 4);
          }
          piVar1 = *(int **)(iVar4 + 0x10);
          iVar5 = iVar5 * 0x1c + *(int *)(((int)this) + 0x24);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 4))(piVar1);
          }
          piVar1 = *(int **)(iVar5 + 0x10);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))(piVar1);
            *(undefined4 *)(iVar5 + 0x10) = 0;
          }
          *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar4 + 0x10);
          *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(iVar4 + 0x14);
          if ((*(int *)(((int)this) + 8) == *(int *)(param_7 + 8)) || (*(int *)(iVar4 + 0x10) == 0)) {
            piVar1 = *(int **)(iVar4 + 4);
            if (piVar1 != (int *)0x0) {
              (**(code **)(*piVar1 + 4))(piVar1);
            }
            piVar1 = *(int **)(iVar5 + 4);
            if (piVar1 != (int *)0x0) {
              (**(code **)(*piVar1 + 8))(piVar1);
              *(undefined4 *)(iVar5 + 4) = 0;
            }
            *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar4 + 4);
            *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar4 + 0xc);
          }
          else {
            piVar1 = (int *)(iVar5 + 4);
            piVar2 = (int *)*piVar1;
            if (piVar2 != (int *)0x0) {
              (**(code **)(*piVar2 + 8))(piVar2);
              *piVar1 = 0;
            }
            if (param_5 != 0) {
              return -0x7fffbffb;
            }
            FUN_005e8fb1(1);
            iVar3 = **(int **)(((int)this) + 8);
            uVar6 = (**(code **)(**(int **)(iVar4 + 0x10) + 0xc))(*(int **)(iVar4 + 0x10),piVar1);
            iVar4 = (**(code **)(iVar3 + 0x1a8))(*(undefined4 *)(((int)this) + 8),uVar6);
            if (iVar4 < 0) {
              FUN_005e8fb1(0);
              *(undefined4 *)(iVar5 + 0xc) = 0;
            }
            else {
              FUN_005e8fb1(0);
              *(undefined4 *)(iVar5 + 0xc) = 1;
            }
          }
          local_8 = FUN_005ccec4(*(undefined4 *)(iVar5 + 0x18),*(undefined4 *)(iVar5 + 0x14),0);
          if (local_8 < 0) {
            return local_8;
          }
          *param_3 = *param_3 + 4;
          *param_4 = *param_4 + 4;
        }
        goto LAB_005cf051;
      }
      if (iVar4 == 4) {
        for (; local_10 != 0; local_10 = local_10 + -1) {
          if (param_6 == 0) {
            iVar4 = *(int *)*param_4;
          }
          else {
            iVar4 = *(int *)(*(int *)(param_6 + 8) + *(int *)*param_4 * 4);
          }
          iVar4 = iVar4 * 0x1c + *(int *)(param_7 + 0x24);
          if (param_5 == 0) {
            iVar5 = *(int *)*param_3;
          }
          else {
            iVar5 = *(int *)(*(int *)(param_5 + 8) + *(int *)*param_3 * 4);
          }
          iVar5 = iVar5 * 0x1c + *(int *)(((int)this) + 0x24);
          piVar1 = *(int **)(iVar4 + 4);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 4))(piVar1);
          }
          piVar1 = *(int **)(iVar5 + 4);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))(piVar1);
            *(undefined4 *)(iVar5 + 4) = 0;
          }
          *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar4 + 4);
          *param_3 = *param_3 + 4;
          *param_4 = *param_4 + 4;
        }
        goto LAB_005cf051;
      }
      if (iVar4 < 5) {
        return -0x7fffbffb;
      }
      if (iVar4 < 10) {
        for (; local_10 != 0; local_10 = local_10 + -1) {
          if (param_6 == 0) {
            iVar4 = *(int *)*param_4;
          }
          else {
            iVar4 = *(int *)(*(int *)(param_6 + 8) + *(int *)*param_4 * 4);
          }
          iVar4 = iVar4 * 0x1c + *(int *)(param_7 + 0x24);
          if (param_5 == 0) {
            iVar5 = *(int *)*param_3;
          }
          else {
            iVar5 = *(int *)(*(int *)(param_5 + 8) + *(int *)*param_3 * 4);
          }
          iVar5 = iVar5 * 0x1c + *(int *)(((int)this) + 0x24);
          if (*(int *)(((int)this) + 8) == *(int *)(param_7 + 8)) {
            piVar1 = *(int **)(iVar4 + 4);
            if (piVar1 != (int *)0x0) {
              (**(code **)(*piVar1 + 4))(piVar1);
            }
            piVar1 = *(int **)(iVar5 + 4);
            if (piVar1 != (int *)0x0) {
              (**(code **)(*piVar1 + 8))(piVar1);
              *(undefined4 *)(iVar5 + 4) = 0;
            }
            *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar4 + 4);
          }
          else {
            piVar1 = *(int **)(iVar5 + 4);
            if (piVar1 != (int *)0x0) {
              (**(code **)(*piVar1 + 8))(piVar1);
              *(undefined4 *)(iVar5 + 4) = 0;
            }
            if (param_5 != 0) {
              return -0x7fffbffb;
            }
          }
          *param_3 = *param_3 + 4;
          *param_4 = *param_4 + 4;
        }
        goto LAB_005cf051;
      }
      bVar12 = SBORROW4(iVar4,0xe);
      iVar5 = -0xe;
      bVar11 = iVar4 == 0xe;
    }
    else {
      if (iVar4 == 0x10) {
        for (; local_10 != 0; local_10 = local_10 + -1) {
          if (param_6 == 0) {
            iVar4 = *(int *)*param_4;
          }
          else {
            iVar4 = *(int *)(*(int *)(param_6 + 8) + *(int *)*param_4 * 4);
          }
          iVar4 = iVar4 * 0x1c + *(int *)(param_7 + 0x24);
          if (param_5 == 0) {
            iVar5 = *(int *)*param_3;
          }
          else {
            iVar5 = *(int *)(*(int *)(param_5 + 8) + *(int *)*param_3 * 4);
          }
          piVar1 = *(int **)(iVar4 + 0x10);
          iVar5 = iVar5 * 0x1c + *(int *)(((int)this) + 0x24);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 4))(piVar1);
          }
          piVar1 = *(int **)(iVar5 + 0x10);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))(piVar1);
            *(undefined4 *)(iVar5 + 0x10) = 0;
          }
          *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar4 + 0x10);
          *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(iVar4 + 0x14);
          if ((*(int *)(((int)this) + 8) == *(int *)(param_7 + 8)) || (*(int *)(iVar4 + 0x10) == 0)) {
            piVar1 = *(int **)(iVar4 + 4);
            if (piVar1 != (int *)0x0) {
              (**(code **)(*piVar1 + 4))(piVar1);
            }
            piVar1 = *(int **)(iVar5 + 4);
            if (piVar1 != (int *)0x0) {
              (**(code **)(*piVar1 + 8))(piVar1);
              *(undefined4 *)(iVar5 + 4) = 0;
            }
            *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar4 + 4);
            *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar4 + 0xc);
          }
          else {
            piVar1 = (int *)(iVar5 + 4);
            piVar2 = (int *)*piVar1;
            if (piVar2 != (int *)0x0) {
              (**(code **)(*piVar2 + 8))(piVar2);
              *piVar1 = 0;
            }
            if (param_5 != 0) {
              return -0x7fffbffb;
            }
            FUN_005e8fb1(1);
            iVar3 = **(int **)(((int)this) + 8);
            uVar6 = (**(code **)(**(int **)(iVar4 + 0x10) + 0xc))(*(int **)(iVar4 + 0x10),piVar1);
            iVar4 = (**(code **)(iVar3 + 0x16c))(*(undefined4 *)(((int)this) + 8),uVar6);
            if (iVar4 < 0) {
              FUN_005e8fb1(0);
              *(undefined4 *)(iVar5 + 0xc) = 0;
            }
            else {
              FUN_005e8fb1(0);
              *(undefined4 *)(iVar5 + 0xc) = 1;
            }
          }
          local_8 = FUN_005ccec4(*(undefined4 *)(iVar5 + 0x18),*(undefined4 *)(iVar5 + 0x14),0);
          if (local_8 < 0) {
            return local_8;
          }
          *param_3 = *param_3 + 4;
          *param_4 = *param_4 + 4;
        }
        goto LAB_005cf051;
      }
      if (iVar4 < 0x11) {
        return -0x7fffbffb;
      }
      bVar12 = SBORROW4(iVar4,0x12);
      iVar5 = -0x12;
      bVar11 = iVar4 == 0x12;
    }
    if (bVar11 || bVar12 != iVar4 + iVar5 < 0) {
LAB_005cf051:
      *param_2 = *param_2 + 0x14;
      return local_8;
    }
  }
  return -0x7fffbffb;
}
