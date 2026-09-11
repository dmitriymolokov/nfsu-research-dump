/* Decompiled from Speed.exe @ 00602b94 */
/* Module: EAGL */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00602b94(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int local_48 [5];
  uint local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  int local_20;
  uint local_1c;
  int *local_18;
  int *local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_8 = 0;
  FUN_005fbe17();
  FUN_005fb8ae();
  local_20 = -1;
  local_10 = -1;
  local_1c = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      puVar1 = *(uint **)(*(int *)(param_1 + 0x18) + local_1c * 4);
      iVar2 = FUN_005f7a96();
      if (iVar2 == 0) {
        local_18 = *(int **)(param_1 + 8);
        iVar2 = FUN_005f7b0f();
        if (iVar2 == 0) {
          iVar2 = FUN_005f7b21();
          if (iVar2 == 0) {
            iVar2 = FUN_005f7b33();
            if (iVar2 == 0) {
              iVar2 = FUN_005f7ac7();
              if (iVar2 == 0) {
                if (*puVar1 == 0x33000004) {
                  iVar2 = *(int *)(param_1 + 0x14);
                  local_48[2] = -1;
                  local_48[1] = -1;
                  local_48[3] = 1;
                  local_48[0] = 1;
                  piVar10 = (int *)puVar1[2];
                  piVar9 = *(int **)(iVar2 + *piVar10 * 4);
                  local_14 = *(int **)(iVar2 + piVar10[3] * 4);
                  local_18 = *(int **)(iVar2 + piVar10[1] * 4);
                  iVar7 = *(int *)(param_1 + 0x10);
                  if (((*(byte *)(*(int *)(iVar7 + *piVar9 * 4) + 4) & 0x80) == 0) ||
                     (piVar9[1] != -1)) {
                    if (*(int *)(*(int *)(iVar2 + *(int *)(puVar1[4] + 4) * 4) + 0x40) == 0) {
                      local_48[1] = 0;
                    }
LAB_0060342f:
                    if (*(int *)(*(int *)(iVar2 + *(int *)(puVar1[4] + 8) * 4) + 0x40) == 0) {
                      local_48[2] = 0;
                    }
                    if ((local_48[1] == -1) || (local_48[2] == -1)) goto LAB_00603550;
                  }
                  else if (*(double *)(piVar9 + 4) <= _DAT_006ccaf8) {
                    local_48[1] = 0;
LAB_00603416:
                    local_48[2] = 0;
                  }
                  else {
                    local_48[1] = 2;
                    if (((*(byte *)(*(int *)(iVar7 + *local_18 * 4) + 4) & 0x80) == 0) ||
                       (local_18[1] != -1)) goto LAB_0060342f;
                    if (*(double *)(local_18 + 4) <= _DAT_006ccaf8) goto LAB_00603416;
                    if (((*(byte *)(*(int *)(iVar7 + *local_14 * 4) + 4) & 0x80) == 0) ||
                       (local_14[1] != -1)) goto LAB_0060342f;
                    if (*(double *)(local_14 + 4) == 0.0) {
                      local_48[2] = 1;
                    }
                    else {
                      if (*(double *)(local_14 + 4) != 1.0) goto LAB_0060342f;
                      local_48[2] = 3;
                    }
                  }
                  uVar5 = 0;
                  do {
                    iVar2 = *(int *)((int)local_48 + uVar5);
                    if (iVar2 == 0) {
                      if (local_10 == -1) {
                        local_10 = FUN_005f74cf(*(undefined4 *)(param_1 + 0x50),0,0,0);
                        *(int *)(*(int *)(*(int *)(param_1 + 0x14) + local_10 * 4) + 0x1c) =
                             local_10;
                      }
                      iVar2 = *(int *)(*(int *)(param_1 + 0x14) + *(int *)(uVar5 + puVar1[4]) * 4);
                      iVar7 = local_10;
LAB_006034fa:
                      *(int *)(iVar2 + 0x1c) = iVar7;
                    }
                    else {
                      if (iVar2 == 1) {
                        if (local_20 == -1) {
                          local_20 = FUN_005f74cf(*(undefined4 *)(param_1 + 0x50),0,0,
                                                  0x3ff0000000000000);
                          *(int *)(*(int *)(*(int *)(param_1 + 0x14) + local_20 * 4) + 0x1c) =
                               local_20;
                        }
                        iVar2 = *(int *)(*(int *)(param_1 + 0x14) + *(int *)(uVar5 + puVar1[4]) * 4)
                        ;
                        iVar7 = local_20;
                        goto LAB_006034fa;
                      }
                      if (iVar2 == 2) {
                        uVar6 = *(undefined4 *)puVar1[2];
LAB_00603474:
                        *(undefined4 *)
                         (*(int *)(*(int *)(param_1 + 0x14) + *(int *)(uVar5 + puVar1[4]) * 4) +
                         0x1c) = uVar6;
                      }
                      else if (iVar2 == 3) {
                        uVar6 = *(undefined4 *)(puVar1[2] + 4);
                        goto LAB_00603474;
                      }
                    }
                    iVar2 = *(int *)(*(int *)(param_1 + 0x14) + *(int *)(uVar5 + puVar1[4]) * 4);
                    iVar7 = *(int *)(*(int *)(param_1 + 0x14) + *(int *)(iVar2 + 0x1c) * 4);
                    if (*(int *)(iVar7 + 0x44) == 0) {
                      *(undefined4 *)(iVar7 + 0x44) = *(undefined4 *)(iVar2 + 0x44);
                      iVar2 = *(int *)(*(int *)(param_1 + 0x14) + *(int *)(uVar5 + puVar1[4]) * 4);
                      *(undefined4 *)
                       (*(int *)(*(int *)(param_1 + 0x14) + *(int *)(iVar2 + 0x1c) * 4) + 0x48) =
                           *(undefined4 *)(iVar2 + 0x48);
                    }
                    uVar5 = uVar5 + 4;
                  } while (uVar5 < 0x10);
                  goto LAB_0060353f;
                }
              }
              else {
                iVar2 = FUN_005f974c(puVar1,1);
                if (iVar2 < 0) {
                  return iVar2;
                }
                if (iVar2 != 1) {
                  local_8 = 1;
                }
                iVar2 = *(int *)(*(int *)(param_1 + 0x14) + *(int *)puVar1[4] * 4);
                iVar7 = *(int *)(iVar2 + 0x1c);
                if (iVar7 != *(int *)puVar1[4]) {
                  iVar7 = *(int *)(*(int *)(param_1 + 0x14) + iVar7 * 4);
                  if (*(int *)(iVar7 + 0x44) == 0) {
                    *(undefined4 *)(iVar7 + 0x44) = *(undefined4 *)(iVar2 + 0x44);
                    iVar2 = *(int *)(*(int *)(param_1 + 0x14) + *(int *)puVar1[4] * 4);
                    *(undefined4 *)
                     (*(int *)(*(int *)(param_1 + 0x14) + *(int *)(iVar2 + 0x1c) * 4) + 0x48) =
                         *(undefined4 *)(iVar2 + 0x48);
                  }
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  puVar1[3] = 0;
                }
              }
            }
            else {
              local_14 = (int *)0x0;
              local_c = 0;
              if (puVar1[3] != 0) {
                do {
                  uVar5 = *(uint *)(puVar1[4] + local_c * 4);
                  uVar3 = puVar1[2];
                  iVar2 = *(int *)(param_1 + 0x14);
                  local_48[4] = *(int *)(*(int *)(iVar2 + *(int *)(uVar3 + local_c * 4) * 4) + 0x1c)
                  ;
                  local_24 = *(int **)(*(int *)(iVar2 + *(int *)(uVar3 + (local_c + puVar1[3]) * 4)
                                                        * 4) + 0x1c);
                  local_28 = *(int **)(*(int *)(iVar2 + *(int *)(uVar3 + (local_c + puVar1[3] * 2) *
                                                                         4) * 4) + 0x1c);
                  if ((*puVar1 & 0xff000000) == 0x50000000) {
                    local_30 = *(int **)(iVar2 + (int)local_24 * 4);
                    local_2c = *(int **)(iVar2 + (int)local_28 * 4);
                    uVar3 = local_30[6];
                    uVar4 = local_2c[6] | uVar3;
                    uVar8 = uVar4 & 0xe000000;
                    if ((uVar4 & 0x8000000) == 0) {
                      if ((uVar4 & 0x4000000) == 0) {
                        if ((uVar4 & 0x2000000) != 0) {
                          uVar8 = 0x2000000;
                        }
                      }
                      else {
                        uVar8 = 0x4000000;
                      }
                    }
                    else {
                      uVar8 = 0x8000000;
                    }
                    uVar8 = uVar8 | *(uint *)(*(int *)(iVar2 + uVar5 * 4) + 0x18) & 0xe000000;
                    uVar4 = 0x2000000;
                    if ((((uVar8 & 0x2000000) == 0) && (uVar4 = 0x4000000, (uVar8 & 0x4000000) == 0)
                        ) && (uVar4 = uVar8, (uVar8 & 0x8000000) != 0)) {
                      uVar4 = 0x8000000;
                    }
                    if (((uVar4 != (uVar3 & 0xe000000)) &&
                        ((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *local_30 * 4) + 4) & 2) !=
                         0)) && (local_30[0x10] == 1)) {
                      local_30[6] = uVar3 & 0xf1ffffff | uVar4;
                      local_8 = 1;
                    }
                    if (((uVar4 != (local_2c[6] & 0xe000000U)) &&
                        ((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *local_2c * 4) + 4) & 2) !=
                         0)) && (local_2c[0x10] == 1)) {
                      local_2c[6] = local_2c[6] & 0xf1ffffffU | uVar4;
                      local_8 = 1;
                    }
                  }
                  local_34 = uVar5;
                  iVar2 = FUN_005f91a4(puVar1,uVar5,local_48[4],local_24,local_28);
                  if (iVar2 < 0) {
                    return iVar2;
                  }
                  uVar3 = *(uint *)(*(int *)(*(int *)(param_1 + 0x14) + uVar5 * 4) + 0x1c);
                  if (uVar3 == uVar5) {
                    local_14 = (int *)((int)local_14 + 1);
                  }
                  else {
                    iVar2 = *(int *)(*(int *)(param_1 + 0x14) + uVar3 * 4);
                    if (*(int *)(iVar2 + 0x1c) == -1) {
                      *(uint *)(iVar2 + 0x1c) = uVar3;
                    }
                  }
                  local_c = local_c + 1;
                } while (local_c < puVar1[3]);
              }
              piVar10 = (int *)puVar1[3];
              if (local_14 != piVar10) {
                uVar5 = 0;
                if (local_14 == (int *)0x0) {
                  if (piVar10 != (int *)0x0) {
                    do {
                      iVar2 = *(int *)(*(int *)(param_1 + 0x14) +
                                      *(int *)(puVar1[4] + uVar5 * 4) * 4);
                      iVar7 = *(int *)(*(int *)(param_1 + 0x14) + *(int *)(iVar2 + 0x1c) * 4);
                      if (*(int *)(iVar7 + 0x44) == 0) {
                        *(undefined4 *)(iVar7 + 0x44) = *(undefined4 *)(iVar2 + 0x44);
                        iVar2 = *(int *)(*(int *)(param_1 + 0x14) +
                                        *(int *)(puVar1[4] + uVar5 * 4) * 4);
                        *(undefined4 *)
                         (*(int *)(*(int *)(param_1 + 0x14) + *(int *)(iVar2 + 0x1c) * 4) + 0x48) =
                             *(undefined4 *)(iVar2 + 0x48);
                      }
                      uVar5 = uVar5 + 1;
                    } while (uVar5 < puVar1[3]);
                  }
                  goto LAB_0060353f;
                }
                local_14 = (int *)0x0;
                if (piVar10 != (int *)0x0) {
                  do {
                    local_34 = *(uint *)(puVar1[4] + (int)local_14 * 4);
                    local_48[4] = local_34 * 4;
                    iVar2 = *(int *)(*(int *)(param_1 + 0x14) + local_48[4]);
                    if (*(uint *)(iVar2 + 0x1c) != local_34) {
                      uVar5 = *(uint *)(*(int *)(*(int *)(param_1 + 0x14) +
                                                *(uint *)(iVar2 + 0x1c) * 4) + 0x18) & 0xf1ffffff |
                              *(uint *)(iVar2 + 0x18);
                      if (*(uint *)(iVar2 + 0x18) != uVar5) {
                        *(uint *)(iVar2 + 0x18) = uVar5;
                        local_8 = 1;
                      }
                      *(uint *)(*(int *)(*(int *)(param_1 + 0x14) + local_48[4]) + 0x1c) = local_34;
                    }
                    local_14 = (int *)((int)local_14 + 1);
                  } while (local_14 < (int *)puVar1[3]);
                }
                piVar10 = local_18;
                if (local_18 < *(int **)(param_1 + 8)) {
                  do {
                    if (*(int *)(*(int *)(param_1 + 0x14) + (int)piVar10 * 4) != 0) {
                      FUN_005f716a();
                    }
                    piVar10 = (int *)((int)piVar10 + 1);
                  } while (piVar10 < *(int **)(param_1 + 8));
                }
                *(int **)(param_1 + 8) = local_18;
              }
            }
          }
          else {
            local_14 = (int *)0x0;
            local_c = 0;
            if (puVar1[3] != 0) {
              do {
                uVar5 = *(uint *)(local_c * 4 + puVar1[4]);
                iVar2 = *(int *)(param_1 + 0x14);
                local_30 = *(int **)(*(int *)(iVar2 + *(int *)(local_c * 4 + puVar1[2]) * 4) + 0x1c)
                ;
                local_2c = *(int **)(*(int *)(iVar2 + *(int *)(puVar1[2] + (puVar1[3] + local_c) * 4
                                                              ) * 4) + 0x1c);
                if (((*puVar1 & 0xff000000) == 0x20000000) || ((*puVar1 & 0xff000000) == 0x21000000)
                   ) {
                  local_24 = *(int **)(iVar2 + (int)local_30 * 4);
                  local_28 = *(int **)(iVar2 + (int)local_2c * 4);
                  uVar3 = local_24[6];
                  uVar4 = local_28[6] | uVar3;
                  uVar8 = uVar4 & 0xe000000;
                  if ((uVar4 & 0x8000000) == 0) {
                    if ((uVar4 & 0x4000000) == 0) {
                      if ((uVar4 & 0x2000000) != 0) {
                        uVar8 = 0x2000000;
                      }
                    }
                    else {
                      uVar8 = 0x4000000;
                    }
                  }
                  else {
                    uVar8 = 0x8000000;
                  }
                  uVar8 = uVar8 | *(uint *)(*(int *)(iVar2 + uVar5 * 4) + 0x18) & 0xe000000;
                  uVar4 = 0x2000000;
                  if ((((uVar8 & 0x2000000) == 0) && (uVar4 = 0x4000000, (uVar8 & 0x4000000) == 0))
                     && (uVar4 = uVar8, (uVar8 & 0x8000000) != 0)) {
                    uVar4 = 0x8000000;
                  }
                  if (((uVar4 != (uVar3 & 0xe000000)) &&
                      ((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *local_24 * 4) + 4) & 2) != 0)
                      ) && (local_24[0x10] == 1)) {
                    local_24[6] = uVar3 & 0xf1ffffff | uVar4;
                    local_8 = 1;
                  }
                  if (((uVar4 != (local_28[6] & 0xe000000U)) &&
                      ((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *local_28 * 4) + 4) & 2) != 0)
                      ) && (local_28[0x10] == 1)) {
                    local_28[6] = local_28[6] & 0xf1ffffffU | uVar4;
                    local_8 = 1;
                  }
                }
                local_34 = uVar5;
                iVar2 = FUN_005f84ab(puVar1,uVar5,local_30,local_2c);
                if (iVar2 < 0) {
                  return iVar2;
                }
                uVar3 = *(uint *)(*(int *)(*(int *)(param_1 + 0x14) + uVar5 * 4) + 0x1c);
                if (uVar3 == uVar5) {
                  local_14 = (int *)((int)local_14 + 1);
                }
                else {
                  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + uVar3 * 4);
                  if (*(int *)(iVar2 + 0x1c) == -1) {
                    *(uint *)(iVar2 + 0x1c) = uVar3;
                  }
                }
                local_c = local_c + 1;
              } while (local_c < puVar1[3]);
            }
            piVar10 = (int *)puVar1[3];
            if (local_14 != piVar10) {
              uVar5 = 0;
              if (local_14 == (int *)0x0) {
                if (piVar10 != (int *)0x0) {
                  do {
                    iVar2 = *(int *)(*(int *)(param_1 + 0x14) + *(int *)(puVar1[4] + uVar5 * 4) * 4)
                    ;
                    iVar7 = *(int *)(*(int *)(param_1 + 0x14) + *(int *)(iVar2 + 0x1c) * 4);
                    if (*(int *)(iVar7 + 0x44) == 0) {
                      *(undefined4 *)(iVar7 + 0x44) = *(undefined4 *)(iVar2 + 0x44);
                      iVar2 = *(int *)(*(int *)(param_1 + 0x14) +
                                      *(int *)(puVar1[4] + uVar5 * 4) * 4);
                      *(undefined4 *)
                       (*(int *)(*(int *)(param_1 + 0x14) + *(int *)(iVar2 + 0x1c) * 4) + 0x48) =
                           *(undefined4 *)(iVar2 + 0x48);
                    }
                    uVar5 = uVar5 + 1;
                  } while (uVar5 < puVar1[3]);
                }
LAB_0060353f:
                uVar5 = 0;
                puVar1[1] = 0;
                puVar1[3] = 0;
                goto LAB_00603547;
              }
              local_14 = (int *)0x0;
              if (piVar10 != (int *)0x0) {
                do {
                  local_30 = *(int **)(puVar1[4] + (int)local_14 * 4);
                  local_34 = (int)local_30 * 4;
                  iVar2 = *(int *)(local_34 + *(int *)(param_1 + 0x14));
                  if (*(int **)(iVar2 + 0x1c) != local_30) {
                    uVar5 = *(uint *)(*(int *)(*(int *)(param_1 + 0x14) +
                                              (int)*(int **)(iVar2 + 0x1c) * 4) + 0x18) & 0xf1ffffff
                            | *(uint *)(iVar2 + 0x18);
                    if (*(uint *)(iVar2 + 0x18) != uVar5) {
                      *(uint *)(iVar2 + 0x18) = uVar5;
                      local_8 = 1;
                    }
                    *(int **)(*(int *)(local_34 + *(int *)(param_1 + 0x14)) + 0x1c) = local_30;
                  }
                  local_14 = (int *)((int)local_14 + 1);
                } while (local_14 < (int *)puVar1[3]);
              }
              piVar10 = local_18;
              piVar9 = local_18;
              if (local_18 < *(int **)(param_1 + 8)) {
                do {
                  if (*(int *)(*(int *)(param_1 + 0x14) + (int)piVar9 * 4) != 0) {
                    FUN_005f716a();
                    piVar10 = local_18;
                  }
                  piVar9 = (int *)((int)piVar9 + 1);
                } while (piVar9 < *(int **)(param_1 + 8));
              }
              *(int **)(param_1 + 8) = piVar10;
            }
          }
        }
        else {
          local_c = 0;
          local_14 = (int *)0x0;
          if (puVar1[3] != 0) {
            do {
              piVar10 = *(int **)((int)local_14 * 4 + puVar1[4]);
              local_18 = *(int **)(*(int *)(*(int *)(param_1 + 0x14) +
                                           *(int *)((int)local_14 * 4 + puVar1[2]) * 4) + 0x1c);
              local_30 = piVar10;
              iVar2 = FUN_005f7aa3();
              if ((iVar2 != 0) || (iVar2 = FUN_005f7ab5(), iVar2 != 0)) {
                iVar2 = *(int *)(*(int *)(param_1 + 0x14) + (int)piVar10 * 4);
                piVar10 = *(int **)(*(int *)(param_1 + 0x14) + (int)local_18 * 4);
                uVar5 = *(uint *)(iVar2 + 0x18);
                uVar3 = piVar10[6] | uVar5;
                uVar4 = uVar3 & 0xe000000;
                if ((uVar3 & 0x2000000) == 0) {
                  uVar8 = 0x4000000;
                  if (((uVar3 & 0x4000000) != 0) || (uVar8 = 0x8000000, (uVar3 & 0x8000000) != 0)) {
                    uVar4 = uVar8;
                  }
                }
                else {
                  uVar4 = 0x2000000;
                }
                if (uVar4 != (uVar5 & 0xe000000)) {
                  *(uint *)(iVar2 + 0x18) = uVar5 & 0xf1ffffff | uVar4;
                  local_8 = 1;
                }
                local_34 = piVar10[6];
                if (((uVar4 != (local_34 & 0xe000000)) &&
                    ((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar10 * 4) + 4) & 2) != 0))
                   && (piVar10[0x10] == 1)) {
                  piVar10[6] = local_34 & 0xf1ffffff | uVar4;
                  local_8 = 1;
                }
              }
              piVar10 = local_30;
              iVar2 = FUN_005fefac(puVar1,local_30,local_18);
              if (iVar2 < 0) {
                return iVar2;
              }
              piVar9 = *(int **)(*(int *)(*(int *)(param_1 + 0x14) + (int)piVar10 * 4) + 0x1c);
              if (piVar9 == piVar10) {
                local_c = local_c + 1;
              }
              else {
                iVar2 = *(int *)(*(int *)(param_1 + 0x14) + (int)piVar9 * 4);
                if (*(int *)(iVar2 + 0x1c) == -1) {
                  *(int **)(iVar2 + 0x1c) = piVar9;
                }
              }
              local_14 = (int *)((int)local_14 + 1);
            } while (local_14 < (int *)puVar1[3]);
          }
          if (local_c == puVar1[3]) goto LAB_00603550;
          local_8 = 0;
          local_c = 0;
          if (puVar1[3] == 0) {
LAB_00602daa:
            uVar5 = 0;
          }
          else {
            do {
              iVar2 = *(int *)(puVar1[4] + local_8 * 4);
              iVar7 = *(int *)(param_1 + 0x14);
              if (*(int *)(*(int *)(iVar7 + iVar2 * 4) + 0x1c) == iVar2) {
                iVar7 = local_c * 4;
                local_c = local_c + 1;
                *(int *)(iVar7 + puVar1[4]) = iVar2;
                *(undefined4 *)(iVar7 + puVar1[2]) = *(undefined4 *)(puVar1[2] + local_8 * 4);
              }
              else {
                iVar2 = *(int *)(iVar7 + iVar2 * 4);
                iVar7 = *(int *)(iVar7 + *(int *)(iVar2 + 0x1c) * 4);
                if (*(int *)(iVar7 + 0x44) == 0) {
                  *(undefined4 *)(iVar7 + 0x44) = *(undefined4 *)(iVar2 + 0x44);
                  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + *(int *)(puVar1[4] + local_8 * 4) * 4)
                  ;
                  *(undefined4 *)
                   (*(int *)(*(int *)(param_1 + 0x14) + *(int *)(iVar2 + 0x1c) * 4) + 0x48) =
                       *(undefined4 *)(iVar2 + 0x48);
                }
              }
              local_8 = local_8 + 1;
            } while (local_8 < puVar1[3]);
            if (local_c == 0) goto LAB_00602daa;
            uVar5 = (*puVar1 ^ local_c) & 0xffffff ^ *puVar1;
          }
          puVar1[1] = local_c;
          puVar1[3] = local_c;
LAB_00603547:
          *puVar1 = uVar5;
          local_8 = 1;
        }
LAB_00603550:
        if (puVar1[3] != 0) {
          local_18 = (int *)0x0;
          if (puVar1[3] != 0) {
            piVar10 = (int *)puVar1[4];
            do {
              piVar9 = *(int **)(*(int *)(param_1 + 0x14) + *piVar10 * 4);
              uVar5 = piVar9[6];
              if ((((uVar5 & 0x40) != 0) ||
                  ((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar9 * 4) + 4) & 0x10) != 0))
                 || (((uVar5 & 4) == 0 || ((uVar5 & 8) == 0)))) break;
              local_18 = (int *)((int)local_18 + 1);
              piVar10 = piVar10 + 1;
            } while (local_18 < (int *)puVar1[3]);
          }
          if (local_18 == (int *)puVar1[3]) {
            if (local_10 == -1) {
              local_10 = FUN_005f74cf(*(undefined4 *)(param_1 + 0x50),0,0,0);
              *(int *)(*(int *)(*(int *)(param_1 + 0x14) + local_10 * 4) + 0x1c) = local_10;
            }
            uVar5 = 0;
            if (puVar1[3] != 0) {
              do {
                iVar2 = uVar5 * 4;
                uVar5 = uVar5 + 1;
                *(int *)(*(int *)(*(int *)(param_1 + 0x14) + *(int *)(puVar1[4] + iVar2) * 4) + 0x1c
                        ) = local_10;
              } while (uVar5 < puVar1[3]);
            }
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1[3] = 0;
            local_8 = 1;
          }
        }
      }
      local_1c = local_1c + 1;
    } while (local_1c < *(uint *)(param_1 + 0xc));
    if (local_8 != 0) {
      FUN_005fbe30();
      return 0;
    }
  }
  return 1;
}

