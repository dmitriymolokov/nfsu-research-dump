/* spd-match: far pct=4.38 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2446 */
#include "ghidra_compat.h"

int __cdecl FUN_005f74cf(...);
int __cdecl FUN_005f752b(...);
int __cdecl FUN_005f7a42(...);
int __cdecl FUN_005f7cfc(...);
extern void LAB_005fb35f(...);
extern void LAB_005fb673(...);

struct ThisCallBox {
  undefined4 FUN_005faf93(int *param_2, uint param_3, int param_4, int *param_5, undefined4 param_6, uint param_7);
};
undefined4 ThisCallBox::FUN_005faf93(int *param_2, uint param_3, int param_4, int *param_5, undefined4 param_6, uint param_7) {
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  uint local_48 [4];
  int local_38 [4];
  int *local_28;
  int *local_24;
  uint local_20;
  int *local_1c;
  uint local_18;
  int *local_14;
  int *local_10;
  int local_c;
  uint local_8;
  
  local_c = ((int)this);
  if (param_3 == 0) {
    return 1;
  }
  if (4 < (unsigned int)(param_3)) {
    param_3 = 4;
  }
  piVar3 = local_38;
  for (uVar4 = param_3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  local_8 = 0;
  if (param_3 != 0) {
    do {
      local_1c = local_38 + local_8;
      if (*local_1c == 0) {
        local_14 = (int *)0xffffffff;
        local_24 = param_2 + local_8;
        piVar3 = (int *)*local_24;
        local_20 = 0;
        if (piVar3 == (int *)0xffffffff) {
          return 0;
        }
        do {
          piVar7 = *(int **)(*(int *)(local_c + 0x14) + (int)piVar3 * 4);
          if ((piVar7[0xb] == 0xffffffff) || ((uint)piVar7[0xb] < param_7)) {
            uVar4 = local_8 + 1;
            local_18 = 1;
            if (uVar4 < (unsigned int)(param_3)) {
              piVar5 = param_2 + uVar4;
              local_10 = (int *)((int)local_38 - (int)param_2);
              iVar8 = param_3 - uVar4;
              do {
                if (*(int *)(((int)local_38 - (int)param_2) + (int)piVar5) == 0) {
                  iVar2 = *piVar5;
                  while (iVar2 != -1) {
                    piVar1 = *(int **)(*(int *)(local_c + 0x14) + iVar2 * 4);
                    if ((((piVar1[0xb] == 0xffffffff) || ((uint)piVar1[0xb] < param_7)) &&
                        (*piVar7 == *piVar1)) &&
                       ((piVar7[1] == piVar1[1] && (piVar7[2] == piVar1[2])))) {
                      local_18 = local_18 + 1;
                      break;
                    }
                    iVar2 = piVar1[8];
                  }
                }
                piVar5 = piVar5 + 1;
                iVar8 = iVar8 + -1;
              } while (iVar8 != 0);
            }
            if ((unsigned int)(local_20) < (unsigned int)(local_18)) {
              local_20 = local_18;
              local_14 = piVar3;
            }
          }
          piVar3 = (int *)piVar7[8];
        } while (piVar3 != (int *)0xffffffff);
        if (local_14 == (int *)0xffffffff) {
          return 0;
        }
        *local_24 = (int)local_14;
        uVar4 = local_8 + 1;
        *local_1c = 1;
        local_10 = (int *)uVar4;
        if (uVar4 < (unsigned int)(param_3)) {
          local_20 = (int)param_2 - (int)local_38;
          do {
            piVar3 = local_38 + (int)local_10;
            local_24 = piVar3;
            if (*piVar3 == 0) {
              piVar7 = (int *)((int)local_38 + local_20 + (int)local_10 * 4);
              iVar8 = *piVar7;
              if (iVar8 != -1) {
                do {
                  piVar5 = *(int **)(*(int *)(local_c + 0x14) + iVar8 * 4);
                  if (((piVar5[0xb] == 0xffffffff) || ((uint)piVar5[0xb] < param_7)) &&
                     ((piVar1 = *(int **)(*(int *)(local_c + 0x14) + (int)local_14 * 4),
                      *piVar1 == *piVar5 && ((piVar1[1] == piVar5[1] && (piVar1[2] == piVar5[2])))))
                     ) {
                    *piVar7 = iVar8;
                    *piVar3 = 1;
                    break;
                  }
                  iVar8 = piVar5[8];
                } while (iVar8 != -1);
              }
            }
            local_10 = (int *)((int)local_10 + 1);
          } while ((unsigned int)(local_10) < (unsigned int)(param_3));
        }
      }
      local_8 = local_8 + 1;
    } while ((unsigned int)(local_8) < (unsigned int)(param_3));
  }
  local_8 = 1;
  if (1 < (unsigned int)(param_3)) {
    piVar3 = *(int **)(*(int *)(local_c + 0x14) + *param_2 * 4);
    do {
      piVar7 = *(int **)(*(int *)(local_c + 0x14) + param_2[local_8] * 4);
      if (((*piVar7 != *piVar3) || (piVar7[1] != piVar3[1])) || (piVar7[2] != piVar3[2])) break;
      local_8 = local_8 + 1;
    } while ((unsigned int)(local_8) < (unsigned int)(param_3));
  }
  if (local_8 == param_3) {
    return 1;
  }
  if (param_4 == 0) {
    return 0;
  }
  local_18 = 0;
  local_8 = 0;
  if (param_3 != 0) {
    iVar8 = *(int *)(local_c + 0x14);
    do {
      piVar3 = *(int **)(iVar8 + param_2[local_8] * 4);
      uVar4 = 0;
      if (local_8 != 0) {
        do {
          piVar7 = *(int **)(iVar8 + param_2[uVar4] * 4);
          if (*piVar3 == *piVar7) {
            if ((((*(byte *)(*(int *)(*(int *)(local_c + 0x10) + *piVar7 * 4) + 4) & 0x80) == 0) ||
                (piVar3[1] != -1)) || (piVar7[1] != -1)) {
              if (((piVar3[1] == piVar7[1]) && (piVar3[2] == piVar7[2])) && (piVar3[3] == piVar7[3])
                 ) break;
            }
            else if (*(double *)(piVar3 + 4) == *(double *)(piVar7 + 4)) break;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < (unsigned int)(local_8));
      }
      local_48[local_8] = uVar4;
      if (local_8 == uVar4) {
        local_18 = local_18 + 1;
      }
      local_8 = local_8 + 1;
    } while ((unsigned int)(local_8) < (unsigned int)(param_3));
  }
  local_20 = 0xffffffff;
  local_24 = (int *)0x0;
  local_8 = 0;
  if (param_3 != 0) {
    local_14 = (int *)((int)local_48 - (int)param_2);
    local_10 = param_2;
    do {
      if (local_8 == *(uint *)((int)local_10 + (int)local_14)) {
        piVar3 = *(int **)(*(int *)(local_c + 0x14) + *local_10 * 4);
        if (*(int *)(local_c + 0x60) == *piVar3) {
          param_7 = 0;
          local_1c = (int *)local_18;
          piVar7 = param_2;
          do {
            if (((param_7 == *(uint *)((int)local_14 + (int)piVar7)) &&
                (piVar5 = *(int **)(*(int *)(local_c + 0x14) + *piVar7 * 4),
                *(int *)(local_c + 0x60) == *piVar5)) && (piVar3[2] == piVar5[2])) {
              local_1c = (int *)((int)local_1c - 1);
            }
            param_7 = param_7 + 1;
            piVar7 = piVar7 + 1;
          } while ((unsigned int)(param_7) < (unsigned int)(param_3));
          if (((uint)(*(int *)(param_4 + piVar3[2] * 4) + (int)local_1c) < 5) &&
             ((unsigned int)(local_1c) < (unsigned int)(local_20))) {
            local_20 = (uint)local_1c;
            local_24 = (int *)local_8;
          }
        }
      }
      local_8 = local_8 + 1;
      local_10 = local_10 + 1;
    } while ((unsigned int)(local_8) < (unsigned int)(param_3));
    if (local_20 != 0xffffffff) {
      iVar8 = *(int *)(*(int *)(*(int *)(local_c + 0x14) + param_2[(int)local_24] * 4) + 8);
      local_1c = (int *)0x0;
      goto LAB_005fb35f;
    }
  }
  if (param_5 == (int *)0x0) {
    return 0;
  }
  iVar8 = *param_5;
  *param_5 = iVar8 + 1;
  local_1c = (int *)0x1;
LAB_005fb35f:
  local_8 = 0;
  local_18 = iVar8;
  if (param_3 != 0) {
    local_14 = (int *)((int)local_48 - (int)param_2);
    piVar3 = param_2;
    do {
      if ((local_8 == *(uint *)((int)piVar3 + (int)local_14)) &&
         ((piVar7 = *(int **)(*(int *)(local_c + 0x14) + *piVar3 * 4),
          *(int *)(local_c + 0x60) != *piVar7 || (iVar8 != piVar7[2])))) {
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      local_8 = local_8 + 1;
      *(undefined4 *)(((int)local_38 - (int)param_2) + (int)piVar3) = uVar6;
      piVar3 = piVar3 + 1;
    } while ((unsigned int)(local_8) < (unsigned int)(param_3));
  }
  local_8 = 0;
  if (param_3 != 0) {
    param_5 = param_2;
    local_10 = (int *)((int)local_38 - (int)param_2);
    do {
      iVar8 = local_c;
      if (*(int *)((int)local_10 + (int)param_5) == 0) {
        param_7 = 0;
        local_20 = 0;
        local_24 = (int *)param_3;
        piVar3 = param_2;
        do {
          if (*(int *)((int)local_10 + (int)piVar3) == 0) {
            piVar7 = *(int **)(*(int *)(local_c + 0x14) + *piVar3 * 4);
            piVar5 = *(int **)(*(int *)(local_c + 0x14) + param_2[local_8] * 4);
            if (((*piVar5 == *piVar7) && (piVar5[1] == piVar7[1])) && (piVar5[2] == piVar7[2])) {
              param_7 = param_7 + 1;
            }
            local_20 = local_20 + 1;
          }
          piVar3 = piVar3 + 1;
          local_24 = (int *)((int)local_24 - 1);
        } while (local_24 != (int *)0x0);
        if ((local_1c == (int *)0x0) &&
           (piVar3 = *(int **)(*(int *)(local_c + 0x14) + *param_5 * 4),
           *(int *)(local_c + 0x60) == *piVar3)) {
          iVar2 = piVar3[2];
          piVar3 = (int *)(param_4 + local_18 * 4);
          if ((*(int *)(param_4 + iVar2 * 4) - param_7) + local_20 + *piVar3 < 5) {
            param_7 = 0;
            local_20 = (int)param_2 - (int)local_38;
            do {
              local_24 = (int *)(param_7 * 4);
              local_14 = local_38 + param_7;
              if (((*local_14 == 0) &&
                  (piVar7 = *(int **)(*(int *)(iVar8 + 0x14) +
                                     *(int *)((int)local_38 + local_20 + param_7 * 4) * 4),
                  *(int *)(iVar8 + 0x60) == *piVar7)) && (iVar2 == piVar7[2])) {
                *local_14 = 1;
              }
              param_7 = param_7 + 1;
            } while ((unsigned int)(param_7) < (unsigned int)(param_3));
            param_7 = 0;
            if (*(int *)(iVar8 + 8) != 0) {
              do {
                piVar7 = *(int **)(*(int *)(iVar8 + 0x14) + param_7 * 4);
                if ((*(int *)(iVar8 + 0x60) == *piVar7) && (iVar2 == piVar7[2])) {
                  piVar7[2] = local_18;
                  piVar7 = (int *)(*(int *)(*(int *)(iVar8 + 0x14) + param_7 * 4) + 0xc);
                  *piVar7 = *piVar7 + *piVar3;
                }
                param_7 = param_7 + 1;
              } while ((unsigned int)(param_7) < *(uint *)(iVar8 + 8));
            }
            piVar7 = (int *)(param_4 + iVar2 * 4);
            *piVar3 = *piVar3 + *piVar7;
            *piVar7 = 0;
            goto LAB_005fb673;
          }
        }
        iVar2 = FUN_005f752b(param_7 & 0xffffff | 0x10000000,0xffffffff,0xffffffff);
        iVar8 = local_c;
        if (iVar2 == -1) {
          return 0;
        }
        iVar2 = *(int *)(*(int *)(local_c + 0x18) + iVar2 * 4);
        FUN_005f7a42();
        piVar3 = *(int **)(*(int *)(iVar8 + 0x14) + *param_5 * 4);
        local_24 = (int *)*piVar3;
        local_14 = (int *)piVar3[2];
        local_20 = piVar3[1];
        iVar8 = 0;
        param_7 = param_3;
        piVar3 = param_2;
        do {
          if ((((*(int *)((int)local_10 + (int)piVar3) == 0) &&
               (piVar7 = *(int **)(*(int *)(local_c + 0x14) + *piVar3 * 4),
               local_24 == (int *)*piVar7)) && (local_20 == piVar7[1])) &&
             (local_14 == (int *)piVar7[2])) {
            local_28 = (int *)(param_4 + local_18 * 4);
            uVar6 = FUN_005f74cf(*(undefined4 *)(local_c + 0x60),local_18,*local_28,0);
            *(undefined4 *)(iVar8 + *(int *)(iVar2 + 0x10)) = uVar6;
            *(int *)(iVar8 + *(int *)(iVar2 + 8)) = *piVar3;
            if (*(int *)(iVar8 + *(int *)(iVar2 + 0x10)) != -1) {
              FUN_005f7cfc();
              *(undefined4 *)
               (*(int *)(*(int *)(local_c + 0x14) + *(int *)(iVar8 + *(int *)(iVar2 + 0x10)) * 4) +
               0x18) = *(undefined4 *)(*(int *)(*(int *)(local_c + 0x14) + *piVar3 * 4) + 0x18);
              *(undefined4 *)
               (*(int *)(*(int *)(local_c + 0x14) + *(int *)(iVar8 + *(int *)(iVar2 + 0x10)) * 4) +
               0x20) = *(undefined4 *)(*(int *)(*(int *)(local_c + 0x14) + *piVar3 * 4) + 0x20);
              *(undefined4 *)(*(int *)(*(int *)(local_c + 0x14) + *piVar3 * 4) + 0x20) =
                   *(undefined4 *)(iVar8 + *(int *)(iVar2 + 0x10));
            }
            *piVar3 = *(int *)(iVar8 + *(int *)(iVar2 + 0x10));
            *(undefined4 *)((int)local_10 + (int)piVar3) = 1;
            *local_28 = *local_28 + 1;
            iVar8 = iVar8 + 4;
          }
          piVar3 = piVar3 + 1;
          param_7 = param_7 - 1;
        } while (param_7 != 0);
      }
LAB_005fb673:
      local_8 = local_8 + 1;
      param_5 = param_5 + 1;
    } while ((unsigned int)(local_8) < (unsigned int)(param_3));
  }
  if (param_3 != 0) {
    piVar3 = param_2;
    do {
      *piVar3 = param_2[*(int *)((int)piVar3 + ((int)local_48 - (int)param_2))];
      piVar3 = piVar3 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return 1;
}
