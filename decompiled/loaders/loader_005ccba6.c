/* spd-match: far pct=4.02 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

struct ThisCallBox {
  int FUN_005ccba6(int *param_2, int *param_3, int *param_4, uint param_5, uint param_6);
};
int ThisCallBox::FUN_005ccba6(int *param_2, int *param_3, int *param_4, uint param_5, uint param_6) {
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int local_c;
  
  piVar1 = (int *)*param_2;
  iVar3 = *piVar1;
  iVar6 = piVar1[4];
  iVar2 = piVar1[1];
  local_c = 0;
  if ((param_6 != 0) || (iVar6 == 0)) {
    iVar6 = 1;
  }
  if (-1 < iVar2) {
    if (iVar2 < 4) {
      uVar5 = piVar1[6] * piVar1[5] * iVar6;
      if (iVar3 == 1) {
        param_5 = 0;
        if (uVar5 != 0) {
          do {
            iVar6 = param_5 * 4;
            param_5 = param_5 + 1;
            *(uint *)(iVar6 + *param_4) = (uint)(*(int *)(iVar6 + *param_3) != 0);
          } while (param_5 < uVar5);
        }
        *param_3 = *param_3 + uVar5 * 4;
      }
      else {
        if (iVar3 == 2) {
          param_5 = 0;
          if (uVar5 != 0) {
            do {
              iVar6 = param_5 * 4;
              param_5 = param_5 + 1;
              *(undefined4 *)(iVar6 + *param_4) = *(undefined4 *)(iVar6 + *param_3);
            } while (param_5 < uVar5);
          }
        }
        else {
          if (iVar3 != 3) {
            return -0x7fffbffb;
          }
          param_5 = 0;
          if (uVar5 != 0) {
            do {
              iVar6 = param_5 * 4;
              param_5 = param_5 + 1;
              *(undefined4 *)(iVar6 + *param_4) = *(undefined4 *)(iVar6 + *param_3);
            } while (param_5 < uVar5);
          }
        }
        *param_3 = *param_3 + uVar5 * 4;
      }
      *param_4 = *param_4 + uVar5 * 4;
      *param_2 = *param_2 + 0x1c;
      return 0;
    }
    if (iVar2 == 4) {
      if (iVar3 == 4) {
        for (; iVar6 != 0; iVar6 = iVar6 + -1) {
          iVar3 = *(int *)*param_3;
          if (param_5 != 0) {
            iVar3 = *(int *)(*(int *)(param_5 + 8) + iVar3 * 4);
          }
          piVar1 = *(int **)(iVar3 * 0x1c + *(int *)(((int)this) + 0x24) + 4);
          uVar4 = 0;
          if (piVar1 != (int *)0x0) {
            uVar4 = (**(code **)(*piVar1 + 0xc))(piVar1);
          }
          *(undefined4 *)*param_4 = uVar4;
          *param_3 = *param_3 + 4;
          *param_4 = *param_4 + 4;
        }
      }
      else {
        if (iVar3 < 5) {
          return -0x7fffbffb;
        }
        if (iVar3 < 10) {
          for (; iVar6 != 0; iVar6 = iVar6 + -1) {
            iVar3 = *(int *)*param_3;
            if (param_5 != 0) {
              iVar3 = *(int *)(*(int *)(param_5 + 8) + iVar3 * 4);
            }
            *(undefined4 *)*param_4 = *(undefined4 *)(iVar3 * 0x1c + 4 + *(int *)(((int)this) + 0x24));
            piVar1 = *(int **)*param_4;
            if (piVar1 != (int *)0x0) {
              (**(code **)(*piVar1 + 4))(piVar1);
            }
            *param_3 = *param_3 + 4;
            *param_4 = *param_4 + 4;
          }
        }
        else if (iVar3 == 0xf) {
          for (; iVar6 != 0; iVar6 = iVar6 + -1) {
            iVar3 = *(int *)*param_3;
            if (param_5 != 0) {
              iVar3 = *(int *)(*(int *)(param_5 + 8) + iVar3 * 4);
            }
            *(undefined4 *)*param_4 = *(undefined4 *)(iVar3 * 0x1c + 4 + *(int *)(((int)this) + 0x24));
            piVar1 = *(int **)*param_4;
            if (piVar1 != (int *)0x0) {
              (**(code **)(*piVar1 + 4))(piVar1);
            }
            *param_3 = *param_3 + 4;
            *param_4 = *param_4 + 4;
          }
        }
        else {
          if (iVar3 != 0x10) {
            return -0x7fffbffb;
          }
          for (; iVar6 != 0; iVar6 = iVar6 + -1) {
            iVar3 = *(int *)*param_3;
            if (param_5 != 0) {
              iVar3 = *(int *)(*(int *)(param_5 + 8) + iVar3 * 4);
            }
            *(undefined4 *)*param_4 = *(undefined4 *)(iVar3 * 0x1c + 4 + *(int *)(((int)this) + 0x24));
            piVar1 = *(int **)*param_4;
            if (piVar1 != (int *)0x0) {
              (**(code **)(*piVar1 + 4))(piVar1);
            }
            *param_3 = *param_3 + 4;
            *param_4 = *param_4 + 4;
          }
        }
      }
      *param_2 = *param_2 + 0x14;
      return 0;
    }
    if (iVar2 == 5) {
      uVar5 = piVar1[5];
      *param_2 = (int)(piVar1 + 6);
      do {
        if (iVar6 == 0) {
          return local_c;
        }
        param_6 = 0;
        *param_2 = (int)(piVar1 + 6);
        if (uVar5 != 0) {
          do {
            local_c = FUN_005ccba6(param_2,param_3,param_4,param_5,0);
            if (local_c < 0) {
              return local_c;
            }
            param_6 = param_6 + 1;
          } while (param_6 < uVar5);
        }
        iVar6 = iVar6 + -1;
      } while( true );
    }
  }
  return -0x7fffbffb;
}
