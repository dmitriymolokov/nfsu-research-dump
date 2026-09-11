/* Decompiled from Speed.exe @ 005fca3e */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_005fca3e(int param_1)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  int *piVar15;
  undefined4 *puVar16;
  bool bVar17;
  int *local_28;
  uint local_20;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  bVar8 = false;
  FUN_005fbe17();
  local_18 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      puVar3 = *(uint **)(*(int *)(param_1 + 0x18) + local_18 * 4);
      iVar9 = FUN_005f7a96();
      if ((iVar9 == 0) && (local_20 = 0, local_18 != 0)) {
LAB_005fca8a:
        puVar4 = *(uint **)(*(int *)(param_1 + 0x18) + local_20 * 4);
        if (((*puVar4 ^ *puVar3) & 0xff000000) != 0) {
LAB_005fd4fc:
          local_20 = local_20 + 1;
          if (local_18 <= local_20) goto LAB_005fd41f;
          goto LAB_005fca8a;
        }
        iVar9 = FUN_005f7aa3();
        if (iVar9 == 0) {
          iVar9 = FUN_005f7b0f();
          if (iVar9 == 0) {
            iVar9 = FUN_005f7b21();
            if (iVar9 != 0) {
              local_14 = 0;
              if (puVar3[3] != 0) {
                while( true ) {
                  iVar9 = *(int *)(param_1 + 0x14);
                  iVar5 = **(int **)(iVar9 + *(int *)(local_14 * 4 + puVar3[4]) * 4);
                  if ((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + iVar5 * 4) + 4) & 0x10) != 0)
                  break;
                  iVar12 = *(int *)(iVar9 + *(int *)(local_14 * 4 + puVar3[2]) * 4);
                  local_c = 0;
                  uVar11 = puVar4[3];
                  iVar9 = *(int *)(iVar9 + *(int *)(puVar3[2] + (puVar3[3] + local_14) * 4) * 4);
                  if (uVar11 != 0) {
                    do {
                      iVar10 = *(int *)(param_1 + 0x14);
                      if (iVar5 == **(int **)(iVar10 + *(int *)(puVar4[4] + local_c * 4) * 4)) {
                        iVar7 = *(int *)(iVar10 + *(int *)(puVar4[2] + (uVar11 + local_c) * 4) * 4);
                        iVar6 = *(int *)(iVar12 + 0x1c);
                        iVar10 = *(int *)(*(int *)(iVar10 + *(int *)(puVar4[2] + local_c * 4) * 4) +
                                         0x1c);
                        if (((iVar6 == iVar10) && (*(int *)(iVar9 + 0x1c) == *(int *)(iVar7 + 0x1c))
                            ) || ((iVar6 == *(int *)(iVar7 + 0x1c) &&
                                  ((*(int *)(iVar9 + 0x1c) == iVar10 &&
                                   (iVar10 = FUN_005f7b67(), iVar10 != 0)))))) break;
                      }
                      local_c = local_c + 1;
                      uVar11 = puVar4[3];
                    } while (local_c < uVar11);
                  }
                  if ((local_c == puVar4[3]) || (local_14 = local_14 + 1, puVar3[3] <= local_14))
                  break;
                }
              }
              goto LAB_005fcc5b;
            }
            iVar9 = FUN_005f7b33();
            if (iVar9 == 0) goto LAB_005fcd75;
            local_10 = 0;
            if (puVar3[3] != 0) {
              iVar9 = *(int *)(param_1 + 0x14);
              local_28 = (int *)(puVar3[3] << 2);
              do {
                iVar5 = **(int **)(iVar9 + *(int *)(puVar3[4] + local_10 * 4) * 4);
                if ((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + iVar5 * 4) + 4) & 0x10) != 0)
                break;
                uVar11 = puVar3[2];
                local_c = 0;
                uVar13 = puVar4[3];
                if (uVar13 != 0) {
                  local_14 = uVar13 << 2;
                  do {
                    if ((((iVar5 == **(int **)(iVar9 + *(int *)(puVar4[4] + local_c * 4) * 4)) &&
                         (*(int *)(*(int *)(iVar9 + *(int *)(uVar11 + local_10 * 4) * 4) + 0x1c) ==
                          *(int *)(*(int *)(iVar9 + *(int *)(puVar4[2] + local_c * 4) * 4) + 0x1c)))
                        && (*(int *)(*(int *)(iVar9 + *(int *)(uVar11 + (int)local_28) * 4) + 0x1c)
                            == *(int *)(*(int *)(iVar9 + *(int *)(puVar4[2] + local_14) * 4) + 0x1c)
                           )) && (*(int *)(*(int *)(iVar9 + *(int *)(uVar11 + (local_10 +
                                                                              puVar3[3] * 2) * 4) *
                                                            4) + 0x1c) ==
                                  *(int *)(*(int *)(iVar9 + *(int *)(puVar4[2] +
                                                                    (local_c + uVar13 * 2) * 4) * 4)
                                          + 0x1c))) break;
                    local_c = local_c + 1;
                    local_14 = local_14 + 4;
                  } while (local_c < uVar13);
                }
                if (local_c == uVar13) break;
                local_28 = (int *)((int)local_28 + 4);
                local_10 = local_10 + 1;
              } while (local_10 < puVar3[3]);
            }
            bVar17 = local_10 < puVar3[3];
          }
          else {
            local_10 = 0;
            local_14 = local_10;
            if (puVar3[3] != 0) {
              iVar9 = *(int *)(param_1 + 0x14);
              while( true ) {
                iVar5 = **(int **)(iVar9 + *(int *)(puVar3[4] + local_10 * 4) * 4);
                local_14 = local_10;
                if ((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + iVar5 * 4) + 4) & 0x10) != 0)
                break;
                local_14 = 0;
                if (puVar4[3] != 0) {
                  do {
                    if ((iVar5 == **(int **)(iVar9 + *(int *)(puVar4[4] + local_14 * 4) * 4)) &&
                       (*(int *)(*(int *)(iVar9 + *(int *)(local_10 * 4 + puVar3[2]) * 4) + 0x1c) ==
                        *(int *)(*(int *)(iVar9 + *(int *)(local_14 * 4 + puVar4[2]) * 4) + 0x1c)))
                    break;
                    local_14 = local_14 + 1;
                  } while (local_14 < puVar4[3]);
                }
                bVar17 = local_14 == puVar4[3];
                local_14 = local_10;
                if ((bVar17) ||
                   (local_14 = local_10 + 1, local_10 = local_14, puVar3[3] <= local_14)) break;
              }
            }
LAB_005fcc5b:
            bVar17 = local_14 < puVar3[3];
          }
          if (bVar17) goto LAB_005fd4fc;
        }
LAB_005fcd75:
        iVar9 = FUN_005f7b0f();
        if (iVar9 != 0) {
          bVar17 = puVar3[3] == 0;
          local_10 = 0;
          local_28 = (int *)0x0;
          if (puVar3[3] != 0) {
            do {
              iVar9 = *(int *)(param_1 + 0x14);
              piVar15 = *(int **)(iVar9 + *(int *)(puVar3[4] + (int)local_28 * 4) * 4);
              if (((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar15 * 4) + 4) & 0x10) == 0)
                 && (local_14 = 0, puVar4[3] != 0)) {
                do {
                  if ((*piVar15 == **(int **)(iVar9 + *(int *)(local_14 * 4 + puVar4[4]) * 4)) &&
                     (piVar2 = (int *)(iVar9 + *(int *)(local_14 * 4 + puVar4[2]) * 4),
                     iVar9 = *(int *)(param_1 + 0x14),
                     *(int *)(*(int *)(iVar9 + *(int *)(puVar3[2] + (int)local_28 * 4) * 4) + 0x1c)
                     == *(int *)(*piVar2 + 0x1c))) {
                    iVar9 = *(int *)(puVar4[4] + local_14 * 4);
                    piVar15[7] = iVar9;
                    iVar9 = *(int *)(*(int *)(param_1 + 0x14) + iVar9 * 4);
                    uVar11 = *(uint *)(iVar9 + 0x18);
                    if ((uVar11 & 0xe000000) < (piVar15[6] & 0xe000000U)) {
                      *(uint *)(iVar9 + 0x18) = uVar11 & 0xf1ffffff;
                      puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0x14) + piVar15[7] * 4) + 0x18);
                      *puVar1 = *puVar1 | piVar15[6] & 0xe000000U;
                    }
                    break;
                  }
                  local_14 = local_14 + 1;
                } while (local_14 < puVar4[3]);
              }
              if (piVar15[7] == *(int *)(puVar3[4] + (int)local_28 * 4)) {
                *(undefined4 *)(local_10 * 4 + puVar3[2]) =
                     *(undefined4 *)(puVar3[2] + (int)local_28 * 4);
                *(undefined4 *)(local_10 * 4 + puVar3[4]) =
                     *(undefined4 *)(puVar3[4] + (int)local_28 * 4);
                local_10 = local_10 + 1;
              }
              local_28 = (int *)((int)local_28 + 1);
            } while (local_28 < puVar3[3]);
            bVar17 = local_10 == puVar3[3];
          }
          if (!bVar17) {
            if (local_10 == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = (*puVar3 ^ local_10) & 0xffffff ^ *puVar3;
            }
            *puVar3 = uVar11;
            puVar3[3] = local_10;
            puVar3[1] = local_10;
LAB_005fd095:
            bVar8 = true;
          }
          goto LAB_005fd4fc;
        }
        iVar9 = FUN_005f7b21();
        if (iVar9 != 0) {
          local_c = 0;
          local_14 = 0;
          if (puVar3[3] != 0) {
            do {
              iVar9 = *(int *)(param_1 + 0x14);
              piVar15 = *(int **)(iVar9 + *(int *)(puVar3[4] + local_14 * 4) * 4);
              if ((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar15 * 4) + 4) & 0x10) == 0) {
                iVar5 = *(int *)(iVar9 + *(int *)(puVar3[2] + local_14 * 4) * 4);
                local_10 = 0;
                iVar9 = *(int *)(iVar9 + *(int *)(puVar3[2] + (puVar3[3] + local_14) * 4) * 4);
                if (puVar4[3] != 0) {
                  do {
                    iVar12 = *(int *)(param_1 + 0x14);
                    if (*piVar15 == **(int **)(iVar12 + *(int *)(puVar4[4] + local_10 * 4) * 4)) {
                      iVar10 = *(int *)(iVar12 + *(int *)(puVar4[2] + (local_10 + puVar4[3]) * 4) *
                                                 4);
                      iVar12 = *(int *)(*(int *)(iVar12 + *(int *)(puVar4[2] + local_10 * 4) * 4) +
                                       0x1c);
                      iVar7 = *(int *)(iVar5 + 0x1c);
                      if (((iVar7 == iVar12) && (*(int *)(iVar9 + 0x1c) == *(int *)(iVar10 + 0x1c)))
                         || ((iVar7 == *(int *)(iVar10 + 0x1c) &&
                             ((*(int *)(iVar9 + 0x1c) == iVar12 &&
                              (iVar12 = FUN_005f7b67(), iVar12 != 0)))))) {
                        iVar9 = *(int *)(puVar4[4] + local_10 * 4);
                        piVar15[7] = iVar9;
                        iVar9 = *(int *)(*(int *)(param_1 + 0x14) + iVar9 * 4);
                        uVar11 = *(uint *)(iVar9 + 0x18);
                        if ((uVar11 & 0xe000000) < (piVar15[6] & 0xe000000U)) {
                          *(uint *)(iVar9 + 0x18) = uVar11 & 0xf1ffffff;
                          puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0x14) + piVar15[7] * 4) +
                                           0x18);
                          *puVar1 = *puVar1 | piVar15[6] & 0xe000000U;
                        }
                        break;
                      }
                    }
                    local_10 = local_10 + 1;
                  } while (local_10 < puVar4[3]);
                }
              }
              iVar9 = *(int *)(puVar3[4] + local_14 * 4);
              if (piVar15[7] == iVar9) {
                *(int *)(puVar3[4] + local_c * 4) = iVar9;
                *(undefined4 *)(puVar3[2] + local_c * 4) = *(undefined4 *)(puVar3[2] + local_14 * 4)
                ;
                iVar9 = puVar3[3] + local_c;
                local_c = local_c + 1;
                *(undefined4 *)(puVar3[2] + iVar9 * 4) =
                     *(undefined4 *)(puVar3[2] + (local_14 + puVar3[3]) * 4);
              }
              local_14 = local_14 + 1;
            } while (local_14 < puVar3[3]);
          }
          if (local_c != puVar3[3]) {
            uVar11 = 0;
            if (local_c != 0) {
              uVar11 = (*puVar3 ^ local_c) & 0xffffff ^ *puVar3;
            }
            *puVar3 = uVar11;
            puVar14 = (undefined4 *)(puVar3[2] + puVar3[3] * 4);
            puVar16 = (undefined4 *)(puVar3[2] + local_c * 4);
            for (uVar11 = local_c & 0x3fffffff; uVar11 != 0; uVar11 = uVar11 - 1) {
              *puVar16 = *puVar14;
              puVar14 = puVar14 + 1;
              puVar16 = puVar16 + 1;
            }
            for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
              *(undefined1 *)puVar16 = *(undefined1 *)puVar14;
              puVar14 = (undefined4 *)((int)puVar14 + 1);
              puVar16 = (undefined4 *)((int)puVar16 + 1);
            }
            puVar3[3] = local_c;
            local_c = local_c * 2;
LAB_005fd092:
            puVar3[1] = local_c;
            goto LAB_005fd095;
          }
          goto LAB_005fd4fc;
        }
        iVar9 = FUN_005f7b33();
        if (iVar9 != 0) {
          uVar11 = 0;
          local_c = 0;
          if (puVar3[3] != 0) {
            do {
              iVar9 = *(int *)(param_1 + 0x14);
              piVar15 = *(int **)(iVar9 + *(int *)(puVar3[4] + local_c * 4) * 4);
              if ((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar15 * 4) + 4) & 0x10) == 0) {
                local_14 = 0;
                if (puVar4[3] != 0) {
                  local_28 = (int *)(puVar4[3] << 2);
                  do {
                    if ((((*piVar15 == **(int **)(iVar9 + *(int *)(puVar4[4] + local_14 * 4) * 4))
                         && (*(int *)(*(int *)(iVar9 + *(int *)(puVar3[2] + local_c * 4) * 4) + 0x1c
                                     ) ==
                             *(int *)(*(int *)(iVar9 + *(int *)(puVar4[2] + local_14 * 4) * 4) +
                                     0x1c))) &&
                        (*(int *)(*(int *)(iVar9 + *(int *)(puVar3[2] + (local_c + puVar3[3]) * 4) *
                                                   4) + 0x1c) ==
                         *(int *)(*(int *)(iVar9 + *(int *)(puVar4[2] + (int)local_28) * 4) + 0x1c))
                        ) && (*(int *)(*(int *)(iVar9 + *(int *)(puVar3[2] +
                                                                (local_c + puVar3[3] * 2) * 4) * 4)
                                      + 0x1c) ==
                              *(int *)(*(int *)(iVar9 + *(int *)(puVar4[2] +
                                                                (local_14 + puVar4[3] * 2) * 4) * 4)
                                      + 0x1c))) {
                      iVar9 = *(int *)(puVar4[4] + local_14 * 4);
                      piVar15[7] = iVar9;
                      iVar9 = *(int *)(*(int *)(param_1 + 0x14) + iVar9 * 4);
                      uVar13 = *(uint *)(iVar9 + 0x18);
                      if ((uVar13 & 0xe000000) < (piVar15[6] & 0xe000000U)) {
                        *(uint *)(iVar9 + 0x18) = uVar13 & 0xf1ffffff;
                        puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0x14) + piVar15[7] * 4) + 0x18
                                         );
                        *puVar1 = *puVar1 | piVar15[6] & 0xe000000U;
                      }
                      break;
                    }
                    local_14 = local_14 + 1;
                    local_28 = (int *)((int)local_28 + 4);
                  } while (local_14 < puVar4[3]);
                }
              }
              iVar9 = *(int *)(puVar3[4] + local_c * 4);
              if (piVar15[7] == iVar9) {
                *(int *)(puVar3[4] + uVar11 * 4) = iVar9;
                *(undefined4 *)(puVar3[2] + uVar11 * 4) = *(undefined4 *)(puVar3[2] + local_c * 4);
                *(undefined4 *)(puVar3[2] + (puVar3[3] + uVar11) * 4) =
                     *(undefined4 *)(puVar3[2] + (local_c + puVar3[3]) * 4);
                *(undefined4 *)(puVar3[2] + (puVar3[3] * 2 + uVar11) * 4) =
                     *(undefined4 *)(puVar3[2] + (local_c + puVar3[3] * 2) * 4);
                uVar11 = uVar11 + 1;
              }
              local_c = local_c + 1;
            } while (local_c < puVar3[3]);
          }
          if (uVar11 != puVar3[3]) {
            if (uVar11 == 0) {
              uVar13 = 0;
            }
            else {
              uVar13 = (*puVar3 ^ uVar11) & 0xffffff ^ *puVar3;
            }
            *puVar3 = uVar13;
            puVar14 = (undefined4 *)(puVar3[2] + puVar3[3] * 4);
            puVar16 = (undefined4 *)(puVar3[2] + uVar11 * 4);
            for (uVar13 = uVar11 & 0x3fffffff; uVar13 != 0; uVar13 = uVar13 - 1) {
              *puVar16 = *puVar14;
              puVar14 = puVar14 + 1;
              puVar16 = puVar16 + 1;
            }
            for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
              *(undefined1 *)puVar16 = *(undefined1 *)puVar14;
              puVar14 = (undefined4 *)((int)puVar14 + 1);
              puVar16 = (undefined4 *)((int)puVar16 + 1);
            }
            puVar14 = (undefined4 *)(puVar3[2] + puVar3[3] * 8);
            puVar16 = (undefined4 *)(puVar3[2] + uVar11 * 8);
            for (uVar13 = uVar11 & 0x3fffffff; uVar13 != 0; uVar13 = uVar13 - 1) {
              *puVar16 = *puVar14;
              puVar14 = puVar14 + 1;
              puVar16 = puVar16 + 1;
            }
            for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
              *(undefined1 *)puVar16 = *(undefined1 *)puVar14;
              puVar14 = (undefined4 *)((int)puVar14 + 1);
              puVar16 = (undefined4 *)((int)puVar16 + 1);
            }
            puVar3[3] = uVar11;
            local_c = uVar11 * 3;
            goto LAB_005fd092;
          }
          goto LAB_005fd4fc;
        }
        iVar9 = FUN_005f7ac7();
        if (iVar9 != 0) {
          if (*puVar3 == *puVar4) {
            piVar15 = *(int **)(*(int *)(param_1 + 0x14) + *(int *)puVar3[4] * 4);
            if ((*piVar15 == **(int **)(*(int *)(param_1 + 0x14) + *(int *)puVar4[4] * 4)) &&
               ((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar15 * 4) + 4) & 0x10) == 0)) {
              local_28 = (int *)0x0;
              puVar14 = _malloc(puVar4[1] << 2);
              if (puVar14 == (undefined4 *)0x0) {
                return 0x8007000e;
              }
              local_10 = 0;
              puVar16 = puVar14;
              for (uVar11 = puVar4[1] & 0x3fffffff; uVar11 != 0; uVar11 = uVar11 - 1) {
                *puVar16 = 0;
                puVar16 = puVar16 + 1;
              }
              for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
                *(undefined1 *)puVar16 = 0;
                puVar16 = (undefined4 *)((int)puVar16 + 1);
              }
              if (puVar3[1] != 0) {
                do {
                  local_14 = 0;
                  if (puVar4[1] != 0) {
                    do {
                      if ((puVar14[local_14] == 0) &&
                         (*(int *)(*(int *)(*(int *)(param_1 + 0x14) +
                                           *(int *)(puVar3[2] + local_10 * 4) * 4) + 0x1c) ==
                          *(int *)(*(int *)(*(int *)(param_1 + 0x14) +
                                           *(int *)(local_14 * 4 + puVar4[2]) * 4) + 0x1c))) {
                        local_28 = (int *)((int)local_28 + 1);
                        puVar14[local_14] = 1;
                      }
                      local_14 = local_14 + 1;
                    } while (local_14 < puVar4[1]);
                  }
                  local_10 = local_10 + 1;
                } while (local_10 < puVar3[1]);
              }
              _free(puVar14);
              if (puVar3[1] <= local_28) {
                iVar9 = *(int *)puVar4[4];
                piVar15[7] = iVar9;
                iVar9 = *(int *)(*(int *)(param_1 + 0x14) + iVar9 * 4);
                uVar11 = *(uint *)(iVar9 + 0x18);
                if ((uVar11 & 0xe000000) < (piVar15[6] & 0xe000000U)) {
                  *(uint *)(iVar9 + 0x18) = uVar11 & 0xf1ffffff;
                  puVar4 = (uint *)(*(int *)(*(int *)(param_1 + 0x14) + piVar15[7] * 4) + 0x18);
                  *puVar4 = *puVar4 | piVar15[6] & 0xe000000U;
                }
                goto LAB_005fd415;
              }
            }
          }
          goto LAB_005fd4fc;
        }
        if (((*puVar3 != *puVar4) || (puVar3[1] != puVar4[1])) || (puVar3[3] != puVar4[3]))
        goto LAB_005fd4fc;
        local_14 = 0;
        if (puVar3[3] != 0) {
          piVar15 = (int *)puVar4[4];
          iVar9 = puVar3[4] - (int)piVar15;
          do {
            iVar5 = **(int **)(*(int *)(param_1 + 0x14) + *(int *)(iVar9 + (int)piVar15) * 4);
            if ((iVar5 != **(int **)(*(int *)(param_1 + 0x14) + *piVar15 * 4)) ||
               ((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + iVar5 * 4) + 4) & 0x10) != 0)) break;
            local_14 = local_14 + 1;
            piVar15 = piVar15 + 1;
          } while (local_14 < puVar3[3]);
        }
        if (local_14 < puVar3[3]) goto LAB_005fd4fc;
        local_14 = 0;
        if (puVar3[1] != 0) {
          local_28 = (int *)puVar3[2];
          iVar9 = puVar4[2] - (int)local_28;
          do {
            if (*(int *)(*(int *)(*(int *)(param_1 + 0x14) + *local_28 * 4) + 0x1c) !=
                *(int *)(*(int *)(*(int *)(param_1 + 0x14) + *(int *)(iVar9 + (int)local_28) * 4) +
                        0x1c)) break;
            local_14 = local_14 + 1;
            local_28 = local_28 + 1;
          } while (local_14 < puVar3[1]);
        }
        if (local_14 < puVar3[1]) goto LAB_005fd4fc;
        local_20 = 0;
        if (puVar3[3] != 0) {
          do {
            iVar9 = *(int *)(*(int *)(param_1 + 0x14) + *(int *)(local_20 * 4 + puVar3[4]) * 4);
            iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x14) +
                                     *(int *)(local_20 * 4 + puVar4[4]) * 4) + 0x1c);
            *(int *)(iVar9 + 0x1c) = iVar5;
            iVar5 = *(int *)(*(int *)(param_1 + 0x14) + iVar5 * 4);
            uVar11 = *(uint *)(iVar5 + 0x18);
            if ((uVar11 & 0xe000000) < (*(uint *)(iVar9 + 0x18) & 0xe000000)) {
              *(uint *)(iVar5 + 0x18) = uVar11 & 0xf1ffffff;
              puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0x14) + *(int *)(iVar9 + 0x1c) * 4) +
                               0x18);
              *puVar1 = *puVar1 | *(uint *)(iVar9 + 0x18) & 0xe000000;
            }
            local_20 = local_20 + 1;
          } while (local_20 < puVar3[3]);
        }
LAB_005fd415:
        *puVar3 = 0;
        bVar8 = true;
      }
LAB_005fd41f:
      local_18 = local_18 + 1;
    } while (local_18 < *(uint *)(param_1 + 0xc));
    if (bVar8) {
      FUN_005fbe30();
      FUN_005fc5a6();
      return 0;
    }
  }
  return 1;
}

