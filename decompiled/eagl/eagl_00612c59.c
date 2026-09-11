/* spd-match: far pct=9.84 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_005d65b0(...);
int __cdecl FUN_005fbec8(...);
int __cdecl FUN_00602b25(...);
int __cdecl FUN_00612943(...);
int __cdecl FUN_006129a7(...);
int __cdecl FUN_00612a3c(...);
int __cdecl FUN_00618c39(...);
int __cdecl FUN_00618c64(...);
extern void LAB_00612d64(...);
extern void LAB_00612d73(...);
extern void LAB_0061311d(...);

struct ThisCallBox {
  int FUN_00612c59(uint *param_2, int *param_3);
};
int ThisCallBox::FUN_00612c59(uint *param_2, int *param_3) {
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  uint local_18;
  uint local_10;
  undefined4 *local_c;
  
  local_c = (undefined4 *)0x0;
  iVar6 = FUN_00602b25(param_2,param_3);
  if (-1 < iVar6) {
    local_18 = *(int *)(((int)this) + 8);
    param_3 = (int *)0x0;
    local_10 = 0;
    if (local_18 != 0) {
      piVar11 = *(int **)(((int)this) + 0x14);
      do {
        piVar2 = (int *)*piVar11;
        if ((((*(int *)(((int)this) + 0x50) != *piVar2) ||
             (piVar5 = (int *)(piVar2[2] + 1), (int *)(piVar2[2] + 1) <= param_3)) &&
            (piVar5 = param_3, *(int *)(((int)this) + 0x60) == *piVar2)) && (local_10 < piVar2[2] + 1U))
        {
          local_10 = piVar2[2] + 1U;
        }
        param_3 = piVar5;
        piVar11 = piVar11 + 1;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
    piVar11 = param_3;
    local_c = (unsigned int *)_malloc((int)param_3 << 5);
    if (local_c == (undefined4 *)0x0) {
      iVar6 = -0x7ff8fff2;
    }
    else if (local_10 < 0x41) {
      puVar9 = local_c;
      for (iVar8 = ((uint)piVar11 & 0x7ffffff) << 3; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined1 *)puVar9 = 0;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      uVar10 = 0;
      if (*(int *)(((int)this) + 8) != 0) {
        do {
          piVar11 = *(int **)(*(int *)(((int)this) + 0x14) + uVar10 * 4);
          if ((*(int *)(((int)this) + 0x50) == *piVar11) && (piVar11[1] == -1)) {
            *(undefined8 *)(local_c + (piVar11[3] + piVar11[2] * 4) * 2) =
                 *(undefined8 *)(piVar11 + 4);
          }
          if (*(int *)(((int)this) + 0x30) == 0x54580100) {
            if (*(int *)(((int)this) + 0x58) == *piVar11) {
              if ((uint)piVar11[2] < 2) {
                if ((piVar11[0x14] & 0xffU) == 2) {
                  piVar11[2] = 0;
                }
                else if ((piVar11[0x14] & 0xffU) == 3) {
                  piVar11[2] = 1;
                }
                goto LAB_00612d64;
              }
            }
            else {
LAB_00612d64:
              if ((*(int *)(((int)this) + 0x5c) != *piVar11) || (piVar11[2] == 0)) goto LAB_00612d73;
            }
            FUN_005fbec8(((int)this),0,0x1194);
            goto LAB_0061311d;
          }
LAB_00612d73:
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(uint *)(((int)this) + 8));
      }
      iVar6 = FUN_00618c39();
      if ((((-1 < iVar6) && (iVar6 = FUN_00618c64(), piVar11 = param_3, -1 < iVar6)) &&
          (iVar6 = FUN_00618c39(), -1 < iVar6)) && (iVar6 = FUN_00618c39(), -1 < iVar6)) {
        param_3 = (int *)((int)piVar11 << 2);
        iVar6 = FUN_00618c39();
        if (-1 < iVar6) {
          piVar11 = (int *)0x0;
          if (param_3 != (int *)0x0) {
            do {
              iVar6 = FUN_00612a3c(*(undefined8 *)(local_c + (int)piVar11 * 2));
              if (iVar6 < 0) goto LAB_0061311d;
              piVar11 = (int *)((int)piVar11 + 1);
            } while (piVar11 < param_3);
          }
          iVar8 = *(int *)(((int)this) + 0xa4);
          iVar6 = FUN_00618c39();
          iVar12 = 0;
          if (((-1 < iVar6) && (iVar6 = FUN_00618c39(), -1 < iVar6)) &&
             (iVar6 = FUN_00618c39(), -1 < iVar6)) {
            local_18 = 0;
            if (*(int *)(((int)this) + 0xc) != 0) {
              do {
                iVar6 = FUN_00618c39();
                if (((iVar6 < 0) || (iVar6 = FUN_00618c39(), iVar6 < 0)) ||
                   (iVar6 = FUN_00618c39(), iVar6 < 0)) goto LAB_0061311d;
                param_3 = (int *)0x0;
                piVar11 = (int *)(*(int *)(((int)this) + 0xa0) + iVar8 * 4);
                *piVar11 = *piVar11 + 3;
                iVar6 = *(int *)(((int)this) + 0x18);
                if (*(int *)(*(int *)(iVar12 + iVar6) + 4) != 0) {
                  do {
                    iVar3 = *(int *)(*(int *)(((int)this) + 0x14) +
                                    *(int *)(*(int *)(*(int *)(iVar12 + iVar6) + 8) +
                                            (int)param_3 * 4) * 4);
                    iVar4 = *(int *)(((int)this) + 0xa4);
                    iVar6 = FUN_00618c39();
                    if (((iVar6 < 0) ||
                        (((iVar6 = *(int *)(iVar3 + 4), iVar6 != -1 &&
                          (iVar6 = FUN_00612943(iVar6,iVar4), iVar6 < 0)) ||
                         (iVar6 = FUN_006129a7(), iVar6 < 0)))) ||
                       (iVar6 = FUN_00618c39(), iVar6 < 0)) goto LAB_0061311d;
                    piVar11 = (int *)(*(int *)(((int)this) + 0xa0) + iVar8 * 4);
                    *piVar11 = *piVar11 + *(int *)(*(int *)(((int)this) + 0xa0) + iVar4 * 4) * 2 + 3;
                    param_3 = (int *)((int)param_3 + 1);
                    iVar6 = *(int *)(((int)this) + 0x18);
                  } while (param_3 < *(int **)(*(int *)(iVar12 + iVar6) + 4));
                }
                iVar6 = *(int *)(((int)this) + 0x18);
                param_3 = (int *)0x0;
                if (*(int *)(*(int *)(iVar12 + iVar6) + 0xc) != 0) {
                  do {
                    iVar3 = *(int *)(*(int *)(((int)this) + 0x14) +
                                    *(int *)(*(int *)(*(int *)(iVar12 + iVar6) + 0x10) +
                                            (int)param_3 * 4) * 4);
                    iVar4 = *(int *)(((int)this) + 0xa4);
                    iVar6 = FUN_00618c39();
                    if ((((iVar6 < 0) ||
                         ((iVar6 = *(int *)(iVar3 + 4), iVar6 != -1 &&
                          (iVar6 = FUN_00612943(iVar6,iVar4), iVar6 < 0)))) ||
                        (iVar6 = FUN_006129a7(), iVar6 < 0)) || (iVar6 = FUN_00618c39(), iVar6 < 0))
                    goto LAB_0061311d;
                    piVar11 = (int *)(*(int *)(((int)this) + 0xa0) + iVar8 * 4);
                    *piVar11 = *piVar11 + *(int *)(*(int *)(((int)this) + 0xa0) + iVar4 * 4) * 2 + 3;
                    param_3 = (int *)((int)param_3 + 1);
                    iVar6 = *(int *)(((int)this) + 0x18);
                  } while (param_3 < *(int **)(*(int *)(iVar12 + iVar6) + 0xc));
                }
                local_18 = local_18 + 1;
                iVar12 = iVar12 + 4;
              } while (local_18 < *(uint *)(((int)this) + 0xc));
            }
            iVar6 = FUN_00618c39();
            if ((-1 < iVar6) && (iVar6 = FUN_00618c39(), -1 < iVar6)) {
              puVar1 = (uint *)(*(int *)(((int)this) + 0xa0) + iVar8 * 4);
              *puVar1 = (*puVar1 + 4 & 0x7fff) << 0x10 | 0xfffe;
              iVar6 = FUN_00618c39();
              if (-1 < iVar6) {
                if (param_2 != (uint *)0x0) {
                  iVar6 = FUN_005d65b0(*(int *)(((int)this) + 0xa4) << 2,&param_3);
                  if (iVar6 < 0) goto LAB_0061311d;
                  uVar10 = *(uint *)(((int)this) + 0xa4);
                  puVar9 = *(undefined4 **)(((int)this) + 0xa0);
                  puVar7 = (undefined4 *)(**(code **)(*param_3 + 0xc))();
                  for (uVar10 = uVar10 & 0x3fffffff; uVar10 != 0; uVar10 = uVar10 - 1) {
                    *puVar7 = *puVar9;
                    puVar9 = puVar9 + 1;
                    puVar7 = puVar7 + 1;
                  }
                  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                    *(undefined1 *)puVar7 = *(undefined1 *)puVar9;
                    puVar9 = (undefined4 *)((int)puVar9 + 1);
                    puVar7 = (undefined4 *)((int)puVar7 + 1);
                  }
                  *param_2 = (uint)param_3;
                }
                iVar6 = 0;
              }
            }
          }
        }
      }
    }
  }
LAB_0061311d:
  _free(local_c);
  return iVar6;
}
