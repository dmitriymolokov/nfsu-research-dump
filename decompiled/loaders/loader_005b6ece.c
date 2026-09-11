/* spd-match: far pct=4.43 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

extern void LAB_005b7078(void);

int FUN_005b6ece(int *param_1,int *param_2,int *param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int local_8;
  
  piVar1 = (int *)*param_1;
  iVar2 = piVar1[1];
  iVar3 = *piVar1;
  iVar6 = piVar1[4];
  uVar7 = 0;
  local_8 = 0;
  if ((param_4 != 0) || (iVar6 == 0)) {
    iVar6 = 1;
  }
  if (iVar2 < 0) {
    return -0x7fffbffb;
  }
  if (3 < iVar2) {
    if (iVar2 == 4) {
      if (iVar3 == 4) {
        while ((iVar6 != 0 && (*param_2 != 0))) {
          piVar1 = *(int **)(*(int *)(*param_2 + 8) + 0x18);
          if (piVar1 == (int *)0x0) {
            *(undefined4 *)*param_3 = 0;
          }
          else {
            uVar4 = (**(code **)(*piVar1 + 0xc))(piVar1);
            *(undefined4 *)*param_3 = uVar4;
          }
          *param_3 = *param_3 + 4;
          iVar6 = iVar6 + -1;
          *param_2 = *(int *)(*param_2 + 0xc);
        }
      }
      else {
        while ((iVar6 != 0 && (*param_2 != 0))) {
          *(undefined4 *)*param_3 = 0;
          *param_3 = *param_3 + 4;
          iVar6 = iVar6 + -1;
          *param_2 = *(int *)(*param_2 + 0xc);
        }
      }
      *param_1 = *param_1 + 0x14;
      return 0;
    }
    if (iVar2 != 5) {
      return -0x7fffbffb;
    }
    uVar7 = piVar1[5];
    *param_1 = (int)(piVar1 + 6);
    do {
      if (iVar6 == 0) {
        return local_8;
      }
      param_4 = 0;
      *param_1 = (int)(piVar1 + 6);
      if (uVar7 != 0) {
        do {
          local_8 = FUN_005b6ece(param_1,param_2,param_3,0);
          if (local_8 < 0) {
            return local_8;
          }
          param_4 = param_4 + 1;
        } while (param_4 < uVar7);
      }
      iVar6 = iVar6 + -1;
    } while( true );
  }
  uVar5 = piVar1[6] * piVar1[5] * iVar6;
  if (iVar3 == 1) {
    if (uVar5 != 0) {
      do {
        if (*param_2 == 0) break;
        *(uint *)(*param_3 + uVar7 * 4) = (uint)(*(int *)(*(int *)(*param_2 + 8) + 0x18) != 0);
        uVar7 = uVar7 + 1;
        *param_2 = *(int *)(*param_2 + 0xc);
      } while (uVar7 < uVar5);
    }
  }
  else {
    if (iVar3 == 2) {
      uVar7 = 0;
      if (uVar5 != 0) {
        do {
          if (*param_2 == 0) break;
          *(undefined4 *)(*param_3 + uVar7 * 4) = *(undefined4 *)(*(int *)(*param_2 + 8) + 0x18);
          uVar7 = uVar7 + 1;
          *param_2 = *(int *)(*param_2 + 0xc);
        } while (uVar7 < uVar5);
      }
      *param_3 = *param_3 + uVar5 * 4;
      goto LAB_005b7078;
    }
    if (iVar3 != 3) {
      return -0x7fffbffb;
    }
    if (uVar5 != 0) {
      do {
        if (*param_2 == 0) break;
        *(float *)(*param_3 + uVar7 * 4) = (float)*(double *)(*(int *)(*param_2 + 8) + 0x18);
        uVar7 = uVar7 + 1;
        *param_2 = *(int *)(*param_2 + 0xc);
      } while (uVar7 < uVar5);
    }
  }
  *param_3 = *param_3 + uVar5 * 4;
LAB_005b7078:
  *param_1 = *param_1 + 0x1c;
  return 0;
}
