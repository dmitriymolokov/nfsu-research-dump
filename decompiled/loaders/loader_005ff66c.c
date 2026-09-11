/* spd-match: far pct=4.84 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2143 */
#include "ghidra_compat.h"

int __cdecl FUN_005f74cf();
int __cdecl FUN_005f752b();
int __cdecl FUN_005f7a42();
int __cdecl FUN_005f7a5c();
int __cdecl FUN_005f7a96();
int __cdecl FUN_005f7aa3();
int __cdecl FUN_005f7ac7();
int __cdecl FUN_005f7b57();
int __cdecl FUN_005f8440();
int __cdecl FUN_005f974c();
int __cdecl FUN_005faf93();
extern void LAB_005ff6d1(void);
extern void LAB_005ff72f(void);
extern void LAB_005ff83f(void);
extern void LAB_005ff842(void);
extern void LAB_005ff851(void);
extern void LAB_005ff853(void);
extern void LAB_005ff8a3(void);
extern void LAB_005ffa88(void);
extern void LAB_005ffbcb(void);

int __fastcall FUN_005ff66c(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint *puVar10;
  undefined4 *puVar11;
  undefined4 local_64 [4];
  uint local_54;
  uint *local_50;
  uint *local_4c;
  uint *local_48;
  int local_44;
  undefined4 local_40;
  uint *local_3c;
  int local_38;
  uint local_34;
  uint *local_30;
  uint *local_2c;
  int local_28;
  uint *local_24;
  int local_20;
  uint *local_1c;
  uint *local_18;
  uint *local_14;
  uint local_10;
  uint local_c;
  uint *local_8;
  
  local_38 = -1;
  local_28 = param_1;
  iVar2 = FUN_005f8440();
  if (-1 < iVar2) {
    iVar2 = *(int *)(param_1 + 8);
    local_10 = 0;
    if (iVar2 != 0) {
      puVar8 = *(undefined4 **)(param_1 + 0x14);
      do {
        if ((*(int *)(param_1 + 0x60) == *(int *)*puVar8) &&
           (uVar3 = ((int *)*puVar8)[2], local_10 <= uVar3)) {
          local_10 = uVar3 + 1;
        }
        puVar8 = puVar8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    uVar3 = *(int *)(param_1 + 0xc) + local_10;
    local_3c = _malloc(uVar3 * 4);
    if (local_3c == (uint *)0x0) {
LAB_005ff6d1:
      iVar2 = -0x7ff8fff2;
    }
    else {
      puVar10 = local_3c;
      for (uVar3 = uVar3 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined1 *)puVar10 = 0;
        puVar10 = (uint *)((int)puVar10 + 1);
      }
      uVar3 = 0;
      if (*(int *)(param_1 + 8) != 0) {
        do {
          piVar6 = *(int **)(*(int *)(param_1 + 0x14) + uVar3 * 4);
          if (*(int *)(param_1 + 0x60) == *piVar6) {
            if (local_3c[piVar6[2]] <= (uint)piVar6[3]) {
              local_3c[piVar6[2]] = piVar6[3] + 1;
            }
          }
          piVar6[8] = -1;
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(param_1 + 8));
      }
      local_54 = *(uint *)(param_1 + 0xc);
      local_34 = 0;
      if (local_54 != 0) {
LAB_005ff72f:
        puVar10 = *(uint **)(*(int *)(param_1 + 0x18) + local_34 * 4);
        iVar2 = FUN_005f7a96();
        if (iVar2 == 0) {
          local_2c = (uint *)0x0;
          local_30 = (uint *)0x0;
          iVar2 = FUN_005f7aa3();
          if (iVar2 == 0) {
            local_2c = local_3c;
          }
          iVar2 = FUN_005f7b57();
          if (iVar2 != 0) {
            local_30 = &local_10;
          }
          if ((((*(byte *)(param_1 + 0x90) & 1) != 0) && (iVar2 = FUN_005f7aa3(), iVar2 != 0)) &&
             ((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) +
                                 **(int **)(*(int *)(param_1 + 0x14) + *(int *)puVar10[4] * 4) * 4)
                        + 4) & 0x10) != 0)) {
            local_2c = local_3c;
            local_30 = &local_10;
          }
          iVar2 = 0;
          while (iVar4 = FUN_005f7a5c(iVar2,&local_40), iVar4 != 0) {
            iVar4 = FUN_005faf93(local_40,iVar4,local_2c,local_30,puVar10,0xffffffff);
            if (iVar4 == 0) {
              iVar2 = FUN_005f7b57();
              if (iVar2 == 0) {
                local_c = 0;
                local_8 = (uint *)FUN_005f7a5c(0,0);
                if (local_8 == (uint *)0x0) {
                  local_14 = (uint *)0x0;
                }
                else {
                  local_14 = (uint *)(puVar10[1] / (uint)local_8);
                }
                local_24 = (uint *)0x0;
                if (local_8 == (uint *)0x0) goto LAB_005ff83f;
                local_20 = 0;
                goto LAB_005ff8a3;
              }
              break;
            }
            iVar2 = iVar2 + 1;
          }
          iVar2 = FUN_005f752b(*puVar10,puVar10[1],puVar10[3]);
          if (iVar2 == -1) goto LAB_005ffbcb;
          puVar5 = *(uint **)(*(int *)(local_28 + 0x18) + iVar2 * 4);
          local_50 = puVar5;
          FUN_005f7a42();
          puVar8 = (undefined4 *)puVar10[2];
          puVar11 = (undefined4 *)puVar5[2];
          for (uVar3 = puVar10[1] & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
            *puVar11 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar11 = puVar11 + 1;
          }
          for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          puVar8 = (undefined4 *)puVar10[4];
          puVar11 = (undefined4 *)local_50[4];
          for (uVar3 = puVar10[3] & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
            *puVar11 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar11 = puVar11 + 1;
          }
          for (iVar2 = 0; param_1 = local_28, iVar2 != 0; iVar2 = iVar2 + -1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          goto LAB_005ff83f;
        }
        goto LAB_005ff842;
      }
LAB_005ff851:
      iVar2 = 0;
LAB_005ff853:
      _free(local_3c);
    }
  }
  return iVar2;
LAB_005ff8a3:
  do {
    local_48 = (uint *)(local_20 + puVar10[2]);
    if (*local_48 != 0xffffffff) {
      local_4c = (uint *)((int)local_24 + 1);
      local_1c = (uint *)0x1;
      if (local_4c < local_8) {
        local_2c = (uint *)(puVar10[2] + local_20 + 4);
        iVar2 = (local_20 + 4) - local_20;
        local_44 = (int)local_8 - (int)local_4c;
        do {
          if (*local_2c != 0xffffffff) {
            local_18 = (uint *)0x0;
            puVar5 = local_48;
            if (local_14 != (uint *)0x0) {
              do {
                piVar6 = *(int **)(*(int *)(param_1 + 0x14) + *(int *)(iVar2 + (int)puVar5) * 4);
                piVar1 = *(int **)(*(int *)(param_1 + 0x14) + *puVar5 * 4);
                local_30 = puVar5;
                if (((*piVar1 != *piVar6) || (piVar1[1] != piVar6[1])) || (piVar1[2] != piVar6[2]))
                break;
                local_18 = (uint *)((int)local_18 + 1);
                local_30 = puVar5 + (int)local_8;
                puVar5 = local_30;
              } while (local_18 < local_14);
            }
            if (local_18 == local_14) {
              local_1c = (uint *)((int)local_1c + 1);
            }
          }
          local_2c = local_2c + 1;
          iVar2 = iVar2 + 4;
          local_44 = local_44 + -1;
        } while (local_44 != 0);
      }
      iVar2 = FUN_005f752b((*puVar10 ^ (uint)local_1c) & 0xffffff ^ *puVar10,0xffffffff,0xffffffff);
      if (iVar2 == -1) goto LAB_005ffbcb;
      puVar5 = *(uint **)(*(int *)(param_1 + 0x18) + iVar2 * 4);
      local_4c = puVar5;
      FUN_005f7a42();
      local_18 = local_8;
      if (local_24 < local_8) {
        local_30 = (uint *)((int)local_1c * 4 + -4);
        local_44 = (int)local_8 * 4 - local_20;
        do {
          local_18 = (uint *)((int)local_18 + -1);
          local_44 = local_44 + -4;
          if (*(int *)(puVar10[2] + (int)local_18 * 4) != -1) {
            local_2c = (uint *)0x0;
            if (local_14 != (uint *)0x0) {
              piVar6 = (int *)(puVar10[2] + local_20);
              do {
                local_50 = *(uint **)(*(int *)(param_1 + 0x14) +
                                     *(int *)(local_44 + (int)piVar6) * 4);
                local_48 = *(uint **)(*(int *)(param_1 + 0x14) + *piVar6 * 4);
                if (((*local_48 != *local_50) || (local_48[1] != local_50[1])) ||
                   (local_48[2] != local_50[2])) break;
                local_2c = (uint *)((int)local_2c + 1);
                piVar6 = piVar6 + (int)local_8;
              } while (local_2c < local_14);
              if (local_2c < local_14) goto LAB_005ffa88;
              local_2c = (uint *)0x0;
              local_48 = local_14;
              puVar9 = local_30;
              do {
                puVar8 = (undefined4 *)((int)local_2c + (int)local_18 * 4 + puVar10[2]);
                *(undefined4 *)((int)puVar9 + puVar5[2]) = *puVar8;
                *puVar8 = 0xffffffff;
                local_2c = local_2c + (int)local_8;
                puVar9 = puVar9 + (int)local_1c;
                local_48 = (uint *)((int)local_48 + -1);
                puVar5 = local_4c;
              } while (local_48 != (uint *)0x0);
            }
            iVar2 = FUN_005f7ac7();
            if (iVar2 == 0) {
              *(undefined4 *)((int)local_30 + puVar5[4]) =
                   *(undefined4 *)(puVar10[4] + (int)local_18 * 4);
            }
            local_30 = local_30 + -1;
          }
LAB_005ffa88:;
        } while (local_24 < local_18);
      }
      iVar2 = FUN_005f7ac7();
      if (iVar2 != 0) {
        if (local_1c == local_8) {
          *(undefined4 *)puVar5[4] = *(undefined4 *)puVar10[4];
        }
        else {
          uVar7 = FUN_005f74cf(*(undefined4 *)(param_1 + 0x60),local_10,local_c,0);
          local_64[local_c] = uVar7;
          *(undefined4 *)puVar5[4] = uVar7;
          if (*(int *)puVar5[4] == -1) goto LAB_005ffbcb;
          local_c = local_c + 1;
        }
        iVar2 = FUN_005f974c(puVar5,0);
        if (iVar2 < 0) {
          return iVar2;
        }
      }
    }
    local_24 = (uint *)((int)local_24 + 1);
    local_20 = local_20 + 4;
  } while (local_24 < local_8);
  if (local_c != 0) {
    if (local_c == 2) {
      uVar3 = 0x24000001;
    }
    else {
      uVar3 = local_c & 0xffffff | 0x30000000;
    }
    iVar2 = FUN_005f752b(uVar3,0xffffffff,0xffffffff);
    if (iVar2 == -1) goto LAB_005ff6d1;
    puVar5 = *(uint **)(*(int *)(local_28 + 0x18) + iVar2 * 4);
    local_50 = puVar5;
    FUN_005f7a42();
    *(undefined4 *)puVar5[4] = *(undefined4 *)puVar10[4];
    puVar8 = local_64;
    puVar11 = (undefined4 *)puVar5[2];
    for (uVar3 = local_c & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar11 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar11 = puVar11 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar11 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    if (local_c != 2) {
      if ((local_38 == -1) &&
         (local_38 = FUN_005f74cf(*(undefined4 *)(local_28 + 0x50),0,0,0x3ff0000000000000),
         local_38 == -1)) {
LAB_005ffbcb:
        iVar2 = -0x7ff8fff2;
        goto LAB_005ff853;
      }
      if (local_c != 0) {
        iVar2 = local_c << 2;
        uVar3 = local_c;
        do {
          *(int *)(iVar2 + local_50[2]) = local_38;
          iVar2 = iVar2 + 4;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
    }
    local_10 = local_10 + 1;
    param_1 = local_28;
  }
LAB_005ff83f:
  *puVar10 = 0;
LAB_005ff842:
  local_34 = local_34 + 1;
  if (local_54 <= local_34) goto LAB_005ff851;
  goto LAB_005ff72f;
}
