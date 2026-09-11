/* spd-match: far pct=4.26 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_005f7186();
int __cdecl FUN_005f74cf();
int __cdecl FUN_005f752b();
int __cdecl FUN_005f7709();
int __cdecl FUN_005f7760();
int __cdecl FUN_005f7a42();
int __cdecl FUN_005f7a5c();
int __cdecl FUN_005f7a96();
int __cdecl FUN_005f7aa3();
int __cdecl FUN_005f7ad9();
int __cdecl FUN_005f7b0f();
int __cdecl FUN_005f7b21();
int __cdecl FUN_005f7b33();
int __cdecl FUN_005f7b45();
int __cdecl FUN_005f7cfc();
int __cdecl FUN_005fb7cf();
int __cdecl FUN_005fb8ae();
extern void LAB_00600068(void);
extern void LAB_00600644(void);
extern void LAB_00600766(void);
extern void LAB_00600897(void);
extern void LAB_00600a9d(void);
extern void LAB_00600aa6(void);
extern void LAB_00600aca(void);
extern void LAB_00600b2f(void);
extern void LAB_00600e7a(void);
extern void LAB_00600f8c(void);

int * __fastcall FUN_005ffbd5(int *param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  int *piVar7;
  void *pvVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  longlong lVar18;
  int aiStack_cc [4];
  int aiStack_bc [4];
  int aiStack_ac [4];
  uint local_9c [4];
  uint local_8c [8];
  int local_6c [4];
  undefined1 local_5c [16];
  int local_4c;
  uint local_48;
  undefined4 *local_44;
  uint *local_40;
  int *local_3c;
  uint *local_38;
  int *local_34;
  int *local_30;
  uint *local_2c;
  uint *local_28;
  uint *local_24;
  uint *local_20;
  int *local_1c;
  uint *local_18;
  int *local_14;
  uint *local_10;
  uint *local_c;
  uint *local_8;
  
  puVar1 = local_8c + 4;
  local_8 = (uint *)0x0;
  FUN_005fb8ae();
  local_18 = (uint *)0x0;
  local_44 = (undefined4 *)0x0;
  if (param_1[2] != 0) {
    puVar9 = (undefined4 *)param_1[5];
    iVar12 = param_1[2];
    do {
      if ((param_1[0x18] == *(int *)*puVar9) &&
         (puVar4 = (uint *)((int *)*puVar9)[2], local_18 <= puVar4)) {
        local_18 = (uint *)((int)puVar4 + 1);
      }
      puVar9 = puVar9 + 1;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  if ((*(byte *)(param_1 + 0x24) & 1) != 0) {
    local_2c = (uint *)param_1[3];
    local_20 = (uint *)0x0;
    if ((uint *)param_1[3] != (uint *)0x0) {
      do {
        iVar12 = *(int *)(param_1[6] + (int)local_20 * 4);
        iVar2 = FUN_005f7a96();
        if (((iVar2 == 0) && (*(uint *)(iVar12 + 0xc) != 0)) &&
           ((*(byte *)(*(int *)(param_1[4] +
                               **(int **)(param_1[5] + **(int **)(iVar12 + 0x10) * 4) * 4) + 4) &
            0x10) != 0)) {
          uVar11 = 0;
          bVar15 = *(int *)(iVar12 + 4) == 0;
          if (*(int *)(iVar12 + 4) != 0) {
            local_14 = *(int **)(iVar12 + 8);
            do {
              if (uVar11 != *(uint *)(*(int *)(param_1[5] + *local_14 * 4) + 0xc)) break;
              local_14 = local_14 + 1;
              uVar11 = uVar11 + 1;
            } while (uVar11 < *(uint *)(iVar12 + 4));
            bVar15 = uVar11 == *(uint *)(iVar12 + 4);
          }
          if (!bVar15) {
            iVar2 = FUN_005f752b(*(uint *)(iVar12 + 0xc) & 0xffffff | 0x10000000,0xffffffff,
                                 0xffffffff);
            if (iVar2 == -1) goto LAB_00600f8c;
            local_14 = *(int **)(param_1[6] + iVar2 * 4);
            FUN_005f7a42();
            local_10 = (uint *)0x0;
            if (*(int *)(iVar12 + 0xc) != 0) {
              do {
                iVar2 = (int)local_10 * 4;
                *(undefined4 *)(iVar2 + local_14[4]) =
                     *(undefined4 *)(iVar2 + *(int *)(iVar12 + 0x10));
                uVar3 = FUN_005f74cf(param_1[0x18],local_18,local_10,0);
                *(undefined4 *)(iVar2 + *(int *)(iVar12 + 0x10)) = uVar3;
                *(undefined4 *)(iVar2 + local_14[2]) =
                     *(undefined4 *)(iVar2 + *(int *)(iVar12 + 0x10));
                if (*(int *)(iVar2 + local_14[2]) == -1) goto LAB_00600f8c;
                local_10 = (uint *)((int)local_10 + 1);
                *(undefined4 *)(*(int *)(param_1[5] + *(int *)(iVar2 + local_14[2]) * 4) + 0x18) =
                     *(undefined4 *)
                      (*(int *)(param_1[5] + *(int *)(iVar2 + local_14[4]) * 4) + 0x18);
              } while (local_10 < *(uint **)(iVar12 + 0xc));
            }
            local_18 = (uint *)((int)local_18 + 1);
            local_8 = (uint *)0x1;
          }
        }
        local_20 = (uint *)((int)local_20 + 1);
      } while (local_20 < local_2c);
    }
  }
  if (((*(byte *)((int)param_1 + 0x93) & 2) != 0) && (local_c = (uint *)0x0, param_1[3] != 0)) {
    do {
      local_20 = *(uint **)(param_1[6] + (int)local_c * 4);
      iVar12 = FUN_005f7b45();
      if (iVar12 != 0) {
        local_14 = (int *)0x1;
        uVar16 = CONCAT44(&local_1c,1);
        while( true ) {
          local_24 = (uint *)FUN_005f7a5c(uVar16);
          if (local_24 == (uint *)0x0) break;
          puVar4 = (uint *)0x0;
          if (local_24 != (uint *)0x0) {
            do {
              if (*(uint **)(*(int *)(param_1[5] + local_1c[(int)puVar4] * 4) + 0xc) != puVar4)
              break;
              puVar4 = (uint *)((int)puVar4 + 1);
            } while (puVar4 < local_24);
          }
          if (puVar4 != local_24) {
            puVar4 = (uint *)FUN_005f752b((uint)local_24 & 0xffffff | 0x10000000,0xffffffff,
                                          0xffffffff);
            local_2c = puVar4;
            if (puVar4 == (uint *)0xffffffff) goto LAB_00600f8c;
            iVar12 = *(int *)(param_1[6] + (int)puVar4 * 4);
            FUN_005f7a42();
            local_10 = (uint *)0x0;
            if (local_24 != (uint *)0x0) {
              do {
                puVar4 = local_10;
                iVar13 = (int)local_10 * 4;
                *(int *)(iVar13 + *(int *)(iVar12 + 8)) = local_1c[(int)local_10];
                iVar2 = FUN_005f74cf(param_1[0x18],local_18,local_10,0);
                local_1c[(int)puVar4] = iVar2;
                *(int *)(iVar13 + *(int *)(iVar12 + 0x10)) = local_1c[(int)puVar4];
                iVar2 = *(int *)(iVar13 + *(int *)(iVar12 + 0x10));
                if (iVar2 == -1) goto LAB_00600f8c;
                local_10 = (uint *)((int)local_10 + 1);
                *(undefined4 *)(*(int *)(param_1[5] + iVar2 * 4) + 0x18) =
                     *(undefined4 *)
                      (*(int *)(param_1[5] + *(int *)(iVar13 + *(int *)(iVar12 + 8)) * 4) + 0x18);
                puVar4 = local_2c;
              } while (local_10 < local_24);
            }
            for (; local_c < puVar4; puVar4 = (uint *)((int)puVar4 + -1)) {
              puVar9 = (undefined4 *)(param_1[6] + (int)puVar4 * 4);
              *puVar9 = puVar9[-1];
            }
            local_c = (uint *)((int)local_c + 1);
            local_18 = (uint *)((int)local_18 + 1);
            *(int *)(param_1[6] + (int)puVar4 * 4) = iVar12;
            local_8 = (uint *)0x1;
          }
          local_14 = (int *)((int)local_14 + 1);
          uVar16 = CONCAT44(&local_1c,local_14);
        }
      }
      local_c = (uint *)((int)local_c + 1);
    } while (local_c < (uint *)param_1[3]);
  }
  local_c = (uint *)0x0;
  if (param_1[3] != 0) {
    do {
      local_20 = *(uint **)(param_1[6] + (int)local_c * 4);
      if ((*local_20 & 0xff000000) == 0x34000000) {
        if (local_20[1] == 4) {
          piVar5 = (int *)local_20[2];
          iVar12 = param_1[5];
          local_2c = *(uint **)(iVar12 + *piVar5 * 4);
          if ((((*(byte *)(*(int *)(param_1[4] + *local_2c * 4) + 5) & 1) == 0) &&
              (local_2c[3] == 0)) &&
             ((*(int *)(*(int *)(iVar12 + piVar5[1] * 4) + 0xc) == 1 &&
              ((*(int *)(*(int *)(iVar12 + piVar5[2] * 4) + 0xc) == 2 &&
               (*(int *)(*(int *)(iVar12 + piVar5[3] * 4) + 0xc) == 3)))))) goto LAB_00600068;
        }
        puVar4 = (uint *)FUN_005f752b(0x10000004,0xffffffff,0xffffffff);
        local_2c = puVar4;
        iVar12 = FUN_005f752b(0x34000004,0xffffffff,0xffffffff);
        if ((puVar4 == (uint *)0xffffffff) || (iVar12 == -1)) goto LAB_00600f8c;
        iVar2 = *(int *)(param_1[6] + (int)puVar4 * 4);
        local_14 = *(int **)(param_1[6] + iVar12 * 4);
        FUN_005f7a42();
        FUN_005f7a42();
        local_8 = (uint *)0x0;
        do {
          if (local_8 < (uint *)local_20[1]) {
            uVar3 = *(undefined4 *)(local_20[2] + (int)local_8 * 4);
          }
          else {
            uVar3 = *(undefined4 *)((local_20[2] - 4) + (int)local_20[1] * 4);
          }
          iVar13 = (int)local_8 * 4;
          *(undefined4 *)(iVar13 + *(int *)(iVar2 + 8)) = uVar3;
          uVar3 = FUN_005f74cf(param_1[0x18],local_18,local_8,0);
          *(undefined4 *)(iVar13 + local_14[2]) = uVar3;
          *(undefined4 *)(iVar13 + *(int *)(iVar2 + 0x10)) = *(undefined4 *)(iVar13 + local_14[2]);
          iVar12 = *(int *)(iVar13 + *(int *)(iVar2 + 0x10));
          if (iVar12 == -1) goto LAB_00600f8c;
          local_8 = (uint *)((int)local_8 + 1);
          *(undefined4 *)(*(int *)(param_1[5] + iVar12 * 4) + 0x18) =
               *(undefined4 *)
                (*(int *)(param_1[5] + *(int *)(iVar13 + *(int *)(iVar2 + 8)) * 4) + 0x18);
          puVar4 = local_2c;
        } while (local_8 < (uint *)0x4);
        for (; local_c < puVar4; puVar4 = (uint *)((int)puVar4 + -1)) {
          puVar9 = (undefined4 *)(param_1[6] + (int)puVar4 * 4);
          *puVar9 = puVar9[-1];
        }
        *(int *)(param_1[6] + (int)local_c * 4) = iVar2;
        puVar4 = (uint *)((int)local_c + 1);
        local_c = puVar4;
        FUN_005f7186();
        param_1[3] = param_1[3] + -1;
        local_18 = (uint *)((int)local_18 + 1);
        *(int **)(param_1[6] + (int)puVar4 * 4) = local_14;
        local_8 = (uint *)0x1;
      }
LAB_00600068:
      local_c = (uint *)((int)local_c + 1);
    } while (local_c < (uint *)param_1[3]);
  }
  if ((*(byte *)(param_1 + 0x24) & 6) != 0) {
    local_1c = (int *)0x0;
    if (param_1[3] != 0) {
      do {
        puVar4 = *(uint **)(param_1[6] + (int)local_1c * 4);
        local_40 = puVar4;
        if (((*puVar4 & 0xff000000) == 0x10000000) &&
           (iVar12 = param_1[5],
           (*(byte *)(*(int *)(param_1[4] + **(int **)(iVar12 + *(int *)puVar4[4] * 4) * 4) + 4) &
           0x10) == 0)) {
          local_10 = (uint *)0x0;
          if (puVar4[3] != 0) {
            local_2c = *(uint **)(*(int *)(iVar12 + *(int *)puVar4[2] * 4) + 0x2c);
            local_14 = (int *)puVar4[2];
            do {
              if (local_2c != *(uint **)(*(int *)(iVar12 + *local_14 * 4) + 0x2c)) break;
              local_10 = (uint *)((int)local_10 + 1);
              local_14 = local_14 + 1;
            } while (local_10 < (uint *)puVar4[3]);
          }
          if (local_10 != (uint *)puVar4[3]) {
            puVar6 = (uint *)puVar4[1];
            local_c = (uint *)0x0;
            local_8 = (uint *)0x0;
            if (puVar6 != (uint *)0x0) {
              do {
                piVar5 = (int *)(puVar4[2] + (int)local_8 * 4);
                iVar12 = *piVar5;
                if (iVar12 != -1) {
                  local_28 = *(uint **)(*(int *)(param_1[5] + iVar12 * 4) + 0x2c);
                  uVar11 = 0;
                  if (local_8 < puVar6) {
                    local_20 = (uint *)((int)puVar6 - (int)local_8);
                    local_14 = piVar5;
                    do {
                      if ((*local_14 != -1) &&
                         (local_28 == *(uint **)(*(int *)(param_1[5] + *local_14 * 4) + 0x2c))) {
                        uVar11 = uVar11 + 1;
                      }
                      local_14 = local_14 + 1;
                      local_20 = (uint *)((int)local_20 + -1);
                    } while (local_20 != (uint *)0x0);
                  }
                  iVar12 = FUN_005f752b(uVar11 & 0xffffff | 0x10000000,0xffffffff,0xffffffff);
                  if (iVar12 == -1) goto LAB_00600f8c;
                  piVar5 = *(int **)(param_1[6] + iVar12 * 4);
                  local_30 = piVar5;
                  FUN_005f7a42();
                  local_c = (uint *)((int)local_c + 1);
                  local_10 = local_8;
                  if (local_8 < (uint *)puVar4[1]) {
                    local_20 = (uint *)0x0;
                    do {
                      iVar12 = (int)local_10 * 4;
                      if ((*(int *)(iVar12 + puVar4[2]) != -1) &&
                         (local_28 ==
                          *(uint **)(*(int *)(param_1[5] + *(int *)(iVar12 + puVar4[2]) * 4) + 0x2c)
                         )) {
                        *(undefined4 *)((int)local_20 + piVar5[4]) =
                             *(undefined4 *)(iVar12 + puVar4[4]);
                        *(undefined4 *)((int)local_20 + local_30[2]) =
                             *(undefined4 *)(iVar12 + puVar4[2]);
                        *(undefined4 *)(iVar12 + puVar4[2]) = 0xffffffff;
                        local_20 = local_20 + 1;
                        piVar5 = local_30;
                      }
                      local_10 = (uint *)((int)local_10 + 1);
                    } while (local_10 < (uint *)puVar4[1]);
                  }
                }
                local_8 = (uint *)((int)local_8 + 1);
                puVar6 = (uint *)puVar4[1];
              } while (local_8 < puVar6);
              if (local_c != (uint *)0x0) {
                puVar6 = (uint *)(param_1[6] + (param_1[3] - (int)local_c) * 4);
                puVar10 = puVar1;
                for (puVar4 = local_c; puVar4 != (uint *)0x0; puVar4 = (uint *)((int)puVar4 - 1)) {
                  *puVar10 = *puVar6;
                  puVar6 = puVar6 + 1;
                  puVar10 = puVar10 + 1;
                }
              }
            }
            piVar5 = (int *)(param_1[3] + -1);
            if (local_1c < piVar5) {
              iVar12 = ((int)piVar5 - (int)local_c) * 4;
              do {
                puVar9 = (undefined4 *)(param_1[6] + iVar12);
                iVar12 = iVar12 + -4;
                piVar5 = (int *)((int)piVar5 + -1);
                *(undefined4 *)(param_1[6] + (int)piVar5 * 4) = *puVar9;
              } while (local_1c < piVar5);
            }
            puVar4 = (uint *)0x0;
            if (local_c != (uint *)0x0) {
              iVar12 = (int)local_1c << 2;
              do {
                *(uint *)(iVar12 + param_1[6]) = puVar1[(int)puVar4];
                puVar4 = (uint *)((int)puVar4 + 1);
                iVar12 = iVar12 + 4;
              } while (puVar4 < local_c);
            }
            FUN_005f7186();
            param_1[3] = param_1[3] + -1;
            local_1c = (int *)((int)local_1c + -1 + (int)local_c);
            local_8 = (uint *)0x1;
          }
        }
        local_1c = (int *)((int)local_1c + 1);
      } while (local_1c < (int *)param_1[3]);
    }
    local_1c = (int *)0x0;
    if (param_1[3] != 0) {
      do {
        puVar4 = *(uint **)((int)local_1c * 4 + param_1[6]);
        local_2c = puVar4;
        if ((*puVar4 & 0xff000000) == 0x10000000) {
          iVar12 = param_1[5];
          if ((*(byte *)(*(int *)(param_1[4] + **(int **)(iVar12 + *(int *)puVar4[4] * 4) * 4) + 4)
              & 0x10) == 0) {
            puVar10 = (uint *)0x0;
            local_10 = (uint *)0x0;
            local_c = (uint *)0x0;
            puVar6 = (uint *)0x0;
            if (puVar4[3] != 0) {
              local_34 = (int *)puVar4[2];
              local_14 = (int *)((int)puVar4[4] - (int)local_34);
              do {
                local_20 = *(uint **)(*(int *)(iVar12 + *local_34 * 4) + 0xc);
                if (*(uint **)(*(int *)(iVar12 + *(int *)((int)local_14 + (int)local_34) * 4) + 0xc)
                    == local_20) {
                  puVar10 = (uint *)((int)puVar10 + 1);
                }
                local_24 = (uint *)0x0;
                if (local_c != (uint *)0x0) {
                  local_38 = (uint *)puVar4[2];
                  do {
                    if (*(uint **)(*(int *)(iVar12 + *local_38 * 4) + 0xc) == local_20) {
                      local_10 = (uint *)((int)local_10 + 1);
                      break;
                    }
                    local_24 = (uint *)((int)local_24 + 1);
                    local_38 = local_38 + 1;
                  } while (local_24 < local_c);
                }
                local_c = (uint *)((int)local_c + 1);
                puVar6 = (uint *)puVar4[3];
                local_34 = local_34 + 1;
              } while (local_c < puVar6);
            }
            if (((puVar10 != puVar6) && ((uint *)((int)local_10 + 1U) != puVar6)) &&
               (((uint *)0x1 < puVar10 || (local_10 != (uint *)0x0)))) {
              local_c = (uint *)0x0;
              if ((uint *)0x1 < puVar10) {
                iVar12 = FUN_005f752b((uint)puVar10 & 0xffffff | 0x10000000,0xffffffff,0xffffffff);
                if (iVar12 == -1) goto LAB_00600f8c;
                local_20 = *(uint **)(param_1[6] + iVar12 * 4);
                FUN_005f7a42();
                local_c = (uint *)0x1;
                local_10 = (uint *)0x0;
                if (puVar4[3] != 0) {
                  local_28 = (uint *)0x0;
                  do {
                    iVar12 = (int)local_10 * 4;
                    if (*(int *)(*(int *)(param_1[5] + *(int *)(iVar12 + puVar4[4]) * 4) + 0xc) ==
                        *(int *)(*(int *)(param_1[5] + *(int *)(iVar12 + puVar4[2]) * 4) + 0xc)) {
                      *(int *)((int)local_28 + local_20[4]) = *(int *)(iVar12 + puVar4[4]);
                      *(undefined4 *)((int)local_28 + local_20[2]) =
                           *(undefined4 *)(iVar12 + puVar4[2]);
                      *(undefined4 *)(iVar12 + puVar4[2]) = 0xffffffff;
                      local_28 = local_28 + 1;
                    }
                    local_10 = (uint *)((int)local_10 + 1);
                  } while (local_10 < (uint *)puVar4[3]);
                }
              }
              puVar6 = (uint *)puVar4[1];
              local_8 = (uint *)0x0;
              if (puVar6 != (uint *)0x0) {
                do {
                  piVar5 = (int *)(puVar4[2] + (int)local_8 * 4);
                  iVar12 = *piVar5;
                  if (iVar12 != -1) {
                    local_28 = *(uint **)(*(int *)(param_1[5] + iVar12 * 4) + 0xc);
                    uVar11 = 0;
                    if (local_8 < puVar6) {
                      local_20 = (uint *)((int)puVar6 - (int)local_8);
                      local_34 = piVar5;
                      do {
                        if ((*local_34 != -1) &&
                           (local_28 == *(uint **)(*(int *)(param_1[5] + *local_34 * 4) + 0xc))) {
                          uVar11 = uVar11 + 1;
                        }
                        local_34 = local_34 + 1;
                        local_20 = (uint *)((int)local_20 + -1);
                      } while (local_20 != (uint *)0x0);
                    }
                    iVar12 = FUN_005f752b(uVar11 & 0xffffff | 0x10000000,0xffffffff,0xffffffff);
                    if (iVar12 == -1) goto LAB_00600f8c;
                    piVar5 = *(int **)(param_1[6] + iVar12 * 4);
                    local_30 = piVar5;
                    FUN_005f7a42();
                    local_c = (uint *)((int)local_c + 1);
                    local_10 = local_8;
                    if (local_8 < (uint *)puVar4[1]) {
                      local_20 = (uint *)0x0;
                      do {
                        iVar12 = (int)local_10 * 4;
                        if ((*(int *)(iVar12 + puVar4[2]) != -1) &&
                           (local_28 ==
                            *(uint **)(*(int *)(param_1[5] + *(int *)(iVar12 + puVar4[2]) * 4) + 0xc
                                      ))) {
                          *(undefined4 *)((int)local_20 + piVar5[4]) =
                               *(undefined4 *)(iVar12 + puVar4[4]);
                          *(undefined4 *)((int)local_20 + local_30[2]) =
                               *(undefined4 *)(iVar12 + puVar4[2]);
                          *(undefined4 *)(iVar12 + puVar4[2]) = 0xffffffff;
                          local_20 = local_20 + 1;
                          piVar5 = local_30;
                        }
                        local_10 = (uint *)((int)local_10 + 1);
                      } while (local_10 < (uint *)puVar4[1]);
                    }
                  }
                  local_8 = (uint *)((int)local_8 + 1);
                  puVar6 = (uint *)puVar4[1];
                } while (local_8 < puVar6);
              }
              if (local_c != (uint *)0x0) {
                puVar6 = (uint *)(param_1[6] + (param_1[3] - (int)local_c) * 4);
                puVar10 = puVar1;
                for (puVar4 = local_c; puVar4 != (uint *)0x0; puVar4 = (uint *)((int)puVar4 - 1)) {
                  *puVar10 = *puVar6;
                  puVar6 = puVar6 + 1;
                  puVar10 = puVar10 + 1;
                }
              }
              piVar5 = (int *)(param_1[3] + -1);
              if (local_1c < piVar5) {
                iVar12 = ((int)piVar5 - (int)local_c) * 4;
                do {
                  puVar9 = (undefined4 *)(param_1[6] + iVar12);
                  iVar12 = iVar12 + -4;
                  piVar5 = (int *)((int)piVar5 + -1);
                  *(undefined4 *)(param_1[6] + (int)piVar5 * 4) = *puVar9;
                } while (local_1c < piVar5);
              }
              puVar4 = (uint *)0x0;
              if (local_c != (uint *)0x0) {
                iVar12 = (int)local_1c << 2;
                do {
                  *(uint *)(iVar12 + param_1[6]) = puVar1[(int)puVar4];
                  puVar4 = (uint *)((int)puVar4 + 1);
                  iVar12 = iVar12 + 4;
                } while (puVar4 < local_c);
              }
              FUN_005f7186();
              param_1[3] = param_1[3] + -1;
              local_1c = (int *)((int)local_1c + -1 + (int)local_c);
              local_8 = (uint *)0x1;
            }
          }
        }
        local_1c = (int *)((int)local_1c + 1);
      } while (local_1c < (int *)param_1[3]);
    }
  }
  if (local_8 != (uint *)0x0) {
    FUN_005fb8ae();
  }
  puVar4 = local_18;
  local_44 = _malloc((int)local_18 << 2);
  if (local_44 == (undefined4 *)0x0) {
LAB_00600f8c:
    local_14 = (int *)0x8007000e;
  }
  else {
    puVar9 = local_44;
    for (uVar11 = (uint)puVar4 & 0x3fffffff; uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    uVar11 = 0;
    for (iVar12 = 0; iVar12 != 0; iVar12 = iVar12 + -1) {
      *(undefined1 *)puVar9 = 0;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    if (param_1[2] != 0) {
      do {
        piVar5 = *(int **)(param_1[5] + uVar11 * 4);
        piVar5[0x10] = 0;
        if (param_1[0x18] == *piVar5) {
          if ((uint)local_44[piVar5[2]] <= (uint)piVar5[3]) {
            local_44[piVar5[2]] = piVar5[3] + 1;
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < (uint)param_1[2]);
    }
    puVar4 = (uint *)param_1[3];
    while (puVar4 != (uint *)0x0) {
      local_20 = (uint *)((int)puVar4 + -1);
      puVar6 = *(uint **)(param_1[6] + (int)local_20 * 4);
      iVar12 = FUN_005f7a96();
      puVar4 = local_20;
      if (iVar12 == 0) {
        uVar11 = *puVar6;
        uVar14 = uVar11 & 0xffffff;
        if (puVar6[3] != 0) {
          iVar12 = FUN_005f7ad9();
          if (iVar12 == 0) {
            iVar12 = FUN_005f7b0f();
            if (iVar12 == 0) {
              iVar12 = FUN_005f7b21();
              if (iVar12 == 0) {
                iVar12 = FUN_005f7b33();
                if (iVar12 == 0) goto LAB_00600766;
                FUN_005fb7cf(puVar6[4],local_5c,uVar14,1);
                FUN_005fb7cf(puVar6[2],local_5c,uVar14,0);
                FUN_005fb7cf(puVar6[2] + puVar6[3] * 4,local_5c,uVar14,0);
                uVar14 = puVar6[2] + puVar6[3] * 8;
              }
              else {
                FUN_005fb7cf(puVar6[4],local_5c,uVar14,1);
                FUN_005fb7cf(puVar6[2],local_5c,uVar14,0);
                uVar14 = puVar6[2] + puVar6[3] * 4;
              }
              uVar17 = (ulonglong)uVar11 & 0xffffffff00ffffff;
            }
            else {
              FUN_005fb7cf(puVar6[4],local_5c,uVar14,1);
              uVar17 = (ulonglong)uVar11 & 0xffffffff00ffffff;
              uVar14 = puVar6[2];
            }
          }
          else {
            uVar17 = CONCAT44(1,uVar11) & 0xffffffff00ffffff;
            uVar14 = puVar6[4];
          }
          FUN_005fb7cf(uVar14,local_5c,uVar17);
        }
LAB_00600766:
        local_6c[0] = 0;
        local_6c[1] = 0;
        local_6c[2] = 0;
        local_6c[3] = 0;
        iVar12 = FUN_005f7aa3();
        if (iVar12 != 0) {
          iVar12 = param_1[5];
          local_30 = *(int **)(iVar12 + *(int *)puVar6[4] * 4);
          uVar11 = *(uint *)(*(int *)(param_1[4] + *local_30 * 4) + 4);
          if ((((uVar11 & 4) == 0) &&
              ((((*(byte *)(param_1 + 0x24) & 1) == 0 || ((uVar11 & 0x10) == 0)) &&
               (param_1[0x18] == **(int **)(iVar12 + *(int *)puVar6[2] * 4))))) &&
             (local_8 = (uint *)0x0, puVar6[1] != 0)) {
            local_34 = (int *)((int)puVar6[2] - (int)local_6c);
            local_2c = (uint *)(param_1[0xd] & 8);
            do {
              iVar2 = *(int *)(iVar12 + *(int *)((int)local_6c + (int)(local_34 + (int)local_8)) * 4
                              );
              iVar13 = *(int *)(param_1[6] + *(int *)(iVar2 + 0x2c) * 4);
              if (((local_2c != (uint *)0x0) && (local_30[0x11] != 0)) &&
                 ((iVar2 = *(int *)(iVar2 + 0x44), iVar2 != 0 && (local_30[0x11] != iVar2)))) break;
              local_28 = *(uint **)(iVar13 + 0xc);
              local_10 = (uint *)0x0;
              if (local_28 != (uint *)0x0) {
                piVar5 = *(int **)(iVar13 + 0x10);
                do {
                  iVar2 = *(int *)(iVar12 + *piVar5 * 4);
                  if ((local_20 != *(uint **)(iVar2 + 0x38)) ||
                     (local_20 != *(uint **)(iVar2 + 0x3c))) break;
                  local_10 = (uint *)((int)local_10 + 1);
                  piVar5 = piVar5 + 1;
                } while (local_10 < local_28);
              }
              if (local_10 == local_28) {
                local_6c[(int)local_8] = 1;
              }
              local_8 = (uint *)((int)local_8 + 1);
            } while (local_8 < (uint *)puVar6[1]);
          }
        }
        iVar12 = FUN_005f7b0f();
        if ((iVar12 == 0) && (iVar12 = FUN_005f7b21(), iVar12 == 0)) {
          iVar12 = FUN_005f7b33();
          uVar11 = 0;
          if (iVar12 != 0) goto LAB_00600897;
          do {
            local_9c[uVar11] = uVar11;
            uVar11 = uVar11 + 1;
          } while (uVar11 < 4);
        }
        else {
LAB_00600897:
          local_10 = (uint *)0x0;
          if (puVar6[3] != 0) {
            uVar11 = puVar6[4];
            iVar12 = param_1[5];
            do {
              iVar2 = (int)local_10 * 4;
              puVar4 = local_9c + (int)local_10;
              local_10 = (uint *)((int)local_10 + 1);
              *puVar4 = *(uint *)(*(int *)(iVar12 + *(int *)(uVar11 + iVar2) * 4) + 0xc);
            } while (local_10 < (uint *)puVar6[3]);
          }
        }
        local_28 = (uint *)0x0;
        lVar18 = ZEXT48(&local_1c) << 0x20;
        while( true ) {
          local_24 = (uint *)FUN_005f7a5c(lVar18);
          if (local_24 == (uint *)0x0) break;
          local_8c[0] = 0;
          local_8c[1] = 0;
          local_8c[2] = 0;
          local_c = (uint *)0x0;
          local_30 = (int *)0x0;
          local_8c[3] = 0;
          local_8 = (uint *)0x0;
          if (local_24 == (uint *)0x0) {
LAB_00600aca:
            iVar12 = FUN_005f7aa3();
            uVar11 = 0;
            if (iVar12 == 0) {
              do {
                if ((uint *)local_8c[uVar11] == local_24) {
                  local_c = (uint *)0x1;
                  break;
                }
                uVar11 = uVar11 + 1;
              } while (uVar11 < 4);
              if (local_c != (uint *)0x0) goto LAB_00600b2f;
            }
            if ((local_30 != (int *)local_44[*(int *)(*(int *)(param_1[5] + *local_1c * 4) + 8)]) &&
               (uVar11 = 0, puVar6[3] != 0)) {
              do {
                if (local_6c[uVar11] == 0) {
                  local_c = (uint *)0x1;
                  break;
                }
                uVar11 = uVar11 + 1;
              } while (uVar11 < puVar6[3]);
              if (local_c != (uint *)0x0) goto LAB_00600b2f;
            }
            local_8 = (uint *)0x0;
            if (local_24 != (uint *)0x0) {
              do {
                if (local_6c[(int)local_8] == 0) {
                  puVar9 = *(undefined4 **)(param_1[5] + local_1c[(int)local_8] * 4);
                  if (local_8c[puVar9[3]] == 1) {
                    aiStack_ac[(int)local_8] = local_1c[(int)local_8];
                    puVar9[3] = local_9c[(int)local_8];
                  }
                  else {
                    iVar12 = FUN_005f74cf(*puVar9,puVar9[2],local_9c[(int)local_8],0);
                    aiStack_ac[(int)local_8] = iVar12;
                    if (iVar12 == -1) goto LAB_00600f8c;
                    local_3c = (int *)(iVar12 << 2);
                    FUN_005f7cfc();
                    *(undefined4 *)(*(int *)((int)local_3c + param_1[5]) + 0x18) = puVar9[6];
                    local_44[puVar9[2]] = local_44[puVar9[2]] + 1;
                    local_8c[puVar9[3]] = local_8c[puVar9[3]] - 1;
                  }
                }
                else {
                  aiStack_ac[(int)local_8] = *(int *)(puVar6[4] + (int)local_8 * 4);
                }
                local_8 = (uint *)((int)local_8 + 1);
              } while (local_8 < local_24);
            }
            local_10 = (uint *)0x0;
            if (local_24 != (uint *)0x0) {
              do {
                local_38 = *(uint **)(param_1[5] + local_1c[(int)local_10] * 4);
                if (local_38[0x10] == 0) {
                  local_18 = (uint *)0x0;
                  for (puVar4 = local_10; puVar10 = local_18, puVar4 < local_24;
                      puVar4 = (uint *)((int)puVar4 + 1)) {
                    iVar12 = *(int *)(param_1[5] + local_1c[(int)puVar4] * 4);
                    if (local_38[0xb] == *(uint *)(iVar12 + 0x2c)) {
                      local_18 = (uint *)((int)local_18 + 1);
                      aiStack_bc[(int)puVar10] = local_1c[(int)puVar4];
                      aiStack_cc[(int)puVar10] = aiStack_ac[(int)puVar4];
                      *(undefined4 *)(iVar12 + 0x40) = 1;
                    }
                  }
                  puVar4 = *(uint **)(param_1[6] + local_38[0xb] * 4);
                  iVar12 = FUN_005f7b0f();
                  if (((iVar12 != 0) || (iVar12 = FUN_005f7b21(), iVar12 != 0)) ||
                     (iVar12 = FUN_005f7b33(), iVar12 != 0)) {
                    local_8 = (uint *)0x0;
                    if (local_18 != (uint *)0x0) {
                      piVar5 = (int *)puVar4[3];
                      do {
                        local_14 = (int *)0x0;
                        if (piVar5 != (int *)0x0) {
                          piVar7 = (int *)puVar4[4];
                          do {
                            if (*piVar7 == aiStack_bc[(int)local_8]) {
                              puVar1[(int)local_8] = (uint)local_14;
                              break;
                            }
                            local_14 = (int *)((int)local_14 + 1);
                            piVar5 = (int *)puVar4[3];
                            piVar7 = piVar7 + 1;
                          } while (local_14 < piVar5);
                        }
                        local_8 = (uint *)((int)local_8 + 1);
                      } while (local_8 < local_18);
                    }
                    pvVar8 = _malloc(0x38);
                    if (pvVar8 == (void *)0x0) {
                      local_c = (uint *)0x0;
                    }
                    else {
                      local_c = (uint *)FUN_005f7709();
                    }
                    if (local_c == (uint *)0x0) goto LAB_00600f8c;
                    iVar12 = FUN_005f7b0f();
                    puVar10 = local_18;
                    if (iVar12 == 0) {
                      iVar12 = FUN_005f7b21();
                      if (iVar12 == 0) {
                        puVar10 = (uint *)((int)local_18 * 3);
                      }
                      else {
                        puVar10 = (uint *)((int)local_18 * 2);
                      }
                    }
                    local_14 = (int *)FUN_005f7760((*puVar4 ^ (uint)local_18) & 0xffffff ^ *puVar4,
                                                   puVar10,local_18,0);
                    if (-1 < (int)local_14) {
                      local_14 = (int *)FUN_005f7a42();
                      if (-1 < (int)local_14) {
                        local_8 = (uint *)0x0;
                        if (local_18 != (uint *)0x0) {
                          local_3c = (int *)((int)local_18 * 3);
                          local_40 = (uint *)((int)local_18 << 3);
                          local_30 = (int *)((int)local_18 << 2);
                          do {
                            *(int *)(local_c[4] + (int)local_8 * 4) = aiStack_cc[(int)local_8];
                            *(undefined4 *)(local_c[2] + (int)local_8 * 4) =
                                 *(undefined4 *)(puVar4[2] + puVar1[(int)local_8] * 4);
                            if ((uint)((int)local_18 * 2) <= local_c[1]) {
                              *(undefined4 *)((int)local_30 + local_c[2]) =
                                   *(undefined4 *)
                                    (puVar4[2] + (puVar4[3] + puVar1[(int)local_8]) * 4);
                            }
                            if ((int *)((int)local_18 * 3) <= (int *)local_c[1]) {
                              *(undefined4 *)((int)local_40 + local_c[2]) =
                                   *(undefined4 *)
                                    (puVar4[2] + (puVar1[(int)local_8] + puVar4[3] * 2) * 4);
                            }
                            local_8 = (uint *)((int)local_8 + 1);
                            local_30 = local_30 + 1;
                            local_40 = local_40 + 1;
                          } while (local_8 < local_18);
                        }
                        if (*(int *)(param_1[6] + local_38[0xb] * 4) != 0) {
                          FUN_005f7186();
                        }
                        *(uint **)(param_1[6] + local_38[0xb] * 4) = local_c;
                        goto LAB_00600e7a;
                      }
                    }
                    FUN_005f7186();
                    goto LAB_00600644;
                  }
                  local_14 = (int *)0x0;
                  if (puVar4[3] != 0) {
                    do {
                      local_3c = (int *)(puVar4[4] + (int)local_14 * 4);
                      puVar10 = (uint *)0x0;
                      do {
                        if (*local_3c == local_1c[(int)puVar10]) {
                          *local_3c = aiStack_ac[(int)puVar10];
                          break;
                        }
                        puVar10 = (uint *)((int)puVar10 + 1);
                      } while (puVar10 < local_24);
                      local_14 = (int *)((int)local_14 + 1);
                    } while (local_14 < (int *)puVar4[3]);
                  }
                }
LAB_00600e7a:
                local_10 = (uint *)((int)local_10 + 1);
              } while (local_10 < local_24);
            }
            puVar4 = (uint *)0x0;
            if (local_24 != (uint *)0x0) {
              do {
                local_1c[(int)puVar4] = aiStack_ac[(int)puVar4];
                piVar5 = local_1c + (int)puVar4;
                puVar4 = (uint *)((int)puVar4 + 1);
                *(undefined4 *)(*(int *)(param_1[5] + *piVar5 * 4) + 0x40) = 1;
              } while (puVar4 < local_24);
            }
          }
          else {
            do {
              local_14 = *(int **)(param_1[5] + local_1c[(int)local_8] * 4);
              if ((param_1[0x18] != *local_14) || (iVar12 = local_14[0xb], iVar12 == -1)) break;
              if (local_14[0x10] != 0) {
                local_c = (uint *)0x1;
              }
              uVar11 = local_8c[local_14[3]];
              if (uVar11 == 0) {
                local_30 = (int *)((int)local_30 + 1);
              }
              local_8c[local_14[3]] = uVar11 + 1;
              puVar4 = *(uint **)(param_1[6] + iVar12 * 4);
              local_40 = puVar4;
              iVar12 = FUN_005f7b0f();
              if (((iVar12 == 0) && (iVar12 = FUN_005f7b21(), iVar12 == 0)) &&
                 (iVar12 = FUN_005f7b33(), iVar12 == 0)) {
                if ((puVar4[3] < 2) || (local_8 == (uint *)local_14[3])) {
                  iVar12 = local_14[3];
LAB_00600a9d:
                  if (local_8c[iVar12] < 2) goto LAB_00600aa6;
                }
                local_c = (uint *)0x1;
              }
              else {
                if ((local_14[0x10] != 0) &&
                   (local_48 = local_9c[(int)local_8], local_48 != local_14[3])) {
                  local_2c = (uint *)puVar4[3];
                  local_38 = (uint *)0xffffffff;
                  local_10 = (uint *)0xffffffff;
                  local_18 = (uint *)0x0;
                  if (local_2c != (uint *)0x0) {
                    local_3c = local_1c + (int)local_8;
                    local_34 = (int *)puVar4[4];
                    local_4c = *local_3c;
                    do {
                      if (local_4c == *local_34) {
                        local_38 = local_18;
                      }
                      if (local_48 == *(uint *)(*(int *)(param_1[5] + *local_34 * 4) + 0xc)) {
                        local_10 = local_18;
                      }
                      local_18 = (uint *)((int)local_18 + 1);
                      local_34 = local_34 + 1;
                    } while (local_18 < local_2c);
                    if ((local_38 != (uint *)0xffffffff) && (local_10 != (uint *)0xffffffff)) {
                      uVar11 = puVar4[2];
                      local_4c = (int)local_10 * 4;
                      if (((*(int *)(uVar11 + (int)local_38 * 4) == *(int *)(uVar11 + local_4c)) &&
                          ((local_48 = (int)local_2c * 2, puVar4[1] < local_48 ||
                           (puVar4 = local_40,
                           *(int *)(uVar11 + ((int)local_38 + (int)local_2c) * 4) ==
                           *(int *)(uVar11 + ((int)local_10 + (int)local_2c) * 4))))) &&
                         ((puVar4[1] < (uint)((int)local_2c * 3) ||
                          (puVar4 = local_40,
                          *(int *)(uVar11 + ((int)local_38 + local_48) * 4) ==
                          *(int *)(uVar11 + ((int)local_10 + local_48) * 4))))) {
                        *local_3c = *(int *)(local_4c + puVar4[4]);
                      }
                    }
                  }
                }
                iVar12 = (**(code **)(*param_1 + 0x20))();
                if (iVar12 != 0) {
                  iVar12 = local_14[3];
                  goto LAB_00600a9d;
                }
              }
LAB_00600aa6:
              local_8 = (uint *)((int)local_8 + 1);
            } while (local_8 < local_24);
            if (local_8 < local_24) {
              local_c = (uint *)0x1;
            }
            if (local_c == (uint *)0x0) goto LAB_00600aca;
LAB_00600b2f:
            local_6c[0] = 0;
            local_6c[1] = 0;
            local_6c[2] = 0;
            local_6c[3] = 0;
          }
          local_28 = (uint *)((int)local_28 + 1);
          lVar18 = CONCAT44(&local_1c,local_28);
        }
        iVar12 = FUN_005f7aa3();
        puVar4 = local_20;
        if (iVar12 != 0) {
          uVar11 = 0;
          local_28 = (uint *)0x0;
          if (puVar6[3] != 0) {
            do {
              if (local_6c[(int)local_28] == 0) {
                *(undefined4 *)(puVar6[4] + uVar11 * 4) =
                     *(undefined4 *)(puVar6[4] + (int)local_28 * 4);
                *(undefined4 *)(puVar6[2] + uVar11 * 4) =
                     *(undefined4 *)(puVar6[2] + (int)local_28 * 4);
                uVar11 = uVar11 + 1;
              }
              else {
                iVar12 = uVar11 * 4;
                local_3c = *(int **)(param_1[5] + *(int *)(iVar12 + puVar6[4]) * 4);
                if (local_3c[0x11] == 0) {
                  local_3c[0x11] =
                       *(int *)(*(int *)(param_1[5] + *(int *)(iVar12 + puVar6[2]) * 4) + 0x44);
                  *(undefined4 *)(*(int *)(param_1[5] + *(int *)(iVar12 + puVar6[4]) * 4) + 0x48) =
                       *(undefined4 *)
                        (*(int *)(param_1[5] + *(int *)(iVar12 + puVar6[2]) * 4) + 0x48);
                }
              }
              local_28 = (uint *)((int)local_28 + 1);
            } while (local_28 < (uint *)puVar6[3]);
          }
          *puVar6 = -(uint)(uVar11 != 0) & (uVar11 & 0xffffff | 0x10000000);
          puVar6[1] = uVar11;
          puVar6[3] = uVar11;
        }
      }
    }
    local_14 = (int *)0x0;
  }
LAB_00600644:
  _free(local_44);
  return local_14;
}
