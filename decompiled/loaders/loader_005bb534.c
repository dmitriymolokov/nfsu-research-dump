/* spd-match: far pct=4.98 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_c2440_uint_int/batches/20260724T134631Z_w0_tp1 */
#include "ghidra_compat.h"

int __cdecl FUN_005b5e6c(...);
int __cdecl FUN_005ba70c(...);
int __cdecl FUN_005baccd(...);
int __cdecl FUN_005d78db(...);
int __cdecl FUN_005d7ac2(...);
int __cdecl FUN_005d7db0(...);
int __cdecl FUN_005d8121(...);
int __cdecl FUN_005d8188(...);
int __cdecl FUN_005d81d3(...);
int __cdecl FUN_005d8213(...);
int __cdecl FUN_005d844d(...);
int __cdecl FUN_005d8a65(...);
extern unsigned char *DAT_0069ba10;
extern int DAT_0069ba18;
extern unsigned char *DAT_0069ba2c;
extern int DAT_0069ba3c;
extern void *PTR_DAT_0069ba34;
extern void LAB_005bb5d0(...);
extern void LAB_005bb5d5(...);
extern void LAB_005bb6a8(...);
extern void LAB_005bb723(...);
extern void LAB_005bb81e(...);
extern void LAB_005bb998(...);
extern void LAB_005bbb6a(...);

struct ThisCallBox {
  undefined4 FUN_005bb534(int param_2, int *param_3, int *param_4, int *param_5);
};
undefined4 ThisCallBox::FUN_005bb534(int param_2, int *param_3, int *param_4, int *param_5) {
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  byte *pbVar12;
  uint uVar13;
  bool bVar14;
  undefined1 local_168 [16];
  int local_158;
  uint local_150;
  int local_14c;
  int local_12c [30];
  int aiStack_b4 [5];
  undefined1 local_a0 [20];
  undefined4 local_8c;
  undefined1 local_7c [20];
  uint local_68;
  uint local_58 [16];
  int local_18;
  undefined **local_14;
  undefined **local_10;
  int *local_c;
  uint local_8;
  
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (int *)0x0) {
    *param_5 = 0;
  }
  uVar9 = 0;
  uVar13 = (uint)param_3;
  if (param_3 != (int *)0x0) {
    do {
      iVar3 = *(int *)(uVar13 + 8);
      if ((((iVar3 == 0) || (*(int *)(iVar3 + 4) != 0xc)) || (*(int *)(iVar3 + 0x10) == 0)) ||
         (*(int *)(*(int *)(iVar3 + 0x10) + 4) != 8)) break;
      uVar13 = *(uint *)(uVar13 + 0xc);
      uVar9 = uVar9 + 1;
    } while (uVar13 != 0);
    if ((uVar13 != 0) || (4 < uVar9)) {
      return 1;
    }
  }
  local_18 = 0;
  local_c = &DAT_0069ba3c;
  local_10 = (undefined **)0x0;
  local_58[0xf] = ((int)this);
  do {
    pbVar12 = (byte *)local_c[-10];
    pbVar2 = *(byte **)(param_2 + 8);
    do {
      bVar1 = *pbVar2;
      bVar14 = bVar1 < *pbVar12;
      if (bVar1 != *pbVar12) {
LAB_005bb5d0:
        iVar3 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        goto LAB_005bb5d5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar14 = bVar1 < pbVar12[1];
      if (bVar1 != pbVar12[1]) goto LAB_005bb5d0;
      pbVar2 = pbVar2 + 2;
      pbVar12 = pbVar12 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_005bb5d5:
    if (iVar3 == 0) {
      local_58[5] = 0xffffffff;
      local_58[6] = 0xffffffff;
      local_58[7] = 0xffffffff;
      local_58[8] = 0xffffffff;
      local_58[9] = 0xffffffff;
      local_58[10] = 0x1d;
      local_58[0xb] = 0x1d;
      local_58[0xc] = 0x1d;
      local_58[0xd] = 0x1d;
      local_58[0xe] = 0x1d;
      local_58[0] = 5;
      local_58[1] = 5;
      local_58[2] = 5;
      local_58[3] = 5;
      local_58[4] = 5;
      FUN_005d8121();
      FUN_005d8121();
      local_14 = (undefined **)0x1;
      local_8 = (uint)param_3;
      piVar11 = local_c;
      if (param_3 == (int *)0x0) {
LAB_005bb6a8:
        piVar11 = local_c;
        if (local_c[-9] != 0) {
          if (local_58[local_c[-8]] == 5) {
            local_58[local_c[-8]] = *(uint *)local_c[-7];
          }
          if (local_58[piVar11[-6] + 10] == 0x1d) {
            local_58[piVar11[-6] + 10] = *(uint *)piVar11[-5];
          }
        }
        local_8 = 0;
        piVar11 = local_c + -5;
        do {
          puVar4 = (uint *)piVar11[-2];
          puVar5 = local_58 + local_8;
          uVar13 = *puVar5;
          if (uVar13 == 5) {
            if (puVar4 != (uint *)0x0) {
              *puVar5 = *puVar4;
            }
          }
          else {
            if ((uVar13 == 0) && ((uVar9 = *puVar4, uVar9 == 1 || (uVar9 == 2)))) {
              *puVar5 = uVar9;
            }
            else {
              for (; (*puVar4 != 5 && (uVar13 != *puVar4)); puVar4 = puVar4 + 1) {
              }
            }
            if (*puVar4 == 5) break;
          }
          puVar5 = (uint *)*piVar11;
          uVar13 = local_58[local_8 + 10];
          puVar4 = puVar5;
          if (uVar13 == 0x1d) {
            if (puVar5 != (uint *)0x0) {
              uVar13 = *puVar5;
LAB_005bb81e:
              local_58[local_8 + 10] = uVar13;
            }
          }
          else {
            for (; (*puVar4 != 0x1d && (uVar13 != *puVar4)); puVar4 = puVar4 + 1) {
            }
            if (*puVar4 == 0x1d) {
              uVar13 = *puVar5;
              goto LAB_005bb81e;
            }
          }
          if (local_58[local_8 + 5] == 0xffffffff) {
            local_58[local_8 + 5] = 1;
          }
          local_8 = local_8 + 1;
          piVar11 = piVar11 + 8;
        } while (local_8 < 5);
        if (local_8 == 5) {
          FUN_005d8188();
          FUN_005d8188();
          break;
        }
      }
      else {
        do {
          if (piVar11[-2] == 0) break;
          iVar3 = *(int *)(*(int *)(local_8 + 8) + 0x10);
          iVar8 = *piVar11;
          uVar13 = local_58[iVar8];
          if ((uVar13 == 5) ||
             ((uVar13 == 0 && ((*(int *)(iVar3 + 0x10) == 1 || (*(int *)(iVar3 + 0x10) == 2)))))) {
            local_58[iVar8] = *(uint *)(iVar3 + 0x10);
            aiStack_b4[iVar8] = piVar11[1];
          }
          else {
            if (*(uint *)(iVar3 + 0x10) == 0) {
              if ((uVar13 == 0) || (uVar13 == 1)) goto LAB_005bb723;
              bVar14 = uVar13 == 2;
            }
            else {
              bVar14 = *(uint *)(iVar3 + 0x10) == uVar13;
            }
            if (!bVar14) break;
          }
LAB_005bb723:
          iVar8 = piVar11[2];
          uVar13 = local_58[iVar8 + 10];
          if (uVar13 == 0x1d) {
            local_58[iVar8 + 10] = *(uint *)(iVar3 + 0x14);
            aiStack_b4[iVar8] = piVar11[3];
          }
          else {
            local_8c = *(undefined4 *)(iVar3 + 0x14);
            local_68 = uVar13;
            iVar8 = FUN_005baccd(local_7c,local_a0,local_58 + piVar11[2] + 10);
            if (iVar8 < 0) break;
          }
          iVar8 = *(int *)(iVar3 + 0x10);
          if (iVar8 != 0) {
            uVar13 = piVar11[4];
            if ((int)uVar13 < 0) {
              if (*(uint *)(iVar3 + 0x18) < local_58[~uVar13 + 5]) {
                local_58[~uVar13 + 5] = *(uint *)(iVar3 + 0x18);
              }
            }
            else if (*(uint *)(iVar3 + 0x18) < uVar13) break;
            if (iVar8 != 0) {
              uVar13 = piVar11[5];
              if ((int)uVar13 < 0) {
                if (*(uint *)(iVar3 + 0x1c) < local_58[~uVar13 + 5]) {
                  local_58[~uVar13 + 5] = *(uint *)(iVar3 + 0x1c);
                }
              }
              else if (*(uint *)(iVar3 + 0x1c) < uVar13) break;
            }
          }
          if (((*(byte *)(piVar11 + -1) & 0x20) != 0) && (iVar3 = FUN_005ba70c(iVar3), iVar3 != 0))
          break;
          local_8 = *(uint *)(local_8 + 0xc);
          local_14 = (undefined **)((int)local_14 + 1);
          piVar11 = piVar11 + 8;
        } while (local_8 != 0);
        if ((local_8 == 0) &&
           (((undefined **)0x4 < local_14 || (local_c[(int)local_14 * 8 + -10] == 0))))
        goto LAB_005bb6a8;
      }
      FUN_005d8188();
      FUN_005d8188();
    }
    local_18 = local_18 + 1;
    local_10 = local_10 + 0x29;
    local_c = local_c + 0x29;
  } while (local_10 < (undefined **)0x31f8);
  if (local_18 == 0x4e) {
    return 1;
  }
  if (param_4 != (int *)0x0) {
    iVar3 = 5;
    do {
      FUN_005d8121();
      iVar8 = local_18;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    uVar13 = 0;
    puVar5 = &local_150;
    puVar4 = (uint *)(&DAT_0069ba2c + local_18 * 0xa4);
    do {
      if (puVar4[-6] == 0) break;
      uVar9 = puVar4[-5];
      if (uVar9 != 0) {
        puVar5[-2] = (unsigned int)(local_58[puVar4[-4]]);
        puVar5[-1] = (unsigned int)(local_58[puVar4[-2] + 10]);
        uVar10 = *puVar4;
        if ((int)uVar10 < 0) {
          uVar10 = local_58[~uVar10 + 5];
        }
        *puVar5 = uVar10;
        uVar10 = puVar4[1];
        if ((int)uVar10 < 0) {
          uVar10 = local_58[~uVar10 + 5];
        }
        puVar5[1] = uVar10;
        puVar5[2] = uVar9 & 0xc00;
        if ((uVar13 == 0) || ((uVar9 & 0x20) == 0)) {
          puVar5[2] = uVar9 & 0xc00 | 0x200;
        }
      }
      uVar13 = uVar13 + 1;
      puVar4 = puVar4 + 8;
      puVar5 = puVar5 + 9;
    } while (uVar13 < 5);
    if ((((local_158 == 1) || (local_158 == 2)) && (local_14c == 1)) && (local_150 == 1)) {
      local_158 = 0;
    }
    pvVar6 = _malloc(0x40);
    if (pvVar6 == (void *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7 = (undefined4 *)FUN_005d8213();
    }
    if (puVar7 == (undefined4 *)0x0) {
LAB_005bb998:
      FUN_005b5e6c(local_168,0x24,5,FUN_005d8188);
      return 0x8007000e;
    }
    if ((&DAT_0069ba18)[iVar8 * 0x29] != 0) {
      iVar3 = FUN_005d81d3();
      puVar7[8] = iVar3;
      if (iVar3 == 0) {
LAB_005bbb6a:
        (**(code **)*puVar7)(1);
        goto LAB_005bb998;
      }
    }
    param_3 = (int *)(unsigned int)(puVar7 + 9);
    if ((&PTR_DAT_0069ba34)[iVar8 * 0x29] != (undefined *)0x0) {
      piVar11 = local_12c;
      local_10 = (undefined **)(unsigned int)(&PTR_DAT_0069ba34 + iVar8 * 0x29);
      do {
        local_14 = local_10;
        pvVar6 = _malloc(0x14);
        if (pvVar6 == (void *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = FUN_005d78db(0,0,"Decls");
        }
        *param_3 = iVar3;
        if (iVar3 == 0) goto LAB_005bbb6a;
        pvVar6 = _malloc(0x30);
        if (pvVar6 == (void *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = FUN_005d7db0(1,0,0,0);
        }
        local_58[0xf] = iVar3;
        if (iVar3 == 0) goto LAB_005bbb6a;
        *(int *)(*param_3 + 8) = iVar3;
        pvVar6 = _malloc(0x30);
        if (pvVar6 == (void *)0x0) {
          iVar8 = 0;
        }
        else {
          iVar8 = FUN_005d7ac2(param_2);
        }
        *(int *)(iVar3 + 0x14) = iVar8;
        if (iVar8 == 0) goto LAB_005bbb6a;
        *(undefined **)(iVar8 + 0x18) = *local_10;
        pvVar6 = _malloc(0x3c);
        if (pvVar6 == (void *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = FUN_005d844d();
        }
        if (iVar3 == 0) goto LAB_005bbb6a;
        *(int *)(local_58[0xf] + 0x18) = iVar3;
        *(undefined4 *)(iVar3 + 0x10) = 0xffffffff;
        *(int *)(iVar3 + 0x14) = piVar11[1] * *piVar11;
        *(undefined4 *)(iVar3 + 0x18) = 2;
        *(undefined **)(iVar3 + 0x1c) = local_10[1];
        iVar8 = FUN_005d81d3();
        *(int *)(iVar3 + 0x20) = iVar8;
        if (iVar8 == 0) goto LAB_005bbb6a;
        param_3 = (int *)(*param_3 + 0xc);
        local_14 = local_14 + 8;
        piVar11 = piVar11 + 9;
        local_10 = local_14;
      } while (*local_14 != (undefined *)0x0);
    }
    *param_4 = (int)puVar7;
    FUN_005b5e6c(local_168,0x24,5,FUN_005d8188);
  }
  iVar3 = local_18;
  iVar8 = 0;
  if (param_5 == (int *)0x0) {
    return 0;
  }
  pvVar6 = _malloc(0x14);
  if (pvVar6 != (void *)0x0) {
    iVar8 = FUN_005d78db(0,0,"Values");
  }
  if (iVar8 != 0) {
    pvVar6 = _malloc(0x40);
    if (pvVar6 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_005d8a65(2,*(undefined4 *)(&DAT_0069ba10 + iVar3 * 0xa4),param_2);
    }
    *(int *)(iVar8 + 8) = iVar3;
    if (iVar3 != 0) {
      *param_5 = iVar8;
      return 0;
    }
  }
  if ((param_4 != (int *)0x0) && ((undefined4 *)*param_4 != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)*param_4)(1);
  }
  return 0x8007000e;
}
