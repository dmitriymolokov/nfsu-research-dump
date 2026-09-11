/* Decompiled from Speed.exe @ 00603622 */
/* Module: EAGL */
/* Ghidra DecompileModule */


undefined4 __fastcall FUN_00603622(int param_1)

{
  byte *pbVar1;
  uint *puVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  uint local_54 [8];
  uint *local_34;
  int local_30;
  uint *local_2c;
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  uint *local_18;
  uint local_14;
  uint *local_10;
  undefined4 *local_c;
  uint local_8;
  
  iVar6 = *(int *)(param_1 + 4);
  puVar7 = (uint *)0x0;
  local_18 = (uint *)0x0;
  if (iVar6 != 0) {
    piVar4 = *(int **)(param_1 + 0x10);
    do {
      uVar9 = *(uint *)(*piVar4 + 4);
      if (((char)uVar9 < '\0') && ((uVar9 & 0x200) != 0)) {
        puVar7 = (uint *)((int)puVar7 + *(int *)(*piVar4 + 8));
      }
      piVar4 = piVar4 + 1;
      iVar6 = iVar6 + -1;
      local_18 = puVar7;
    } while (iVar6 != 0);
  }
  uVar9 = (int)local_18 + *(int *)(param_1 + 0xc) * 2;
  local_c = _malloc(uVar9 * 0x10);
  if (local_c == (undefined4 *)0x0) {
    uVar3 = 0x8007000e;
  }
  else {
    puVar8 = local_c;
    for (iVar6 = (uVar9 & 0xfffffff) << 2; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = 0xffffffff;
      puVar8 = puVar8 + 1;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined1 *)puVar8 = 0xff;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    local_24 = 0;
    local_20 = 0;
    FUN_005fbe17();
    local_14 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      do {
        uVar9 = *(uint *)(*(int *)(*(int *)(param_1 + 0x10) + local_14 * 4) + 4);
        if (((char)uVar9 < '\0') && ((uVar9 & 0x200) != 0)) {
          local_10 = (uint *)0x0;
          if (local_18 != (uint *)0x0) {
            uVar9 = *(uint *)(param_1 + 8);
            do {
              local_8 = 0;
              if (uVar9 != 0) {
                do {
                  puVar7 = *(uint **)(*(int *)(param_1 + 0x14) + local_8 * 4);
                  if ((((*puVar7 == local_14) && (puVar7[1] == 0xffffffff)) &&
                      (local_c[puVar7[3] + (puVar7[2] + (int)local_10) * 4] != -1)) &&
                     (*(double *)(puVar7 + 4) !=
                      *(double *)
                       (*(int *)(*(int *)(param_1 + 0x14) +
                                local_c[puVar7[3] + (puVar7[2] + (int)local_10) * 4] * 4) + 0x10)))
                  break;
                  local_8 = local_8 + 1;
                } while (local_8 < *(uint *)(param_1 + 8));
              }
              uVar9 = *(uint *)(param_1 + 8);
            } while ((local_8 != uVar9) &&
                    (local_10 = (uint *)((int)local_10 + 1), local_10 < local_18));
          }
          uVar9 = 0;
          if (*(int *)(param_1 + 8) != 0) {
            do {
              puVar7 = *(uint **)(*(int *)(param_1 + 0x14) + uVar9 * 4);
              if (*puVar7 == local_14) {
                puVar7[2] = puVar7[2] + (int)local_10;
                uVar5 = puVar7[2];
                if (puVar7[1] == 0xffffffff) {
                  puVar2 = local_c + puVar7[3] + uVar5 * 4;
                  if (*puVar2 == 0xffffffff) {
                    if (local_20 <= uVar5) {
                      local_20 = uVar5 + 1;
                    }
                    *puVar2 = uVar9;
                  }
                  else {
                    *puVar7 = *(uint *)(param_1 + 0x4c);
                    puVar7[7] = *puVar2;
                    local_24 = 1;
                  }
                }
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < *(uint *)(param_1 + 8));
          }
        }
        local_14 = local_14 + 1;
      } while (local_14 < *(uint *)(param_1 + 4));
      if (local_24 != 0) {
        FUN_005fbe30();
      }
    }
    uVar9 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      do {
        piVar4 = *(int **)(*(int *)(param_1 + 0x14) + uVar9 * 4);
        uVar5 = *(uint *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar4 * 4) + 4);
        if (((char)uVar5 < '\0') && ((uVar5 & 0x200) == 0)) {
          piVar4[2] = -1;
          *piVar4 = *(int *)(param_1 + 0x50);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(param_1 + 8));
    }
    local_18 = (uint *)0x0;
    if (*(int *)(param_1 + 0xc) != 0) {
      do {
        local_14 = *(uint *)(*(int *)(param_1 + 0x18) + (int)local_18 * 4);
        iVar6 = FUN_005f7a96();
        if (iVar6 == 0) {
          local_54[0] = 0xffffffff;
          local_54[1] = 0xffffffff;
          local_54[2] = 0xffffffff;
          local_54[3] = 0xffffffff;
          local_54[4] = 0;
          local_54[5] = 0;
          local_54[6] = 0;
          local_54[7] = 0;
          local_8 = 0;
          local_1c = 0;
          while( true ) {
            local_2c = (uint *)FUN_005f7a5c(local_1c,&local_28);
            if (local_2c == (uint *)0x0) break;
            local_10 = (uint *)0x0;
            if (local_2c != (uint *)0x0) {
              iVar6 = *(int *)(param_1 + 0x14);
              do {
                uVar5 = local_8;
                uVar9 = *(uint *)(local_28 + (int)local_10 * 4);
                piVar4 = *(int **)(iVar6 + uVar9 * 4);
                if ((*(int *)(param_1 + 0x50) == *piVar4) && (piVar4[1] == -1)) {
                  uVar10 = 0;
                  if (local_8 != 0) {
                    do {
                      if (*(double *)(*(int *)(iVar6 + local_54[uVar10] * 4) + 0x10) ==
                          *(double *)(piVar4 + 4)) break;
                      uVar10 = uVar10 + 1;
                    } while (uVar10 < local_8);
                    if (uVar10 == 4) goto LAB_0060397d;
                  }
                  if (uVar10 == local_8) {
                    local_8 = local_8 + 1;
                    local_54[uVar5] = uVar9;
                  }
                  local_54[uVar10 + 4] = local_54[uVar10 + 4] | 1 << ((byte)local_10 & 0x1f);
                }
                local_10 = (uint *)((int)local_10 + 1);
              } while (local_10 < local_2c);
            }
            local_1c = local_1c + 1;
          }
          iVar6 = FUN_0060213b(local_c,local_54,local_54 + 4);
          if (iVar6 < 0) {
LAB_0060397d:
            local_1c = 0;
            while (local_10 = (uint *)FUN_005f7a5c(local_1c,&local_20), local_10 != (uint *)0x0) {
              puVar7 = (uint *)0x0;
              if (local_10 != (uint *)0x0) {
                iVar6 = *(int *)(param_1 + 0x50);
                uVar9 = 0;
                do {
                  uVar5 = *(uint *)(local_20 + (int)puVar7 * 4);
                  piVar4 = *(int **)(*(int *)(param_1 + 0x14) + uVar5 * 4);
                  uVar10 = uVar9;
                  if ((iVar6 == *piVar4) && (piVar4[1] == -1)) {
                    local_54[uVar9] = uVar5;
                    uVar10 = uVar9 + 1;
                    local_54[uVar9 + 4] = 1 << ((byte)puVar7 & 0x1f);
                  }
                  puVar7 = (uint *)((int)puVar7 + 1);
                  uVar9 = uVar10;
                } while (puVar7 < local_10);
                if (uVar10 != 0) {
                  if (uVar10 < 4) {
                    local_34 = local_54 + uVar10;
                    puVar7 = local_54 + uVar10 + 4;
                    for (uVar9 = 4 - uVar10 & 0x3fffffff; uVar9 != 0; uVar9 = uVar9 - 1) {
                      *puVar7 = 0;
                      puVar7 = puVar7 + 1;
                    }
                    puVar7 = local_34;
                    for (uVar9 = 4 - uVar10 & 0x3fffffff; uVar9 != 0; uVar9 = uVar9 - 1) {
                      *puVar7 = 0xffffffff;
                      puVar7 = puVar7 + 1;
                    }
                  }
                  FUN_0060213b(local_c,local_54,local_54 + 4);
                  puVar7 = (uint *)0x0;
                  do {
                    uVar5 = 0;
                    uVar9 = 1 << ((byte)puVar7 & 0x1f);
                    do {
                      if ((local_54[uVar5 + 4] & uVar9) != 0) {
                        local_54[uVar5 + 4] = local_54[uVar5 + 4] & ~uVar9;
                        *(uint *)(local_20 + (int)puVar7 * 4) = local_54[uVar5];
                        break;
                      }
                      uVar5 = uVar5 + 1;
                    } while (uVar5 < 4);
                    puVar7 = (uint *)((int)puVar7 + 1);
                  } while (puVar7 < local_10);
                }
              }
              local_1c = local_1c + 1;
            }
          }
          else {
            local_8 = 0;
            while( true ) {
              local_34 = (uint *)FUN_005f7a5c(local_8,&local_30);
              if (local_34 == (uint *)0x0) break;
              local_2c = (uint *)0x0;
              if (local_34 != (uint *)0x0) {
                do {
                  puVar7 = (uint *)(local_30 + (int)local_2c * 4);
                  piVar4 = *(int **)(*(int *)(param_1 + 0x14) + *puVar7 * 4);
                  if ((*(int *)(param_1 + 0x50) == *piVar4) && (piVar4[1] == -1)) {
                    local_10 = (uint *)0x0;
                    local_1c = 1 << ((byte)local_2c & 0x1f);
                    do {
                      if (((local_54[(int)(local_10 + 1)] & local_1c) != 0) &&
                         (*(double *)(piVar4 + 4) ==
                          *(double *)
                           (*(int *)(*(int *)(param_1 + 0x14) + local_54[(int)local_10] * 4) + 0x10)
                         )) {
                        *puVar7 = local_54[(int)local_10];
                        break;
                      }
                      local_10 = (uint *)((int)local_10 + 1);
                    } while (local_10 < (uint *)0x4);
                  }
                  local_2c = (uint *)((int)local_2c + 1);
                } while (local_2c < local_34);
              }
              local_8 = local_8 + 1;
            }
          }
        }
        local_18 = (uint *)((int)local_18 + 1);
      } while (local_18 < *(uint *)(param_1 + 0xc));
    }
    uVar9 = 0;
    local_34 = (uint *)0x0;
    if (*(int *)(param_1 + 8) != 0) {
      do {
        piVar4 = *(int **)(*(int *)(param_1 + 0x14) + uVar9 * 4);
        if ((*(int *)(param_1 + 0x50) == *piVar4) && (piVar4[2] == -1)) {
          *piVar4 = *(int *)(param_1 + 0x4c);
        }
        else {
          uVar5 = *(uint *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar4 * 4) + 4);
          if (((char)uVar5 < '\0') &&
             (((uVar5 & 0x20) != 0 && (*piVar4 = *(int *)(param_1 + 0x50), piVar4[1] != -1)))) {
            local_34 = (uint *)0x1;
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(param_1 + 8));
    }
    puVar7 = (uint *)(*(int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x50) * 4) + 4);
    *puVar7 = *puVar7 | 0x20;
    uVar9 = 0;
    if (local_34 != (uint *)0x0) {
      pbVar1 = (byte *)(*(int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x50) * 4) + 5);
      *pbVar1 = *pbVar1 | 2;
    }
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x50) * 4) + 8) = 0;
    if (*(int *)(param_1 + 8) != 0) {
      do {
        piVar4 = *(int **)(*(int *)(param_1 + 0x14) + uVar9 * 4);
        if ((*(int *)(param_1 + 0x50) == *piVar4) && (piVar4[1] == -1)) {
          iVar6 = *(int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x50) * 4);
          if (*(uint *)(iVar6 + 8) <= (uint)piVar4[2]) {
            *(uint *)(iVar6 + 8) = piVar4[2] + 1;
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(param_1 + 8));
    }
    if (local_24 != 0) {
      FUN_005fc5a6();
    }
    _free(local_c);
    uVar3 = 0;
  }
  return uVar3;
}

