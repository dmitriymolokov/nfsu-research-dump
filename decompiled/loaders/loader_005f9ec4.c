/* Decompiled from Speed.exe @ 005f9ec4 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_005f9ec4(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  bool bVar19;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  uint local_3c;
  int local_38;
  int *local_34;
  int *local_30;
  uint local_2c;
  uint local_28;
  int *local_24;
  int *local_20;
  uint local_1c;
  int *local_18;
  uint local_c;
  uint local_8;
  
  local_38 = -1;
  uVar2 = *(uint *)(param_1 + 0xc);
  uVar14 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      iVar10 = *(int *)(*(int *)(param_1 + 0x10) + uVar14 * 4);
      if ((*(byte *)(iVar10 + 4) & 0x20) == 0) {
        *(undefined4 *)(iVar10 + 0x10) = 0;
        *(undefined4 *)(iVar10 + 0x14) = 0;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < *(uint *)(param_1 + 4));
  }
  local_2c = 0;
  if (uVar2 != 0) {
    do {
      puVar3 = *(uint **)(*(int *)(param_1 + 0x18) + local_2c * 4);
      iVar10 = FUN_005f7a96();
      if (iVar10 == 0) {
        uVar14 = 0;
        if (*(int *)(param_1 + 4) != 0) {
          do {
            iVar10 = uVar14 * 4;
            uVar14 = uVar14 + 1;
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + iVar10) + 0x14) = 0;
          } while (uVar14 < *(uint *)(param_1 + 4));
        }
        if ((puVar3[3] < 5) ||
           ((iVar10 = FUN_005f7b0f(), iVar10 == 0 && (iVar10 = FUN_005f7b21(), iVar10 == 0)))) {
          local_8 = 0;
          if (puVar3[3] != 0) {
            do {
              piVar4 = *(int **)(*(int *)(param_1 + 0x14) + *(int *)(puVar3[4] + local_8 * 4) * 4);
              iVar10 = *(int *)(*(int *)(param_1 + 0x10) + *piVar4 * 4);
              if (((*(byte *)(iVar10 + 4) & 0x20) == 0) && (piVar4[2] == -1)) {
                piVar4[2] = *(int *)(iVar10 + 0x10);
                piVar5 = (int *)(iVar10 + 0x14);
                piVar4[3] = *piVar5;
                *piVar5 = *piVar5 + 1;
                if (*(int *)(iVar10 + 0xc) == *piVar5) {
                  *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
                  *piVar5 = 0;
                }
              }
              local_8 = local_8 + 1;
            } while (local_8 < puVar3[3]);
          }
          uVar14 = 0;
          if (*(int *)(param_1 + 4) != 0) {
            do {
              iVar10 = *(int *)(*(int *)(param_1 + 0x10) + uVar14 * 4);
              if (*(int *)(iVar10 + 0x14) != 0) {
                *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
                *(undefined4 *)(iVar10 + 0x14) = 0;
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < *(uint *)(param_1 + 4));
          }
        }
        else {
          iVar10 = FUN_005f7b21();
          if (iVar10 == 0) {
            local_34 = (int *)0x0;
          }
          else {
            local_34 = (int *)puVar3[3];
          }
          iVar10 = FUN_005f7b67();
          local_8 = 0;
          if (puVar3[3] != 0) {
            local_24 = (int *)((int)local_34 << 2);
            do {
              iVar15 = *(int *)(param_1 + 0x14);
              piVar4 = *(int **)(iVar15 + *(int *)(local_8 * 4 + puVar3[4]) * 4);
              iVar16 = *(int *)(*(int *)(param_1 + 0x10) + *piVar4 * 4);
              if (((*(byte *)(iVar16 + 4) & 0x20) == 0) && (piVar4[2] == -1)) {
                piVar5 = *(int **)(iVar15 + *(int *)(puVar3[2] + local_8 * 4) * 4);
                piVar6 = *(int **)(iVar15 + *(int *)((int)local_24 + puVar3[2]) * 4);
                local_18 = (int *)local_8;
                if (local_8 < puVar3[3]) {
                  local_28 = (uint)local_24;
                  do {
                    iVar15 = *(int *)(param_1 + 0x14);
                    piVar7 = *(int **)(iVar15 + *(int *)((int)local_18 * 4 + puVar3[4]) * 4);
                    if ((*piVar4 == *piVar7) && (piVar7[2] == -1)) {
                      piVar8 = *(int **)(iVar15 + *(int *)((int)local_18 * 4 + puVar3[2]) * 4);
                      piVar9 = *(int **)(iVar15 + *(int *)(local_28 + puVar3[2]) * 4);
                      if ((((*piVar5 == *piVar8) &&
                           (((piVar5[1] == piVar8[1] && (piVar5[2] == piVar8[2])) &&
                            (*piVar6 == *piVar9)))) &&
                          ((piVar6[1] == piVar9[1] && (piVar6[2] == piVar9[2])))) ||
                         ((iVar10 != 0 &&
                          (((*piVar5 == *piVar9 && (piVar5[1] == piVar9[1])) &&
                           ((piVar5[2] == piVar9[2] &&
                            (((*piVar6 == *piVar8 && (piVar6[1] == piVar8[1])) &&
                             (piVar6[2] == piVar8[2])))))))))) {
                        piVar7[2] = *(int *)(iVar16 + 0x10);
                        piVar8 = (int *)(iVar16 + 0x14);
                        piVar7[3] = *piVar8;
                        *piVar8 = *piVar8 + 1;
                        if (*(int *)(iVar16 + 0xc) == *piVar8) {
                          *(int *)(iVar16 + 0x10) = *(int *)(iVar16 + 0x10) + 1;
                          *piVar8 = 0;
                        }
                      }
                    }
                    local_18 = (int *)((int)local_18 + 1);
                    local_28 = local_28 + 4;
                  } while (local_18 < puVar3[3]);
                }
                if (*(int *)(iVar16 + 0x14) != 0) {
                  *(int *)(iVar16 + 0x10) = *(int *)(iVar16 + 0x10) + 1;
                  *(undefined4 *)(iVar16 + 0x14) = 0;
                }
              }
              local_8 = local_8 + 1;
              local_24 = (int *)((int)local_24 + 4);
            } while (local_8 < puVar3[3]);
          }
        }
        iVar10 = FUN_005f7ad9();
        if (((iVar10 == 0) && (iVar10 = FUN_005f7b0f(), iVar10 == 0)) &&
           ((iVar10 = FUN_005f7b21(), iVar10 == 0 && (iVar10 = FUN_005f7b33(), iVar10 == 0)))) {
          iVar10 = FUN_005f7ac7();
          if (iVar10 == 0) {
            if (puVar3[3] == 0) {
              iVar10 = FUN_005f75cb();
              if (iVar10 == -1) {
                return 0x8007000e;
              }
            }
            else {
              local_34 = (int *)puVar3[4];
              local_c = 0;
              piVar4 = *(int **)(*(int *)(param_1 + 0x14) + *local_34 * 4);
              if (puVar3[3] != 0) {
                local_3c = puVar3[3];
                do {
                  piVar5 = *(int **)(*(int *)(param_1 + 0x14) + *local_34 * 4);
                  if (((*piVar4 == *piVar5) && (piVar4[1] == piVar5[1])) && (piVar4[2] == piVar5[2])
                     ) {
                    local_c = local_c + 1;
                  }
                  local_34 = local_34 + 1;
                  local_3c = local_3c - 1;
                } while (local_3c != 0);
              }
              uVar14 = puVar3[3];
              if (local_c == uVar14) {
                iVar10 = FUN_005f752b(*puVar3,puVar3[1],uVar14);
                if (iVar10 == -1) {
                  return 0x8007000e;
                }
                iVar10 = *(int *)(*(int *)(param_1 + 0x18) + iVar10 * 4);
                FUN_005f7a42();
                puVar17 = (undefined4 *)puVar3[2];
                puVar18 = *(undefined4 **)(iVar10 + 8);
                for (uVar14 = puVar3[1] & 0x3fffffff; uVar14 != 0; uVar14 = uVar14 - 1) {
                  *puVar18 = *puVar17;
                  puVar17 = puVar17 + 1;
                  puVar18 = puVar18 + 1;
                }
                for (iVar15 = 0; iVar15 != 0; iVar15 = iVar15 + -1) {
                  *(undefined1 *)puVar18 = *(undefined1 *)puVar17;
                  puVar17 = (undefined4 *)((int)puVar17 + 1);
                  puVar18 = (undefined4 *)((int)puVar18 + 1);
                }
                uVar14 = puVar3[3];
                puVar17 = (undefined4 *)puVar3[4];
                puVar18 = *(undefined4 **)(iVar10 + 0x10);
              }
              else {
                iVar10 = FUN_005f752b(*puVar3,puVar3[1],uVar14);
                if (iVar10 == -1) {
                  return 0x8007000e;
                }
                iVar10 = *(int *)(*(int *)(param_1 + 0x18) + iVar10 * 4);
                FUN_005f7a42();
                *(undefined4 *)
                 (*(int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x60) * 4) + 0x14) = 0;
                local_28 = 0;
                if (*(int *)(iVar10 + 0xc) != 0) {
                  do {
                    iVar15 = *(int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x60) * 4);
                    iVar16 = *(int *)(iVar15 + 0x14);
                    *(int *)(iVar15 + 0x14) = iVar16 + 1;
                    iVar15 = local_28 * 4;
                    uVar11 = FUN_005f74cf(*(int *)(param_1 + 0x60),
                                          *(undefined4 *)
                                           (*(int *)(*(int *)(param_1 + 0x10) +
                                                    *(int *)(param_1 + 0x60) * 4) + 0x10),iVar16,0);
                    *(undefined4 *)(iVar15 + *(int *)(iVar10 + 0x10)) = uVar11;
                    if (*(int *)(iVar15 + *(int *)(iVar10 + 0x10)) == -1) {
                      return 0x8007000e;
                    }
                    FUN_005f7cfc();
                    local_28 = local_28 + 1;
                    *(undefined4 *)
                     (*(int *)(*(int *)(param_1 + 0x14) +
                              *(int *)(iVar15 + *(int *)(iVar10 + 0x10)) * 4) + 0x18) =
                         *(undefined4 *)
                          (*(int *)(*(int *)(param_1 + 0x14) + *(int *)(iVar15 + puVar3[4]) * 4) +
                          0x18);
                  } while (local_28 < *(uint *)(iVar10 + 0xc));
                }
                piVar4 = (int *)(*(int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x60) * 4) +
                                0x10);
                *piVar4 = *piVar4 + 1;
                *(undefined4 *)
                 (*(int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x60) * 4) + 0x14) = 0;
                puVar17 = (undefined4 *)puVar3[2];
                puVar18 = *(undefined4 **)(iVar10 + 8);
                for (uVar14 = *(uint *)(iVar10 + 4) & 0x3fffffff; uVar14 != 0; uVar14 = uVar14 - 1)
                {
                  *puVar18 = *puVar17;
                  puVar17 = puVar17 + 1;
                  puVar18 = puVar18 + 1;
                }
                for (iVar15 = 0; iVar15 != 0; iVar15 = iVar15 + -1) {
                  *(undefined1 *)puVar18 = *(undefined1 *)puVar17;
                  puVar17 = (undefined4 *)((int)puVar17 + 1);
                  puVar18 = (undefined4 *)((int)puVar18 + 1);
                }
                iVar15 = FUN_005f752b(puVar3[3] & 0xffffff | 0x10000000,0xffffffff,0xffffffff);
                if (iVar15 == -1) {
                  return 0x8007000e;
                }
                iVar15 = *(int *)(*(int *)(param_1 + 0x18) + iVar15 * 4);
                FUN_005f7a42();
                puVar17 = (undefined4 *)puVar3[4];
                puVar18 = *(undefined4 **)(iVar15 + 0x10);
                for (uVar14 = *(uint *)(iVar15 + 0xc) & 0x3fffffff; uVar14 != 0; uVar14 = uVar14 - 1
                    ) {
                  *puVar18 = *puVar17;
                  puVar17 = puVar17 + 1;
                  puVar18 = puVar18 + 1;
                }
                for (iVar16 = 0; iVar16 != 0; iVar16 = iVar16 + -1) {
                  *(undefined1 *)puVar18 = *(undefined1 *)puVar17;
                  puVar17 = (undefined4 *)((int)puVar17 + 1);
                  puVar18 = (undefined4 *)((int)puVar18 + 1);
                }
                uVar14 = *(uint *)(iVar15 + 4);
                puVar17 = *(undefined4 **)(iVar10 + 0x10);
                puVar18 = *(undefined4 **)(iVar15 + 8);
              }
              for (uVar14 = uVar14 & 0x3fffffff; uVar14 != 0; uVar14 = uVar14 - 1) {
                *puVar18 = *puVar17;
                puVar17 = puVar17 + 1;
                puVar18 = puVar18 + 1;
              }
              for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
                *(undefined1 *)puVar18 = *(undefined1 *)puVar17;
                puVar17 = (undefined4 *)((int)puVar17 + 1);
                puVar18 = (undefined4 *)((int)puVar18 + 1);
              }
            }
          }
          else {
            uVar14 = *puVar3;
            local_c = 0;
            *(undefined4 *)
             (*(int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x60) * 4) + 0x14) = 0;
            uVar14 = uVar14 & 0xffffff;
            for (uVar12 = uVar14; uVar12 != 0; uVar12 = uVar12 - local_8) {
              local_8 = 0;
              uVar1 = uVar12;
              if ((4 < uVar12) && (uVar1 = local_8, uVar14 != 0)) {
                local_20 = (int *)puVar3[2];
                local_24 = local_20 + uVar14;
                local_3c = 1;
                do {
                  if (*local_20 != -1) {
                    piVar4 = *(int **)(*(int *)(param_1 + 0x14) + *local_20 * 4);
                    piVar5 = *(int **)(*(int *)(param_1 + 0x14) + *local_24 * 4);
                    local_1c = 1;
                    local_18 = local_24;
                    local_30 = local_20;
                    for (uVar1 = local_3c; uVar1 < uVar14; uVar1 = uVar1 + 1) {
                      local_18 = local_18 + 1;
                      local_30 = local_30 + 1;
                      if (*local_18 != -1) {
                        piVar6 = *(int **)(*(int *)(param_1 + 0x14) + *local_30 * 4);
                        piVar7 = *(int **)(*(int *)(param_1 + 0x14) + *local_18 * 4);
                        if (((((*piVar4 == *piVar6) && (piVar4[1] == piVar6[1])) &&
                             (piVar4[2] == piVar6[2])) &&
                            ((*piVar5 == *piVar7 && (piVar5[1] == piVar7[1])))) &&
                           ((piVar5[2] == piVar7[2] && (local_1c = local_1c + 1, local_1c == 4))))
                        break;
                      }
                    }
                    if (local_8 < local_1c) {
                      local_8 = local_1c;
                      local_48 = *piVar4;
                      local_54 = *piVar5;
                      local_4c = piVar4[1];
                      local_50 = piVar4[2];
                      local_58 = piVar5[1];
                      local_5c = piVar5[2];
                    }
                    uVar1 = local_8;
                    if (local_8 == 4) break;
                  }
                  local_20 = local_20 + 1;
                  local_24 = local_24 + 1;
                  bVar19 = local_3c < uVar14;
                  local_3c = local_3c + 1;
                  uVar1 = local_8;
                } while (bVar19);
              }
              local_8 = uVar1;
              iVar10 = FUN_005f752b(local_8 & 0xffffff | 0x30000000,0xffffffff,0xffffffff);
              if (iVar10 == -1) {
                return 0x8007000e;
              }
              iVar10 = *(int *)(*(int *)(param_1 + 0x18) + iVar10 * 4);
              FUN_005f7a42();
              local_24 = (int *)0x0;
              local_18 = (int *)0x0;
              if (uVar14 != 0) {
                iVar15 = uVar14 << 2;
                local_34 = (int *)(local_8 << 2);
                do {
                  if (local_8 <= local_24) break;
                  iVar16 = *(int *)(puVar3[2] + (int)local_18 * 4);
                  if (iVar16 != -1) {
                    piVar4 = *(int **)(*(int *)(param_1 + 0x14) + iVar16 * 4);
                    piVar5 = *(int **)(*(int *)(param_1 + 0x14) + *(int *)(iVar15 + puVar3[2]) * 4);
                    if ((uVar12 < 5) ||
                       (((local_48 == *piVar4 && (local_4c == piVar4[1])) &&
                        ((local_50 == piVar4[2] &&
                         (((local_54 == *piVar5 && (local_58 == piVar5[1])) &&
                          (local_5c == piVar5[2])))))))) {
                      *(int *)(*(int *)(iVar10 + 8) + (int)local_24 * 4) = iVar16;
                      *(undefined4 *)((int)local_34 + *(int *)(iVar10 + 8)) =
                           *(undefined4 *)(iVar15 + puVar3[2]);
                      *(undefined4 *)(puVar3[2] + (int)local_18 * 4) = 0xffffffff;
                      *(undefined4 *)(iVar15 + puVar3[2]) = 0xffffffff;
                      local_24 = (int *)((int)local_24 + 1);
                      local_34 = (int *)((int)local_34 + 4);
                    }
                  }
                  local_18 = (int *)((int)local_18 + 1);
                  iVar15 = iVar15 + 4;
                } while (local_18 < uVar14);
              }
              if (uVar14 < 5) {
                **(undefined4 **)(iVar10 + 0x10) = *(undefined4 *)puVar3[4];
              }
              else {
                iVar15 = *(int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x60) * 4);
                iVar16 = *(int *)(iVar15 + 0x14);
                *(int *)(iVar15 + 0x14) = iVar16 + 1;
                uVar11 = FUN_005f74cf(*(int *)(param_1 + 0x60),
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(param_1 + 0x10) +
                                                *(int *)(param_1 + 0x60) * 4) + 0x10),iVar16,0);
                **(undefined4 **)(iVar10 + 0x10) = uVar11;
                if (**(int **)(iVar10 + 0x10) == -1) {
                  return 0x8007000e;
                }
                iVar10 = *(int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x60) * 4);
                if (*(int *)(iVar10 + 0xc) == *(int *)(iVar10 + 0x14)) {
                  *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
                  *(undefined4 *)
                   (*(int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x60) * 4) + 0x14) = 0;
                }
              }
              local_c = local_c + 1;
            }
            iVar10 = *(int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x60) * 4);
            if (*(int *)(iVar10 + 0x14) != 0) {
              piVar4 = (int *)(iVar10 + 0x10);
              *piVar4 = *piVar4 + 1;
            }
            if (1 < local_c) {
              if ((local_38 == -1) &&
                 (local_38 = FUN_005f74cf(*(undefined4 *)(param_1 + 0x50),0xffffffff,0,
                                          0x3ff0000000000000), local_38 == -1)) {
                return 0x8007000e;
              }
              do {
                local_24 = (int *)(*(int *)(param_1 + 0xc) - local_c);
                local_20 = (int *)0x0;
                *(undefined4 *)
                 (*(int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x60) * 4) + 0x14) = 0;
                if (local_c != 0) {
                  local_28 = 0;
                  do {
                    uVar14 = local_c - local_28;
                    if (4 < uVar14) {
                      uVar14 = 4;
                    }
                    if (uVar14 == 1) {
                      uVar12 = 0x10000001;
                    }
                    else if (uVar14 == 2) {
                      uVar12 = 0x24000001;
                    }
                    else {
                      uVar12 = uVar14 & 0xffffff | 0x30000000;
                    }
                    iVar10 = FUN_005f752b(uVar12,0xffffffff,0xffffffff);
                    if (iVar10 == -1) {
                      return 0x8007000e;
                    }
                    iVar10 = *(int *)(*(int *)(param_1 + 0x18) + iVar10 * 4);
                    FUN_005f7a42();
                    local_3c = 0;
                    if (uVar14 != 0) {
                      local_30 = (int *)(uVar14 << 2);
                      local_34 = (int *)((int)local_24 << 2);
                      do {
                        *(undefined4 *)(*(int *)(iVar10 + 8) + local_3c * 4) =
                             **(undefined4 **)
                               (*(int *)(*(int *)(param_1 + 0x18) + (int)local_34) + 0x10);
                        if (2 < uVar14) {
                          *(int *)((int)local_30 + *(int *)(iVar10 + 8)) = local_38;
                        }
                        local_34 = (int *)((int)local_34 + 4);
                        local_30 = (int *)((int)local_30 + 4);
                        local_3c = local_3c + 1;
                      } while (local_3c < uVar14);
                    }
                    if (local_c < 5) {
                      **(undefined4 **)(iVar10 + 0x10) = *(undefined4 *)puVar3[4];
                    }
                    else {
                      iVar15 = *(int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x60) * 4);
                      iVar16 = *(int *)(iVar15 + 0x14);
                      *(int *)(iVar15 + 0x14) = iVar16 + 1;
                      uVar11 = FUN_005f74cf(*(int *)(param_1 + 0x60),
                                            *(undefined4 *)
                                             (*(int *)(*(int *)(param_1 + 0x10) +
                                                      *(int *)(param_1 + 0x60) * 4) + 0x10),iVar16,0
                                           );
                      **(undefined4 **)(iVar10 + 0x10) = uVar11;
                      if (**(int **)(iVar10 + 0x10) == -1) {
                        return 0x8007000e;
                      }
                      iVar10 = *(int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x60) * 4);
                      if (*(int *)(iVar10 + 0xc) == *(int *)(iVar10 + 0x14)) {
                        *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
                        *(undefined4 *)
                         (*(int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x60) * 4) + 0x14)
                             = 0;
                      }
                    }
                    local_24 = (int *)((int)local_24 + uVar14);
                    local_28 = local_28 + 4;
                    local_20 = (int *)((int)local_20 + 1);
                  } while (local_28 < local_c);
                }
                iVar10 = *(int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x60) * 4);
                if (*(int *)(iVar10 + 0x14) != 0) {
                  piVar4 = (int *)(iVar10 + 0x10);
                  *piVar4 = *piVar4 + 1;
                }
                local_c = (uint)local_20;
              } while (1 < local_20);
            }
          }
        }
        else {
          uVar14 = puVar3[3];
          while (uVar14 != 0) {
            local_34 = (int *)puVar3[4];
            piVar4 = *(int **)(*(int *)(param_1 + 0x14) + *local_34 * 4);
            local_c = 0;
            if (puVar3[3] != 0) {
              local_3c = puVar3[3];
              do {
                piVar5 = *(int **)(*(int *)(param_1 + 0x14) + *local_34 * 4);
                if (((*piVar4 == *piVar5) && (piVar4[1] == piVar5[1])) && (piVar4[2] == piVar5[2]))
                {
                  local_c = local_c + 1;
                }
                local_34 = local_34 + 1;
                local_3c = local_3c - 1;
              } while (local_3c != 0);
            }
            iVar10 = FUN_005f752b((*puVar3 ^ local_c) & 0xffffff ^ *puVar3,0xffffffff,0xffffffff);
            if (iVar10 == -1) {
              return 0x8007000e;
            }
            iVar10 = *(int *)(*(int *)(param_1 + 0x18) + iVar10 * 4);
            FUN_005f7a42();
            iVar15 = FUN_005f7ad9();
            if (iVar15 == 0) {
              iVar15 = FUN_005f7b0f();
              if (iVar15 == 0) {
                iVar15 = FUN_005f7b21();
                if (iVar15 == 0) {
                  iVar15 = FUN_005f7b33();
                  if (iVar15 == 0) goto LAB_005facad;
                  iVar15 = 0;
                  local_8 = 0;
                  local_c = 0;
                  if (puVar3[3] != 0) {
                    do {
                      iVar16 = *(int *)(puVar3[4] + local_8 * 4);
                      piVar5 = *(int **)(*(int *)(param_1 + 0x14) + iVar16 * 4);
                      if (((*piVar4 == *piVar5) && (piVar4[1] == piVar5[1])) &&
                         (piVar4[2] == piVar5[2])) {
                        *(int *)(*(int *)(iVar10 + 0x10) + iVar15 * 4) = iVar16;
                        *(undefined4 *)(*(int *)(iVar10 + 8) + iVar15 * 4) =
                             *(undefined4 *)(puVar3[2] + local_8 * 4);
                        *(undefined4 *)
                         (*(int *)(iVar10 + 8) + (*(int *)(iVar10 + 0xc) + iVar15) * 4) =
                             *(undefined4 *)(puVar3[2] + (puVar3[3] + local_8) * 4);
                        *(undefined4 *)
                         (*(int *)(iVar10 + 8) + (local_c + *(int *)(iVar10 + 0xc) * 2) * 4) =
                             *(undefined4 *)(puVar3[2] + (local_8 + puVar3[3] * 2) * 4);
                        iVar15 = local_c + 1;
                        local_c = iVar15;
                      }
                      else {
                        iVar13 = (local_8 - iVar15) * 4;
                        *(int *)(iVar13 + puVar3[4]) = iVar16;
                        *(undefined4 *)(iVar13 + puVar3[2]) =
                             *(undefined4 *)(puVar3[2] + local_8 * 4);
                        *(undefined4 *)(puVar3[2] + ((puVar3[3] - iVar15) + local_8) * 4) =
                             *(undefined4 *)(puVar3[2] + (puVar3[3] + local_8) * 4);
                        *(undefined4 *)(puVar3[2] + ((puVar3[3] * 2 - iVar15) + local_8) * 4) =
                             *(undefined4 *)(puVar3[2] + (puVar3[3] * 2 + local_8) * 4);
                      }
                      local_8 = local_8 + 1;
                    } while (local_8 < puVar3[3]);
                  }
                  uVar14 = puVar3[3] - iVar15;
                  puVar17 = (undefined4 *)(puVar3[2] + puVar3[3] * 4);
                  puVar18 = (undefined4 *)(uVar14 * 4 + puVar3[2]);
                  for (uVar12 = uVar14 & 0x3fffffff; uVar12 != 0; uVar12 = uVar12 - 1) {
                    *puVar18 = *puVar17;
                    puVar17 = puVar17 + 1;
                    puVar18 = puVar18 + 1;
                  }
                  for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
                    *(undefined1 *)puVar18 = *(undefined1 *)puVar17;
                    puVar17 = (undefined4 *)((int)puVar17 + 1);
                    puVar18 = (undefined4 *)((int)puVar18 + 1);
                  }
                  iVar10 = puVar3[3] - iVar15;
                  puVar17 = (undefined4 *)(puVar3[2] + puVar3[3] * 8);
                  puVar18 = (undefined4 *)(puVar3[2] + iVar10 * 8);
                  for (; iVar10 != 0; iVar10 = iVar10 + -1) {
                    *puVar18 = *puVar17;
                    puVar17 = puVar17 + 1;
                    puVar18 = puVar18 + 1;
                  }
                  puVar3[3] = puVar3[3] - iVar15;
                  uVar14 = puVar3[3] * 3;
                }
                else {
                  iVar15 = 0;
                  local_8 = 0;
                  local_c = 0;
                  if (puVar3[3] != 0) {
                    do {
                      iVar16 = *(int *)(puVar3[4] + local_8 * 4);
                      piVar5 = *(int **)(*(int *)(param_1 + 0x14) + iVar16 * 4);
                      if (((*piVar4 == *piVar5) && (piVar4[1] == piVar5[1])) &&
                         (piVar4[2] == piVar5[2])) {
                        *(int *)(*(int *)(iVar10 + 0x10) + iVar15 * 4) = iVar16;
                        *(undefined4 *)(*(int *)(iVar10 + 8) + iVar15 * 4) =
                             *(undefined4 *)(puVar3[2] + local_8 * 4);
                        *(undefined4 *)
                         (*(int *)(iVar10 + 8) + (*(int *)(iVar10 + 0xc) + iVar15) * 4) =
                             *(undefined4 *)(puVar3[2] + (puVar3[3] + local_8) * 4);
                        iVar15 = local_c + 1;
                        local_c = iVar15;
                      }
                      else {
                        iVar13 = (local_8 - iVar15) * 4;
                        *(int *)(iVar13 + puVar3[4]) = iVar16;
                        *(undefined4 *)(iVar13 + puVar3[2]) =
                             *(undefined4 *)(puVar3[2] + local_8 * 4);
                        *(undefined4 *)(puVar3[2] + ((puVar3[3] - iVar15) + local_8) * 4) =
                             *(undefined4 *)(puVar3[2] + (puVar3[3] + local_8) * 4);
                      }
                      local_8 = local_8 + 1;
                    } while (local_8 < puVar3[3]);
                  }
                  uVar14 = puVar3[3] - iVar15;
                  puVar17 = (undefined4 *)(puVar3[2] + puVar3[3] * 4);
                  puVar18 = (undefined4 *)(uVar14 * 4 + puVar3[2]);
                  for (uVar12 = uVar14 & 0x3fffffff; uVar12 != 0; uVar12 = uVar12 - 1) {
                    *puVar18 = *puVar17;
                    puVar17 = puVar17 + 1;
                    puVar18 = puVar18 + 1;
                  }
                  for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
                    *(undefined1 *)puVar18 = *(undefined1 *)puVar17;
                    puVar17 = (undefined4 *)((int)puVar17 + 1);
                    puVar18 = (undefined4 *)((int)puVar18 + 1);
                  }
                  puVar3[3] = puVar3[3] - iVar15;
                  uVar14 = puVar3[3] * 2;
                }
              }
              else {
                local_8 = 0;
                local_c = 0;
                if (puVar3[3] != 0) {
                  do {
                    iVar15 = *(int *)(puVar3[4] + local_8 * 4);
                    piVar5 = *(int **)(*(int *)(param_1 + 0x14) + iVar15 * 4);
                    if (((*piVar4 == *piVar5) && (piVar4[1] == piVar5[1])) &&
                       (piVar4[2] == piVar5[2])) {
                      *(int *)(*(int *)(iVar10 + 0x10) + local_c * 4) = iVar15;
                      *(undefined4 *)(*(int *)(iVar10 + 8) + local_c * 4) =
                           *(undefined4 *)(puVar3[2] + local_8 * 4);
                      local_c = local_c + 1;
                    }
                    else {
                      iVar16 = (local_8 - local_c) * 4;
                      *(int *)(iVar16 + puVar3[4]) = iVar15;
                      *(undefined4 *)(iVar16 + puVar3[2]) = *(undefined4 *)(puVar3[2] + local_8 * 4)
                      ;
                    }
                    local_8 = local_8 + 1;
                  } while (local_8 < puVar3[3]);
                }
                puVar3[3] = puVar3[3] - local_c;
                uVar14 = puVar3[3];
              }
              puVar3[1] = uVar14;
            }
            else {
              local_8 = 0;
              local_c = 0;
              if (puVar3[3] != 0) {
                do {
                  iVar15 = *(int *)(puVar3[4] + local_8 * 4);
                  piVar5 = *(int **)(*(int *)(param_1 + 0x14) + iVar15 * 4);
                  if (((*piVar4 == *piVar5) && (piVar4[1] == piVar5[1])) && (piVar4[2] == piVar5[2])
                     ) {
                    uVar14 = *(uint *)(iVar10 + 0x10);
                    uVar12 = local_c;
                    local_c = local_c + 1;
                  }
                  else {
                    uVar12 = local_8 - local_c;
                    uVar14 = puVar3[4];
                  }
                  local_8 = local_8 + 1;
                  *(int *)(uVar14 + uVar12 * 4) = iVar15;
                } while (local_8 < puVar3[3]);
              }
              puVar3[3] = puVar3[3] - local_c;
            }
LAB_005facad:
            uVar14 = puVar3[3];
          }
        }
        *puVar3 = 0;
      }
      local_2c = local_2c + 1;
    } while (local_2c < uVar2);
  }
  return 0;
}

