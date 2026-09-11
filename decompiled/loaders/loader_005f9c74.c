/* spd-match: far pct=8.45 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8r/buckets/r_08/attempt3_recipe_thiscall_f9c74 */
#include "ghidra_compat.h"

extern void LAB_005f9dc3(...);
extern void LAB_005f9e4e(...);
extern void LAB_005f9e89(...);
extern void LAB_005f9e9c(...);
extern void LAB_005f9eb9(...);

struct ThisCallBox {
  int FUN_005f9c74(int param_2, int *param_3, double *param_4);
};
int ThisCallBox::FUN_005f9c74(int param_2, int *param_3, double *param_4) {
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  double local_18;
  undefined4 local_10;
  int iStack_c;
  int local_8;
  
  piVar3 = param_3;
  if (((param_2 == *param_3) ||
      (piVar8 = *(int **)(*(int *)(((int)this) + 0x14) + param_2 * 4), piVar8[1] != -1)) ||
     ((*(byte *)(*(int *)(*(int *)(((int)this) + 0x10) + *piVar8 * 4) + 4) & 2) == 0)) {
LAB_005f9e9c:
    if ((*piVar3 != -1) && (param_2 != *piVar3)) {
      return -0x7fffbffb;
    }
    local_18 = 1.0;
    param_3 = (int *)param_2;
  }
  else {
    puVar1 = *(uint **)(*(int *)(((int)this) + 0x18) + piVar8[0xb] * 4);
    uVar2 = puVar1[3];
    uVar4 = 0;
    if (uVar2 != 0) {
      piVar8 = (int *)puVar1[4];
      do {
        if (*piVar8 == param_2) break;
        uVar4 = uVar4 + 1;
        piVar8 = piVar8 + 1;
      } while (uVar4 < uVar2);
    }
    if (uVar4 == uVar2) goto LAB_005f9e9c;
    uVar7 = *puVar1 & 0xff000000;
    if (uVar7 == 0x10000000) {
      iVar5 = FUN_005f9c74(*(undefined4 *)(puVar1[2] + uVar4 * 4),param_3,param_4);
      if (-1 < iVar5) {
        return 0;
      }
      return iVar5;
    }
    if (uVar7 == 0x11000000) {
      iVar5 = FUN_005f9c74(*(undefined4 *)(puVar1[2] + uVar4 * 4),param_3,&local_18);
      if (iVar5 < 0) {
        return iVar5;
      }
      local_18 = -local_18;
      goto LAB_005f9eb9;
    }
    if (uVar7 != 0x24000000) {
      if (uVar7 == 0x25000000) {
        local_8 = *(int *)(puVar1[2] + uVar4 * 4);
        iStack_c = *(int *)(puVar1[2] + (uVar2 + uVar4) * 4);
        if (local_8 != iStack_c) {
          iVar5 = iStack_c * 4;
          piVar8 = *(int **)(iVar5 + *(int *)(((int)this) + 0x14));
          if (((*(byte *)(*(int *)(*(int *)(((int)this) + 0x10) + *piVar8 * 4) + 4) & 0x80) != 0) &&
             (piVar8[1] == -1)) {
            param_3 = (int *)*param_3;
            iVar6 = FUN_005f9c74(local_8,(int *)&param_3,&local_18);
            if (iVar6 < 0) goto LAB_005f9e4e;
LAB_005f9e89:
            *piVar3 = (int)param_3;
            local_18 = local_18 * *(double *)(*(int *)(iVar5 + *(int *)(((int)this) + 0x14)) + 0x10);
            goto LAB_005f9eb9;
          }
LAB_005f9e4e:
          iVar5 = local_8 * 4;
          piVar8 = *(int **)(iVar5 + *(int *)(((int)this) + 0x14));
          if (((*(byte *)(*(int *)(*(int *)(((int)this) + 0x10) + *piVar8 * 4) + 4) & 0x80) != 0) &&
             (piVar8[1] == -1)) {
            param_3 = (int *)*piVar3;
            iVar6 = FUN_005f9c74(iStack_c,(int *)&param_3,&local_18);
            if (-1 < iVar6) goto LAB_005f9e89;
          }
        }
      }
      goto LAB_005f9e9c;
    }
    iVar5 = *(int *)(puVar1[2] + uVar4 * 4);
    local_8 = *(int *)(puVar1[2] + (uVar2 + uVar4) * 4);
    if (iVar5 == local_8) {
      iVar5 = FUN_005f9c74(iVar5,param_3,param_4);
      if (-1 < iVar5) {
        local_18 = *param_4 + *param_4;
        goto LAB_005f9eb9;
      }
      goto LAB_005f9e9c;
    }
    param_3 = (int *)*param_3;
    iVar6 = FUN_005f9c74(iVar5,(int *)&param_3,&local_18);
    if ((iVar6 < 0) || (iVar6 = FUN_005f9c74(local_8,(int *)&param_3,(double *)&local_10), iVar6 < 0)) {
      if (*piVar3 == -1) {
        param_3 = (int *)0xffffffff;
        iVar6 = FUN_005f9c74(local_8,(int *)&param_3,(double *)&local_10);
        if ((-1 < iVar6) && (iVar5 = FUN_005f9c74(iVar5,(int *)&param_3,&local_18), -1 < iVar5))
        goto LAB_005f9dc3;
      }
      goto LAB_005f9e9c;
    }
LAB_005f9dc3:
    local_18 = (double)(__int64)CONCAT44(iStack_c,local_10) + local_18;
  }
  *piVar3 = (int)param_3;
LAB_005f9eb9:
  *param_4 = local_18;
  return 0;
}
