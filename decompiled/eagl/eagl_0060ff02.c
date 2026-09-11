/* spd-match: far pct=5.27 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_005f7186();
int __cdecl FUN_005f7709();
int __cdecl FUN_005f7760();
int __cdecl FUN_005f7a42();
int __cdecl FUN_006154dc();
int __cdecl FUN_0061556b();
int __cdecl FUN_0061674c();
extern void LAB_0060ffdb(void);

int __fastcall FUN_0060ff02(int *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  undefined4 *puVar11;
  int *piVar12;
  int iVar13;
  undefined4 *puVar14;
  bool bVar15;
  int local_78 [8];
  undefined1 local_58 [4];
  int *local_54;
  int *local_50;
  uint local_4c;
  uint local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  uint local_3c;
  undefined4 *local_38;
  int *local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  uint *local_24;
  uint local_20;
  uint *local_1c;
  uint *local_18;
  int *local_14;
  uint local_10;
  uint local_c;
  int *local_8;
  
  puVar1 = (uint *)param_1[0x26];
  uVar8 = *puVar1 & 0xffffff;
  local_18 = puVar1;
  local_c = uVar8;
  if (2 < uVar8) {
    local_1c = (uint *)FUN_0061556b(0x10000002,puVar1,0,2,1);
    if ((((local_1c != (uint *)0x0) ||
         (local_1c = (uint *)FUN_0061556b(0x10000003,puVar1,0,2,1), local_1c != (uint *)0x0)) ||
        (local_1c = (uint *)FUN_0061556b(0x10000004,puVar1,0,2,1), local_1c != (uint *)0x0)) &&
       (**(int **)(param_1[5] + *(int *)local_1c[4] * 4) == param_1[0x17])) {
      local_38 = (undefined4 *)0x1;
      uVar10 = local_3c;
      if ((*local_1c & 0xffffff) == 0) {
LAB_0060ffdb:
        local_3c = uVar10;
        pvVar4 = _malloc(0x38);
        if (pvVar4 == (void *)0x0) {
          local_10 = 0;
        }
        else {
          local_10 = FUN_005f7709();
        }
        if (local_10 != 0) {
          iVar5 = FUN_005f7760(uVar8 | 0x30000000,puVar1[1],local_1c[3],0);
          if ((-1 < iVar5) && (iVar5 = FUN_005f7a42(puVar1), -1 < iVar5)) {
            puVar7 = (undefined4 *)local_1c[4];
            puVar11 = *(undefined4 **)(local_10 + 0x10);
            for (uVar8 = *(uint *)(local_10 + 0xc) & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
              *puVar11 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar11 = puVar11 + 1;
            }
            for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
              *(undefined1 *)puVar11 = *(undefined1 *)puVar7;
              puVar7 = (undefined4 *)((int)puVar7 + 1);
              puVar11 = (undefined4 *)((int)puVar11 + 1);
            }
            puVar7 = (undefined4 *)local_18[2];
            puVar11 = *(undefined4 **)(local_10 + 8);
            for (uVar8 = *(uint *)(local_10 + 4) & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
              *puVar11 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar11 = puVar11 + 1;
            }
            for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
              *(undefined1 *)puVar11 = *(undefined1 *)puVar7;
              puVar7 = (undefined4 *)((int)puVar7 + 1);
              puVar11 = (undefined4 *)((int)puVar11 + 1);
            }
            *local_1c = 0;
            if (param_1[0x26] != 0) {
              FUN_005f7186(1);
            }
            *(uint *)(param_1[6] + param_1[0x25] * 4) = local_10;
            param_1[0x26] = local_10;
            return 0;
          }
          FUN_005f7186(1);
          return iVar5;
        }
        return -0x7ff8fff2;
      }
      local_50 = *(int **)puVar1[4];
      puVar7 = (undefined4 *)local_1c[2];
      local_3c = *local_1c & 0xffffff;
      do {
        if (((int *)*puVar7 != local_50) ||
           ((*(uint *)(*(int *)(param_1[5] + (int)*puVar7 * 4) + 0x20) & 0xffe00) != 0)) {
          local_38 = (undefined4 *)0x0;
        }
        puVar7 = puVar7 + 1;
        local_3c = local_3c - 1;
      } while (local_3c != 0);
      local_3c = 0;
      uVar10 = 0;
      if (local_38 != (undefined4 *)0x0) goto LAB_0060ffdb;
    }
    if ((uVar8 == 3) && (0x1ff < (param_1[0xc] & 0xffffU))) {
      local_18 = (uint *)param_1[0x26];
      iVar5 = 3;
      bVar15 = true;
      piVar6 = (int *)local_18[2];
      piVar9 = (int *)local_18[2] + 3;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar15 = *piVar6 == *piVar9;
        piVar6 = piVar6 + 1;
        piVar9 = piVar9 + 1;
      } while (bVar15);
      if ((((bVar15) &&
           (local_34 = (int *)FUN_0061556b(0x16000001,local_18,0,2,1), local_34 != (undefined4 *)0x0
           )) && (local_38 = (undefined4 *)FUN_0061556b(0x12000001,local_34,0,2,1),
                 local_38 != (undefined4 *)0x0)) &&
         ((local_1c = (uint *)FUN_0061556b(0x25000003,local_38,&local_24,2,1),
          local_1c != (uint *)0x0 ||
          (local_1c = (uint *)FUN_0061556b(0x25000004,local_38,&local_24,2,1),
          local_1c != (uint *)0x0)))) {
        piVar6 = *(int **)(param_1[5] + *(int *)local_18[2] * 4);
        local_50 = *(int **)(param_1[5] + *(int *)local_1c[4] * 4);
        local_3c = *local_1c & 0xffffff;
        local_30 = local_3c * 4;
        iVar5 = 3;
        bVar15 = true;
        piVar9 = (int *)(local_1c[2] + local_30);
        piVar12 = (int *)local_18[2];
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar15 = *piVar9 == *piVar12;
          piVar9 = piVar9 + 1;
          piVar12 = piVar12 + 1;
        } while (bVar15);
        if ((bVar15) && ((*piVar6 != *local_50 || (piVar6[2] != local_50[2])))) {
          pvVar4 = _malloc(0x38);
          if (pvVar4 == (void *)0x0) {
            local_10 = 0;
          }
          else {
            local_10 = FUN_005f7709();
          }
          if (local_10 == 0) {
            return -0x7ff8fff2;
          }
          local_50 = (int *)(local_3c & 0xffffff);
          iVar5 = FUN_005f7760((uint)local_50 | 0xf2000000,local_3c,local_3c,0);
          if (iVar5 < 0) {
            return iVar5;
          }
          iVar5 = FUN_005f7a42(local_1c);
          if (iVar5 < 0) {
            return iVar5;
          }
          puVar7 = (undefined4 *)local_1c[4];
          puVar11 = *(undefined4 **)(local_10 + 0x10);
          for (uVar8 = local_30 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar11 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar8 = local_30 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          puVar7 = (undefined4 *)(local_1c[2] + local_30);
          puVar11 = *(undefined4 **)(local_10 + 8);
          for (uVar8 = local_30 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar11 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar8 = local_30 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          iVar5 = (**(code **)(*param_1 + 0x24))(local_10,0);
          puVar1 = local_1c;
          puVar7 = local_38;
          if (iVar5 == 0) {
            *local_18 = 0;
            *local_34 = 0;
            *local_38 = 0;
            *local_1c = 0;
            iVar5 = (**(code **)(*param_1 + 0x34))(local_10,local_24);
            if (iVar5 == 0) {
              if (*(int *)(param_1[6] + (int)local_24 * 4) != 0) {
                FUN_005f7186(1);
              }
              *(uint *)(param_1[6] + (int)local_24 * 4) = local_10;
              return 0;
            }
            *local_18 = 0x30000003;
            *local_34 = 0x16000001;
            *puVar7 = 0x12000001;
            *puVar1 = (uint)local_50 | 0x25000000;
          }
          FUN_005f7186(1);
        }
      }
    }
  }
  iVar5 = param_1[0x26];
  iVar13 = param_1[5];
  piVar6 = *(int **)(iVar13 + **(int **)(iVar5 + 0x10) * 4);
  piVar9 = *(int **)(iVar5 + 8);
  local_34 = *(int **)(iVar13 + *piVar9 * 4);
  local_1c = (uint *)(local_c * 4);
  local_24 = *(uint **)(iVar13 + piVar9[local_c] * 4);
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  local_78[4] = 0;
  local_78[5] = 0;
  local_78[6] = 0;
  local_78[7] = 0;
  iVar13 = piVar6[3];
  local_78[iVar13] = iVar5;
  local_78[iVar13 + 4] = iVar5;
  local_28 = ((local_c != 3) - 1 & 0xfff80000) + 0xf0000;
  local_54 = piVar6;
  (**(code **)(*param_1 + 0x68))(piVar9,local_c,local_28,&local_40);
  (**(code **)(*param_1 + 0x68))
            (*(int *)(param_1[0x26] + 8) + (int)local_1c,local_c,local_28,local_58);
  local_2c = 0;
  if (param_1[0x18] == *piVar6) {
    local_8 = (int *)piVar6[0xe];
  }
  else {
    local_8 = (int *)param_1[3];
  }
  iVar5 = param_1[0x26];
  if (*(int *)(iVar5 + 4) != 0) {
    piVar6 = *(int **)(iVar5 + 8);
    local_3c = *(int *)(iVar5 + 4);
    do {
      piVar9 = *(int **)(param_1[5] + *piVar6 * 4);
      if (param_1[0x18] == *piVar9) {
        if ((uint)piVar9[0xd] < local_8) {
          local_8 = (int *)piVar9[0xd];
        }
        if (local_2c <= (uint)piVar9[0xb]) {
          local_2c = piVar9[0xb] + 1;
        }
      }
      piVar6 = piVar6 + 1;
      local_3c = local_3c + -1;
    } while (local_3c != 0);
  }
  local_50 = (int *)param_1[0x25];
  local_4c = (uint)local_50;
  local_10 = (int)local_50 + 1;
  local_30 = (uint)local_8;
  local_38 = (undefined4 *)local_2c;
  local_3c = (uint)local_8;
  while (local_10 < (uint)param_1[3]) {
    piVar6 = *(int **)(param_1[6] + local_10 * 4);
    if ((*piVar6 == *(int *)param_1[0x26]) && (piVar6[3] == 1)) {
      iVar5 = param_1[5];
      piVar9 = *(int **)(iVar5 + *(int *)piVar6[4] * 4);
      if (((*piVar9 == *local_54) && ((piVar9[1] == local_54[1] && (piVar9[2] == local_54[2])))) &&
         ((local_78[piVar9[3]] == 0 || (local_78[piVar9[3] + 4] == 0)))) {
        local_20 = 0;
        if (param_1[0x18] == *piVar9) {
          local_8 = (int *)piVar9[0xe];
        }
        else {
          local_8 = (int *)param_1[3];
        }
        local_14 = (int *)piVar6[1];
        if (local_14 != (int *)0x0) {
          local_18 = (uint *)piVar6[2];
          do {
            piVar12 = *(int **)(iVar5 + *local_18 * 4);
            if (param_1[0x18] == *piVar12) {
              if ((uint)piVar12[0xd] < local_8) {
                local_8 = (int *)piVar12[0xd];
              }
              if (local_20 <= (uint)piVar12[0xb]) {
                local_20 = piVar12[0xb] + 1;
              }
            }
            local_18 = local_18 + 1;
            local_14 = (int *)((int)local_14 + -1);
          } while (local_14 != (int *)0x0);
        }
        piVar12 = (int *)piVar6[2];
        local_14 = *(int **)(iVar5 + *piVar12 * 4);
        local_18 = *(uint **)(iVar5 + *(int *)((int)piVar12 + (int)local_1c) * 4);
        (**(code **)(*param_1 + 0x68))(piVar12,local_c,local_28,&local_44);
        (**(code **)(*param_1 + 0x68))(piVar6[2] + (int)local_1c,local_c,local_28,&local_48);
        iVar5 = piVar9[3];
        if ((((local_78[iVar5] == 0) && (local_20 < local_30)) && (local_2c < local_8)) &&
           (((((local_44 == local_40 && (*local_14 == *local_34)) &&
              ((local_14[8] == local_34[8] &&
               ((local_14[1] == local_34[1] && (local_14[2] == local_34[2])))))) &&
             (local_48 == 0xe40000)) &&
            (((*local_18 == *local_24 && (local_18[8] == local_24[8])) &&
             (local_18[1] == local_24[1])))))) {
          local_78[iVar5] = (int)piVar6;
          if (local_2c < local_20) {
            local_2c = local_20;
          }
          if (local_8 < local_30) {
            local_30 = (uint)local_8;
          }
          if ((local_2c <= local_10) && (local_10 < local_30)) {
            local_50 = (int *)local_10;
          }
        }
        if ((((local_78[iVar5 + 4] == 0) && (local_20 < local_3c)) &&
            ((local_38 < local_8 &&
             (((((local_44 == local_40 && (*local_14 == *local_34)) && (local_14[8] == local_34[8]))
               && ((local_14[1] == local_34[1] && (local_48 == 0xe40000)))) &&
              (*local_18 == *local_24)))))) &&
           (((local_18[8] == local_24[8] && (local_18[1] == local_24[1])) &&
            (local_18[2] == local_24[2])))) {
          local_78[iVar5 + 4] = (int)piVar6;
          if (local_38 < local_20) {
            local_38 = (undefined4 *)local_20;
          }
          if (local_8 < local_3c) {
            local_3c = (uint)local_8;
          }
          if ((local_38 <= local_10) && (local_10 < local_3c)) {
            local_4c = local_10;
          }
        }
      }
    }
    local_10 = local_10 + 1;
  }
  uVar10 = 0;
  uVar8 = 0;
  do {
    if (local_78[uVar10] == 0) break;
    uVar10 = uVar10 + 1;
  } while (uVar10 < 4);
  do {
    if (local_78[uVar8 + 4] == 0) break;
    uVar8 = uVar8 + 1;
  } while (uVar8 < 4);
  uVar3 = (uint)(uVar10 < uVar8);
  local_8 = local_78 + 4;
  if (uVar3 == 0) {
    local_8 = local_78;
    uVar8 = uVar10;
  }
  local_38 = (undefined4 *)uVar8;
  local_30 = uVar3;
  if (uVar8 < 4) {
    piVar6 = local_8 + uVar8;
    for (iVar5 = 4 - uVar8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar6 = 0;
      piVar6 = piVar6 + 1;
    }
  }
  if (local_c == 3) {
    if (uVar8 == 2) {
      local_20 = 0xf7000003;
    }
    else if (uVar8 == 3) {
      local_20 = 0xf8000003;
    }
    else {
      if (uVar8 != 4) {
        return 1;
      }
      local_20 = 0xf9000003;
    }
  }
  else {
    if (local_c != 4) {
      return 1;
    }
    if (uVar8 == 3) {
      local_20 = 0xf8000004;
    }
    else {
      if (uVar8 != 4) {
        return 1;
      }
      local_20 = 0xf9000004;
    }
  }
  local_54 = (int *)(-(uint)(uVar3 != 0) & local_c);
  iVar13 = (~-(uint)(uVar3 != 0) & local_c) * 4;
  piVar6 = (int *)(*(int *)(param_1[0x26] + 8) + iVar13);
  iVar5 = param_1[5];
  local_44 = *(undefined4 **)(iVar5 + *piVar6 * 4);
  uVar8 = 0;
  if (local_c != 0) {
    do {
      local_44 = *(undefined4 **)(iVar5 + *piVar6 * 4);
      if (local_44[3] != uVar8) {
        return 1;
      }
      uVar8 = uVar8 + 1;
      piVar6 = piVar6 + 1;
    } while (uVar8 < local_c);
  }
  uVar8 = 0;
  if (param_1[0x3b] != 0) {
    do {
      if ((local_8[uVar8] != 0) &&
         ((*(byte *)(*(int *)(param_1[4] +
                             **(int **)(iVar5 + *(int *)(iVar13 + *(int *)(local_8[uVar8] + 8)) * 4)
                             * 4) + 5) & 1) == 0)) {
        return 1;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 4);
  }
  local_48 = 0xffffffff;
  local_24 = (uint *)0xffffffff;
  local_3c = 0xffffffff;
  uVar8 = 0;
  do {
    if (local_8[uVar8] != 0) {
      uVar10 = *(uint *)(*(int *)(iVar5 + *(int *)(iVar13 + *(int *)(local_8[uVar8] + 8)) * 4) + 8);
      if (uVar8 < local_3c) {
        local_3c = uVar8;
      }
      if (uVar10 < local_48) {
        local_48 = uVar10;
      }
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 4);
  uVar8 = 0;
  do {
    if (local_8[uVar8] != 0) {
      iVar2 = *(int *)(*(int *)(iVar5 + *(int *)(iVar13 + *(int *)(local_8[uVar8] + 8)) * 4) + 8);
      if (local_24 == (uint *)0xffffffff) {
        local_24 = (uint *)(iVar2 - uVar8);
      }
      else if ((int)local_24 + uVar8 != iVar2) break;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 4);
  local_34 = (int *)iVar13;
  if (uVar8 < 4) {
    local_24 = (uint *)(local_48 - local_3c);
    uVar8 = 0;
    do {
      if (((local_8[uVar8] != 0) &&
          (iVar2 = *(int *)(iVar5 + *(int *)(iVar13 + *(int *)(local_8[uVar8] + 8)) * 4),
          *(int *)(iVar2 + 8) != (int)local_24 + uVar8)) && (*(int *)(iVar2 + 0x1c) != 0)) {
        return 1;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 4);
    uVar8 = 0;
    do {
      if ((local_8[uVar8] != 0) &&
         (iVar5 = FUN_006154dc(*local_44,
                               *(undefined4 *)
                                (*(int *)(param_1[5] +
                                         *(int *)(iVar13 + *(int *)(local_8[uVar8] + 8)) * 4) + 8),
                               (int)local_24 + uVar8), iVar5 < 0)) {
        return 1;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 4);
  }
  local_10 = 0;
  do {
    if (local_8[local_10] != 0) {
      piVar6 = *(int **)(param_1[5] + *(int *)(iVar13 + *(int *)(local_8[local_10] + 8)) * 4);
      iVar5 = *piVar6;
      iVar2 = piVar6[2];
      uVar8 = 0;
      if (param_1[2] != 0) {
        do {
          piVar6 = *(int **)(param_1[5] + uVar8 * 4);
          if ((iVar5 == *piVar6) && (iVar2 == piVar6[2])) {
            piVar6[7] = 1;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < (uint)param_1[2]);
      }
    }
    local_10 = local_10 + 1;
  } while (local_10 < 4);
  pvVar4 = _malloc(0x38);
  if (pvVar4 == (void *)0x0) {
    local_18 = (uint *)0x0;
  }
  else {
    local_18 = (uint *)FUN_005f7709();
  }
  if (local_18 != (uint *)0x0) {
    iVar5 = FUN_005f7760(local_20,((int)local_38 + 1U) * local_c,local_38,0);
    if (iVar5 < 0) {
      return iVar5;
    }
    iVar5 = FUN_005f7a42(param_1[0x26]);
    if (-1 < iVar5) {
      local_10 = 0;
      puVar7 = (undefined4 *)(*(int *)(param_1[0x26] + 8) + (int)local_54 * 4);
      puVar11 = *(undefined4 **)((int)local_18 + 8);
      for (uVar8 = (uint)local_1c >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar11 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar11 = puVar11 + 1;
      }
      local_3c = 0;
      for (uVar8 = (uint)local_1c & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      local_38 = local_1c;
      do {
        puVar7 = (undefined4 *)local_8[local_10];
        if (puVar7 != (undefined4 *)0x0) {
          *(undefined4 *)(local_3c + *(int *)((int)local_18 + 0x10)) = *(undefined4 *)puVar7[4];
          local_3c = local_3c + 4;
          puVar11 = (undefined4 *)(puVar7[2] + (int)local_34);
          puVar14 = (undefined4 *)(*(int *)((int)local_18 + 8) + (int)local_38);
          for (uVar8 = (uint)local_1c >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar14 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar14 = puVar14 + 1;
          }
          for (uVar8 = (uint)local_1c & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar14 = *(undefined1 *)puVar11;
            puVar11 = (undefined4 *)((int)puVar11 + 1);
            puVar14 = (undefined4 *)((int)puVar14 + 1);
          }
          *puVar7 = 0;
          local_38 = (undefined4 *)((int)local_38 + (int)local_1c);
        }
        local_10 = local_10 + 1;
      } while (local_10 < 4);
      piVar6 = (int *)local_4c;
      if (local_30 == 0) {
        piVar6 = local_50;
      }
      if (*(int *)((int)piVar6 * 4 + param_1[6]) != 0) {
        FUN_005f7186(1);
      }
      *(uint **)((int)piVar6 * 4 + param_1[6]) = local_18;
      FUN_0061674c();
      return 0;
    }
    return iVar5;
  }
  return -0x7ff8fff2;
}
