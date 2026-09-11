/* Decompiled from Speed.exe @ 005fd5b7 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_005fd5b7(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  double *pdVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  double *pdVar15;
  double *pdVar16;
  undefined1 local_70 [8];
  int *local_68 [2];
  int local_60 [2];
  double *local_58;
  int local_54;
  double *local_50;
  double *local_4c;
  double *local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  int local_38;
  double *local_34;
  int *local_30;
  double *local_2c;
  double *local_28;
  double *local_24;
  double *local_20;
  double *local_1c;
  double *local_18;
  double *local_14;
  uint *local_10;
  uint *local_c;
  int local_8;
  
  local_38 = -1;
  local_18 = (double *)0x0;
  local_1c = (double *)0x0;
  local_8 = 0;
  FUN_005fb8ae();
  local_24 = (double *)0x0;
  if (*(int *)(param_1 + 0xc) != 0) {
LAB_005fd5e2:
    puVar1 = *(uint **)(*(int *)(param_1 + 0x18) + (int)local_24 * 4);
    if ((puVar1[3] != 0) &&
       ((*(byte *)(*(int *)(*(int *)(param_1 + 0x14) + *(int *)puVar1[4] * 4) + 0x18) & 0x40) == 0))
    {
      if ((((*puVar1 & 0xff000000) == 0x24000000) || ((*puVar1 & 0xff000000) == 0x25000000)) &&
         (local_2c = (double *)0x0, puVar1[3] != 0)) {
        do {
          local_68[0] = (int *)(puVar1[2] + (int)local_2c * 4);
          local_c = (uint *)0x0;
          local_68[1] = (int *)(puVar1[2] + (puVar1[3] + (int)local_2c) * 4);
          local_60[0] = *(int *)(*(int *)(param_1 + 0x14) + *local_68[0] * 4);
          local_60[1] = *(undefined4 *)(*(int *)(param_1 + 0x14) + *local_68[1] * 4);
          do {
            local_10 = (uint *)(1 - (int)local_c);
            if ((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *(int *)local_60[(int)local_c] * 4) +
                          4) & 2) != 0) {
              local_3c = *(int **)(local_60[(int)local_c] + 0x2c);
              puVar2 = *(uint **)(*(int *)(param_1 + 0x18) + (int)local_3c * 4);
              local_28 = (double *)(*puVar1 & 0xff000000);
              if (local_28 == (double *)(*puVar2 & 0xff000000)) {
                local_14 = (double *)0x0;
                if (puVar2[3] != 0) {
                  piVar12 = (int *)puVar2[4];
                  do {
                    if (*piVar12 == *local_68[(int)local_c]) break;
                    local_14 = (double *)((int)local_14 + 1);
                    piVar12 = piVar12 + 1;
                  } while (local_14 < (double *)puVar2[3]);
                }
                local_20 = local_14;
                if (local_14 < (double *)puVar2[1]) {
                  uVar13 = puVar2[2];
                  local_44 = (int *)(uVar13 + (int)local_14 * 4);
                  local_40 = (int *)(puVar2[3] * 4);
                  local_30 = local_44;
                  do {
                    local_34 = *(double **)(*(int *)(param_1 + 0x14) + *local_30 * 4);
                    if (((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *(int *)local_34 * 4) + 4) &
                         0x80) != 0) && (*(int *)((int)local_34 + 4) == -1)) {
                      if (((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) +
                                              *(int *)local_60[(int)local_10] * 4) + 4) & 0x80) == 0
                          ) || (*(int *)(local_60[(int)local_10] + 4) != -1)) {
                        if ((*(int *)(local_60[(int)local_c] + 0x40) != 1) ||
                           ((*(int **)(local_60[(int)local_10] + 0x2c) != (int *)0xffffffff &&
                            (local_3c <= *(int **)(local_60[(int)local_10] + 0x2c)))))
                        goto LAB_005fd75e;
                        local_44 = (int *)*local_68[(int)local_10];
                        *local_68[(int)local_10] = *(int *)(uVar13 + (int)local_20 * 4);
                        *(int **)((int)local_20 * 4 + puVar2[2]) = local_44;
                        iVar6 = local_60[(int)local_c];
                        *(undefined4 *)(iVar6 + 0x44) = 0;
                        *(undefined4 *)(iVar6 + 0x48) = 0;
                      }
                      else {
                        dVar4 = 0.0;
                        if (local_28 == (double *)0x24000000) {
                          dVar4 = *(double *)
                                   (*(int *)(*(int *)(param_1 + 0x14) +
                                            *(int *)(uVar13 + (int)local_20 * 4) * 4) + 0x10) +
                                  *(double *)(local_60[(int)local_10] + 0x10);
                        }
                        else if (local_28 == (double *)0x25000000) {
                          dVar4 = *(double *)
                                   (*(int *)(*(int *)(param_1 + 0x14) +
                                            *(int *)(uVar13 + (int)local_20 * 4) * 4) + 0x10) *
                                  *(double *)(local_60[(int)local_10] + 0x10);
                        }
                        if (local_14 < local_20) {
                          iVar6 = *local_44;
                        }
                        else {
                          iVar6 = *(int *)(uVar13 + (puVar2[3] + (int)local_14) * 4);
                        }
                        *local_68[(int)local_c] = iVar6;
                        iVar6 = FUN_005f74cf(*(undefined4 *)(param_1 + 0x50),0,0,dVar4);
                        *local_68[(int)local_10] = iVar6;
                      }
                      local_8 = 1;
                      break;
                    }
LAB_005fd75e:
                    local_20 = (double *)((int)local_20 + puVar2[3]);
                    local_30 = local_30 + puVar2[3];
                  } while (local_20 < (double *)puVar2[1]);
                }
                if (((*(int *)(local_60[(int)local_c] + 0x40) == 1) &&
                    (local_28 = (double *)((int)local_14 * 4),
                    *(int *)(puVar2[2] + (int)local_14 * 4) !=
                    *(int *)(puVar2[2] + (puVar2[3] + (int)local_14) * 4))) &&
                   ((*(uint *)(local_60[(int)local_10] + 0x2c) == 0xffffffff ||
                    (*(uint *)(local_60[(int)local_10] + 0x2c) <
                     *(uint *)(local_60[(int)local_c] + 0x2c))))) {
                  local_20 = (double *)local_68[(int)local_10];
                  local_34 = (double *)0xffffffff;
                  FUN_005f9c74(*(undefined4 *)local_20,&local_34,local_70);
                  local_48 = local_34;
                  local_4c = local_34;
                  local_50 = local_34;
                  iVar6 = FUN_005f9c74(*local_68[(int)local_c],&local_48,local_70);
                  local_10 = (uint *)(uint)(-1 < iVar6);
                  iVar6 = FUN_005f9c74(*(undefined4 *)((int)local_28 + puVar2[2]),&local_4c,local_70
                                      );
                  local_44 = (int *)(uint)(-1 < iVar6);
                  iVar6 = FUN_005f9c74(*(undefined4 *)(puVar2[2] + (puVar2[3] + (int)local_14) * 4),
                                       &local_50,local_70);
                  local_40 = (int *)(uint)(-1 < iVar6);
                  if (((local_10 == (uint *)0x0) && (local_44 != (int *)0x0)) ||
                     (*(int *)local_20 == *(int *)((int)local_28 + puVar2[2]))) {
                    local_30 = *(int **)local_20;
                    piVar12 = *(int **)(puVar2[2] + (puVar2[3] + (int)local_14) * 4);
                    if (local_30 != piVar12) {
                      *(int **)local_20 = piVar12;
                      *(int **)(puVar2[2] + (puVar2[3] + (int)local_14) * 4) = local_30;
                      iVar9 = local_60[(int)local_c];
                      *(undefined4 *)(iVar9 + 0x44) = 0;
                      *(undefined4 *)(iVar9 + 0x48) = 0;
                      local_8 = 1;
                    }
                  }
                  if (((local_10 == (uint *)0x0) && ((int *)(uint)(-1 < iVar6) != (int *)0x0)) ||
                     (*(int *)local_20 == *(int *)(puVar2[2] + (puVar2[3] + (int)local_14) * 4))) {
                    local_30 = *(int **)local_20;
                    if (local_30 != *(int **)((int)local_28 + puVar2[2])) {
                      *(int **)local_20 = *(int **)((int)local_28 + puVar2[2]);
                      *(int **)((int)local_28 + puVar2[2]) = local_30;
                      iVar6 = local_60[(int)local_c];
                      *(undefined4 *)(iVar6 + 0x44) = 0;
                      *(undefined4 *)(iVar6 + 0x48) = 0;
                      local_8 = 1;
                    }
                  }
                }
              }
            }
            local_c = (uint *)((int)local_c + 1);
          } while (local_c < (uint *)0x2);
          local_2c = (double *)((int)local_2c + 1);
        } while (local_2c < (double *)puVar1[3]);
      }
      if ((*puVar1 & 0xff000000) == 0x34000000) {
        local_2c = (double *)0x0;
        local_30 = (int *)0x0;
        if (puVar1[1] != 0) {
          piVar12 = (int *)puVar1[2];
LAB_005fda0d:
          piVar14 = *(int **)(*(int *)(param_1 + 0x14) + *piVar12 * 4);
          if ((*(byte *)(piVar14 + 6) & 4) == 0) {
            local_2c = (double *)((int)local_2c + 1);
          }
          if ((((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar14 * 4) + 4) & 0x80) == 0) ||
              (piVar14[1] != -1)) ||
             ((_DAT_006ccaf8 <= *(double *)(piVar14 + 4) ||
              (pdVar15 = (double *)0x0, *(int *)(param_1 + 0x44) != 0)))) goto LAB_005fda4a;
          if (*(int *)(param_1 + 0xc) != 0) {
            do {
              if ((pdVar15 != local_24) &&
                 (*(int *)(*(int *)(param_1 + 0x18) + (int)pdVar15 * 4) != 0)) {
                FUN_005f7186();
              }
              pdVar15 = (double *)((int)pdVar15 + 1);
            } while (pdVar15 < *(double **)(param_1 + 0xc));
          }
          *(undefined4 *)(param_1 + 0xc) = 0;
          iVar6 = FUN_005f752b(0x34000001,0xffffffff,0xffffffff);
          if (iVar6 != -1) {
            uVar10 = FUN_005f74cf(*(undefined4 *)(param_1 + 0x50),0,0,_DAT_0069f3c8);
            **(undefined4 **)(**(int **)(param_1 + 0x18) + 8) = uVar10;
            if (**(int **)(**(int **)(param_1 + 0x18) + 8) != -1) {
              uVar13 = 0;
              if (*(int *)(param_1 + 8) != 0) {
                local_38 = *(int *)(param_1 + 8);
                puVar11 = *(undefined4 **)(param_1 + 0x14);
                do {
                  if ((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *(int *)*puVar11 * 4) + 4) &
                      0x10) != 0) {
                    uVar13 = uVar13 + 1;
                  }
                  puVar11 = puVar11 + 1;
                  local_38 = local_38 + -1;
                } while (local_38 != 0);
                local_38 = 0;
              }
              iVar6 = FUN_005f752b(uVar13 & 0xffffff | 0x10000000,0xffffffff,0xffffffff);
              if ((iVar6 != -1) &&
                 (local_58 = (double *)FUN_005f74cf(*(undefined4 *)(param_1 + 0x50),0,0,0),
                 local_58 != (double *)0xffffffff)) {
                iVar6 = 0;
                uVar13 = 0;
                if (*(int *)(param_1 + 8) != 0) {
                  do {
                    if ((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) +
                                           **(int **)(*(int *)(param_1 + 0x14) + uVar13 * 4) * 4) +
                                  4) & 0x10) != 0) {
                      *(uint *)(iVar6 + *(int *)(*(int *)(*(int *)(param_1 + 0x18) + 4) + 0x10)) =
                           uVar13;
                      *(double **)(iVar6 + *(int *)(*(int *)(*(int *)(param_1 + 0x18) + 4) + 8)) =
                           local_58;
                      iVar6 = iVar6 + 4;
                    }
                    uVar13 = uVar13 + 1;
                  } while (uVar13 < *(uint *)(param_1 + 8));
                }
                FUN_005f7a42();
                FUN_005f7a42();
                FUN_005f7186();
                *(undefined4 *)(param_1 + 0x44) = 1;
                uVar13 = 0;
                goto LAB_005fe3e0;
              }
            }
          }
          FUN_005f7186();
          goto LAB_005fe3be;
        }
        goto LAB_005fda5e;
      }
      goto LAB_005fda6c;
    }
    goto LAB_005fe253;
  }
LAB_005fe3cc:
  local_20 = (double *)0x0;
  pdVar15 = *(double **)(param_1 + 0xc);
joined_r0x005fe3d4:
  if (pdVar15 != (double *)0x0) {
    local_14 = (double *)((int)pdVar15 + -1);
    puVar1 = *(uint **)(*(int *)(param_1 + 0x18) + (int)local_14 * 4);
    pdVar16 = (double *)puVar1[3];
    pdVar15 = local_14;
    local_28 = pdVar16;
    if (((pdVar16 != (double *)0x0) &&
        ((*(byte *)(*(int *)(*(int *)(param_1 + 0x14) + *(int *)puVar1[4] * 4) + 0x18) & 0x40) == 0)
        ) && ((uVar13 = *puVar1 & 0xff000000, uVar13 == 0x11000000 ||
              ((uVar13 == 0x24000000 || (uVar13 == 0x25000000)))))) {
      if (local_20 < pdVar16) {
        local_20 = pdVar16;
        if (pdVar16 < (double *)0x11) {
          local_20 = (double *)0x10;
        }
        _free(local_18);
        local_18 = _malloc((int)local_20 << 2);
        if (local_18 == (double *)0x0) goto LAB_005fe3be;
        _free(local_1c);
        local_1c = _malloc((int)local_20 << 3);
        if (local_1c == (double *)0x0) goto LAB_005fe3be;
      }
      local_24 = (double *)0x0;
      if (pdVar16 != (double *)0x0) {
        local_2c = local_18;
        local_34 = local_1c;
        do {
          *(undefined4 *)local_2c = 0xffffffff;
          *local_34 = 1.0;
          iVar6 = FUN_005f9c74(*(undefined4 *)(puVar1[4] + (int)local_24 * 4),local_2c,local_34);
          if ((iVar6 < 0) || (*(int *)local_2c == *(int *)(puVar1[4] + (int)local_24 * 4))) break;
          local_24 = (double *)((int)local_24 + 1);
          local_34 = local_34 + 1;
          local_2c = (double *)((int)local_2c + 4);
        } while (local_24 < pdVar16);
        pdVar15 = local_14;
        if (local_24 < pdVar16) goto joined_r0x005fe3d4;
      }
      local_24 = (double *)0x0;
      local_30 = (int *)0x1;
      local_2c = (double *)0x1;
      local_34 = (double *)0x1;
      pdVar15 = local_14;
      if (pdVar16 == (double *)0x0) {
LAB_005fe58f:
        if (_DAT_006cce38 == *local_1c) {
          uVar13 = (uint)pdVar16 & 0xffffff | 0x24000000;
          if (*puVar1 != uVar13) {
            *puVar1 = uVar13;
            local_34 = (double *)((int)pdVar16 * 2);
            local_8 = 1;
            if ((double *)puVar1[1] < local_34) {
              _free((void *)puVar1[2]);
              puVar11 = _malloc((int)pdVar16 << 3);
              puVar1[2] = (uint)puVar11;
              if (puVar11 == (undefined4 *)0x0) goto LAB_005fe3be;
              puVar1[1] = (uint)local_34;
              for (pdVar15 = local_34; pdVar16 = local_28, pdVar15 != (double *)0x0;
                  pdVar15 = (double *)((int)pdVar15 + -1)) {
                *puVar11 = 0xffffffff;
                puVar11 = puVar11 + 1;
              }
            }
          }
          local_2c = (double *)0x0;
          pdVar15 = local_14;
          if (pdVar16 != (double *)0x0) {
            local_34 = (double *)((int)pdVar16 << 2);
            do {
              piVar14 = (int *)((int)local_18 + (int)local_2c * 4);
              piVar12 = (int *)(puVar1[2] + (int)local_2c * 4);
              iVar6 = *piVar14;
              if (*piVar12 != iVar6) {
                *piVar12 = iVar6;
                local_8 = 1;
              }
              iVar6 = *piVar14;
              if (*(int *)(puVar1[2] + (int)local_34) != iVar6) {
                *(int *)(puVar1[2] + (int)local_34) = iVar6;
                local_8 = 1;
              }
              local_2c = (double *)((int)local_2c + 1);
              local_34 = (double *)((int)local_34 + 4);
            } while (local_2c < pdVar16);
          }
          goto joined_r0x005fe3d4;
        }
        if (*local_1c == 1.0) {
          local_2c = (double *)0x0;
          *puVar1 = (uint)pdVar16 & 0xffffff | 0x10000000;
          puVar1[1] = (uint)pdVar16;
          if (pdVar16 != (double *)0x0) {
            do {
              iVar6 = (int)local_2c * 4;
              local_2c = (double *)((int)local_2c + 1);
              *(undefined4 *)(iVar6 + puVar1[2]) = *(undefined4 *)(iVar6 + (int)local_18);
            } while (local_2c < pdVar16);
          }
        }
        else {
          if (*local_1c != 0.0) {
            if (_DAT_0069f3c8 != *local_1c) goto LAB_005fe74e;
            uVar13 = (uint)pdVar16 & 0xffffff | 0x11000000;
            if (*puVar1 != uVar13) {
              *puVar1 = uVar13;
              puVar1[1] = (uint)pdVar16;
              local_8 = 1;
            }
            local_2c = (double *)0x0;
            if (pdVar16 != (double *)0x0) {
              do {
                piVar12 = (int *)(puVar1[2] + (int)local_2c * 4);
                iVar6 = *(int *)((int)local_2c * 4 + (int)local_18);
                if (*piVar12 != iVar6) {
                  *piVar12 = iVar6;
                  local_8 = 1;
                }
                local_2c = (double *)((int)local_2c + 1);
              } while (local_2c < pdVar16);
            }
            goto joined_r0x005fe3d4;
          }
          *puVar1 = (uint)pdVar16 & 0xffffff | 0x10000000;
          puVar1[1] = (uint)pdVar16;
          if ((local_38 == -1) &&
             (local_38 = FUN_005f74cf(*(undefined4 *)(param_1 + 0x50),0,0,0), local_38 == -1))
          goto LAB_005fe3be;
          pdVar15 = (double *)0x0;
          if (pdVar16 != (double *)0x0) {
            do {
              *(int *)(puVar1[2] + (int)pdVar15 * 4) = local_38;
              pdVar15 = (double *)((int)pdVar15 + 1);
            } while (pdVar15 < pdVar16);
          }
        }
        local_8 = 1;
        pdVar15 = local_14;
        goto joined_r0x005fe3d4;
      }
      do {
        if ((local_24 != (double *)0x0) && (local_1c[(int)local_24] != local_1c[(int)local_24 + -1])
           ) {
          local_34 = (double *)0x0;
        }
        pdVar3 = local_1c + (int)local_24;
        if ((*pdVar3 < _DAT_0069f3c8) || (_DAT_006ccb10 < *pdVar3)) {
          local_2c = (double *)0x0;
        }
        if ((*pdVar3 < _DAT_006a3fa0) || (_DAT_006a3f98 < *pdVar3)) {
          local_30 = (int *)0x0;
        }
        local_24 = (double *)((int)local_24 + 1);
      } while (local_24 < pdVar16);
      if (local_34 != (double *)0x0) goto LAB_005fe58f;
LAB_005fe74e:
      if ((local_30 != (int *)0x0) &&
         (((*(byte *)(param_1 + 0x92) & 8) == 0 || (local_2c != (double *)0x0)))) {
        uVar13 = (uint)pdVar16 & 0xffffff | 0x25000000;
        if (*puVar1 != uVar13) {
          *puVar1 = uVar13;
          local_34 = (double *)((int)pdVar16 * 2);
          local_8 = 1;
          if ((double *)puVar1[1] < local_34) {
            _free((void *)puVar1[2]);
            puVar11 = _malloc((int)pdVar16 << 3);
            puVar1[2] = (uint)puVar11;
            if (puVar11 == (undefined4 *)0x0) goto LAB_005fe3be;
            puVar1[1] = (uint)local_34;
            for (pdVar15 = local_34; pdVar16 = local_28, pdVar15 != (double *)0x0;
                pdVar15 = (double *)((int)pdVar15 + -1)) {
              *puVar11 = 0xffffffff;
              puVar11 = puVar11 + 1;
            }
          }
        }
        local_24 = (double *)0x0;
        pdVar15 = local_14;
        if (pdVar16 != (double *)0x0) {
          local_2c = (double *)((int)pdVar16 << 2);
          do {
            piVar12 = (int *)(puVar1[2] + (int)local_24 * 4);
            iVar6 = *(int *)((int)local_24 * 4 + (int)local_18);
            if (*piVar12 != iVar6) {
              *piVar12 = iVar6;
              local_8 = 1;
            }
            if (*(int *)((int)local_2c + puVar1[2]) == -1) {
              piVar12 = (int *)0x0;
            }
            else {
              piVar12 = *(int **)(*(int *)(param_1 + 0x14) + *(int *)((int)local_2c + puVar1[2]) * 4
                                 );
            }
            if ((((piVar12 == (int *)0x0) ||
                 ((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar12 * 4) + 4) & 0x80) == 0))
                || (piVar12[1] != -1)) || (*(double *)(piVar12 + 4) != local_1c[(int)local_24])) {
              uVar10 = FUN_005f74cf(*(undefined4 *)(param_1 + 0x50),0,0,local_1c[(int)local_24]);
              *(undefined4 *)((int)local_2c + puVar1[2]) = uVar10;
              if (*(int *)((int)local_2c + puVar1[2]) == -1) goto LAB_005fe3be;
              local_8 = 1;
            }
            local_24 = (double *)((int)local_24 + 1);
            local_2c = (double *)((int)local_2c + 4);
            pdVar15 = local_14;
          } while (local_24 < pdVar16);
        }
      }
    }
    goto joined_r0x005fe3d4;
  }
  uVar13 = (uint)(local_8 == 0);
LAB_005fe3e0:
  _free(local_18);
  _free(local_1c);
  return uVar13;
LAB_005fda4a:
  local_30 = (int *)((int)local_30 + 1);
  piVar12 = piVar12 + 1;
  if ((int *)puVar1[1] <= local_30) goto code_r0x005fda58;
  goto LAB_005fda0d;
code_r0x005fda58:
  if (local_2c == (double *)0x0) {
LAB_005fda5e:
    *puVar1 = 0;
    puVar1[1] = 0;
    local_8 = 1;
  }
LAB_005fda6c:
  if ((((*puVar1 & 0xff000000) == 0x50000000) || ((*puVar1 & 0xff000000) == 0x34000000)) &&
     (local_28 = (double *)0x0, puVar1[3] != 0)) {
    do {
      local_40 = (int *)(puVar1[2] + (int)local_28 * 4);
      local_34 = local_24;
      pdVar15 = (double *)*local_40;
LAB_005fdc9b:
      do {
        local_2c = pdVar15;
        piVar12 = *(int **)(*(int *)(param_1 + 0x14) + (int)local_2c * 4);
        if ((((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar12 * 4) + 4) & 2) == 0) ||
            (piVar12[1] != -1)) ||
           (((double *)piVar12[0xe] != local_34 || ((double *)piVar12[0xf] != local_34)))) break;
        uVar13 = puVar1[3];
        if (uVar13 < puVar1[1]) {
          puVar11 = (undefined4 *)(puVar1[2] + uVar13 * 4);
          do {
            if (local_2c == (double *)*puVar11) break;
            uVar13 = uVar13 + 1;
            puVar11 = puVar11 + 1;
          } while (uVar13 < puVar1[1]);
          if (uVar13 < puVar1[1]) break;
        }
        local_34 = (double *)piVar12[0xb];
        puVar2 = *(uint **)(*(int *)(param_1 + 0x18) + piVar12[0xb] * 4);
        local_30 = (int *)puVar2[3];
        piVar12 = (int *)0x0;
        if (local_30 != (int *)0x0) {
          piVar14 = (int *)puVar2[4];
          do {
            if ((double *)*piVar14 == local_2c) break;
            piVar14 = piVar14 + 1;
            local_44 = piVar14;
            piVar12 = (int *)((int)piVar12 + 1);
          } while (piVar12 < local_30);
        }
        if ((*puVar2 & 0xff000000) != 0x24000000) {
          if ((*puVar2 & 0xff000000) != 0x25000000) break;
          pdVar16 = *(double **)(puVar2[2] + (int)piVar12 * 4);
          pdVar3 = *(double **)(puVar2[2] + ((int)local_30 + (int)piVar12) * 4);
          pdVar15 = pdVar3;
          if (((*(byte *)(*(int *)(*(int *)(param_1 + 0x14) + (int)pdVar16 * 4) + 0x18) & 4) == 0)
             && (pdVar15 = pdVar16,
                (*(byte *)(*(int *)(*(int *)(param_1 + 0x14) + (int)pdVar3 * 4) + 0x18) & 4) == 0))
          break;
          goto LAB_005fdc9b;
        }
        pdVar15 = *(double **)(puVar2[2] + (int)piVar12 * 4);
      } while (pdVar15 == *(double **)(puVar2[2] + ((int)local_30 + (int)piVar12) * 4));
      local_28 = (double *)((int)local_28 + 1);
      *local_40 = (int)local_2c;
    } while (local_28 < puVar1[3]);
  }
  local_28 = (double *)(*puVar1 & 0xff000000);
  if ((local_28 == (double *)0x11000000) && (puVar1[3] != 0)) {
    local_20 = (double *)puVar1[2];
    local_34 = (double *)puVar1[3];
    do {
      piVar12 = *(int **)(*(int *)(param_1 + 0x14) + *(int *)local_20 * 4);
      if (((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar12 * 4) + 4) & 2) != 0) &&
         (piVar12[1] == -1)) {
        iVar6 = *(int *)(*(int *)(param_1 + 0x18) + piVar12[0xb] * 4);
        pdVar15 = *(double **)(iVar6 + 0xc);
        local_2c = (double *)0x0;
        if (pdVar15 != (double *)0x0) {
          local_30 = *(int **)(iVar6 + 0x10);
          do {
            if (*local_30 == *(int *)local_20) break;
            local_2c = (double *)((int)local_2c + 1);
            local_30 = local_30 + 1;
          } while (local_2c < pdVar15);
        }
      }
      local_20 = (double *)((int)local_20 + 4);
      local_34 = (double *)((int)local_34 + -1);
    } while (local_34 != (double *)0x0);
  }
  if ((local_28 == (double *)0x50000000) && (local_14 = (double *)0x0, puVar1[3] != 0)) {
    do {
      local_34 = (double *)(puVar1[2] + (int)local_14 * 4);
      piVar12 = *(int **)(*(int *)(param_1 + 0x14) + *(int *)local_34 * 4);
      if (((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar12 * 4) + 4) & 2) != 0) &&
         (piVar12[1] == -1)) {
        puVar2 = *(uint **)(*(int *)(param_1 + 0x18) + piVar12[0xb] * 4);
        pdVar15 = (double *)puVar2[3];
        local_20 = (double *)0x0;
        if (pdVar15 != (double *)0x0) {
          piVar12 = (int *)puVar2[4];
          do {
            if (*piVar12 == *(int *)local_34) break;
            local_20 = (double *)((int)local_20 + 1);
            piVar12 = piVar12 + 1;
          } while (local_20 < pdVar15);
        }
        local_44 = (int *)(*puVar2 & 0xff000000);
        if (local_44 == (int *)0x11000000) {
          local_c = (uint *)0x1;
        }
        else {
          if (local_44 != (int *)0x25000000) goto LAB_005fdf47;
          local_c = (uint *)0x2;
        }
        local_10 = (uint *)0x0;
        if (local_c != (uint *)0x0) {
          local_54 = (int)pdVar15 * 4;
          local_58 = (double *)((int)pdVar15 * -4);
          local_2c = (double *)(puVar2[2] + (int)local_20 * 4);
          local_28 = (double *)(puVar2[2] + ((int)pdVar15 + (int)local_20) * 4);
          do {
            iVar6 = *(int *)local_2c;
            local_30 = *(int **)(*(int *)(param_1 + 0x14) + iVar6 * 4);
            if (local_44 != (int *)0x25000000) {
LAB_005fdd5a:
              if (iVar6 == *(int *)(puVar1[2] + ((int)local_14 + puVar1[3] * 2) * 4)) {
                local_3c = *(int **)(puVar1[2] + (puVar1[3] + (int)local_14) * 4);
                local_40 = *(int **)(*(int *)(param_1 + 0x14) + (int)local_3c * 4);
                if ((((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *local_40 * 4) + 4) & 0x80) ==
                      0) || (local_40[1] != -1)) || (*(double *)(local_40 + 4) != _DAT_006ccaf8))
                goto LAB_005fdda7;
                *(int *)local_34 = iVar6;
                *(int *)(puVar1[2] + (puVar1[3] + (int)local_14) * 4) = iVar6;
                *(int **)(puVar1[2] + ((int)local_14 + puVar1[3] * 2) * 4) = local_3c;
              }
              else {
LAB_005fdda7:
                if ((((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *local_30 * 4) + 4) & 2) == 0)
                    || (local_30[1] != -1)) ||
                   (puVar2 = *(uint **)(*(int *)(param_1 + 0x18) + local_30[0xb] * 4),
                   (*puVar2 & 0xff000000) != 0x50000000)) goto LAB_005fde9b;
                pdVar16 = (double *)puVar2[3];
                local_20 = (double *)0x0;
                if (pdVar16 != (double *)0x0) {
                  local_30 = (int *)puVar2[4];
                  do {
                    if (*local_30 == iVar6) break;
                    local_20 = (double *)((int)local_20 + 1);
                    local_30 = local_30 + 1;
                  } while (local_20 < pdVar16);
                }
                local_40 = *(int **)(*(int *)(param_1 + 0x14) +
                                    *(int *)(puVar2[2] + ((int)pdVar16 + (int)local_20) * 4) * 4);
                local_3c = *(int **)(*(int *)(param_1 + 0x14) +
                                    *(int *)(puVar2[2] + ((int)local_20 + puVar2[3] * 2) * 4) * 4);
                if ((*(byte *)(local_40 + 6) & 8) == 0) {
                  if ((((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *local_40 * 4) + 4) & 0x80)
                        == 0) || (local_40[1] != -1)) ||
                     (*(double *)(local_40 + 4) <= _DAT_006ccaf8)) goto LAB_005fde9b;
                  local_30 = (int *)0x1;
                }
                else {
                  local_30 = (int *)0x0;
                }
                if ((*(byte *)(local_3c + 6) & 8) == 0) {
                  if ((((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *local_3c * 4) + 4) & 0x80)
                        == 0) || (local_3c[1] != -1)) ||
                     (*(double *)(local_3c + 4) <= _DAT_006ccaf8)) goto LAB_005fde9b;
                  local_2c = (double *)0x1;
                }
                else {
                  local_2c = (double *)0x0;
                }
                local_28 = *(double **)(puVar1[2] + ((int)local_14 + puVar1[3]) * 4);
                local_58 = *(double **)(puVar1[2] + ((int)local_14 + puVar1[3] * 2) * 4);
                *(undefined4 *)local_34 = *(undefined4 *)(puVar2[2] + (int)local_20 * 4);
                pdVar15 = local_58;
                if (local_30 == (int *)0x0) {
                  pdVar15 = local_28;
                }
                *(double **)(puVar1[2] + (puVar1[3] + (int)local_14) * 4) = pdVar15;
                pdVar15 = local_58;
                if (local_2c == (double *)0x0) {
                  pdVar15 = local_28;
                }
                *(double **)(puVar1[2] + ((int)local_14 + puVar1[3] * 2) * 4) = pdVar15;
              }
              local_8 = 1;
              break;
            }
            local_40 = *(int **)(*(int *)(param_1 + 0x14) + *(int *)local_28 * 4);
            if ((((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *local_40 * 4) + 4) & 0x80) != 0)
                && (local_40[1] == -1)) && (*(double *)(local_40 + 4) < _DAT_006ccaf8))
            goto LAB_005fdd5a;
LAB_005fde9b:
            local_2c = (double *)((int)local_2c + (int)pdVar15 * 4);
            local_10 = (uint *)((int)local_10 + 1);
            local_28 = (double *)((int)local_28 + (int)pdVar15 * -4);
          } while (local_10 < local_c);
        }
      }
LAB_005fdf47:
      local_14 = (double *)((int)local_14 + 1);
    } while (local_14 < (double *)puVar1[3]);
  }
  if ((*puVar1 & 0xff000000) == 0x14000000) {
    local_28 = (double *)0xffffffff;
    local_c = (uint *)0xffffffff;
    local_20 = (double *)0x0;
    if (puVar1[1] != 0) {
      do {
        iVar6 = *(int *)(puVar1[2] + (int)local_20 * 4);
        piVar12 = *(int **)(*(int *)(param_1 + 0x14) + iVar6 * 4);
        if ((((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar12 * 4) + 4) & 2) != 0) &&
            (piVar12[1] == -1)) &&
           (local_10 = *(uint **)(*(int *)(param_1 + 0x18) + piVar12[0xb] * 4),
           (*local_10 & 0xff000000) == 0x25000000)) {
          local_14 = (double *)0x0;
          if ((double *)local_10[3] != (double *)0x0) {
            local_34 = (double *)local_10[4];
            do {
              if (*(int *)local_34 == iVar6) break;
              local_14 = (double *)((int)local_14 + 1);
              local_34 = (double *)((int)local_34 + 4);
            } while (local_14 < (double *)local_10[3]);
          }
          local_2c = (double *)0x0;
          local_30 = (int *)0x1;
          do {
            local_58 = *(double **)
                        (local_10[2] + (int)(local_10[3] * (int)local_2c + (int)local_14) * 4);
            piVar12 = *(int **)(*(int *)(param_1 + 0x14) + (int)local_58 * 4);
            if (((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar12 * 4) + 4) & 2) != 0) &&
               (piVar12[1] == -1)) {
              pdVar15 = *(double **)(*(int *)(param_1 + 0x18) + piVar12[0xb] * 4);
              local_34 = pdVar15;
              if (((ulonglong)*pdVar15 & 0xff000000) == 0x15000000) {
                if (piVar12[0x10] == 1) {
                  uVar13 = piVar12[6];
                  uVar7 = *(uint *)(*(int *)(*(int *)(param_1 + 0x14) +
                                            *(int *)(puVar1[4] + (int)local_20 * 4) * 4) + 0x18) |
                          uVar13;
                  uVar8 = uVar7 & 0xe000000;
                  uVar5 = 0x8000000;
                  if ((((uVar7 & 0x8000000) != 0) || (uVar5 = 0x4000000, (uVar7 & 0x4000000) != 0))
                     || (uVar5 = 0x2000000, (uVar7 & 0x2000000) != 0)) {
                    uVar8 = uVar5;
                  }
                  if ((uVar13 & 0xe000000) != uVar8) {
                    piVar12[6] = uVar13 & 0xf1ffffff | uVar8;
                    local_8 = 1;
                  }
                }
                if ((((*(byte *)(param_1 + 0x90) & 0x40) != 0) && (puVar1[3] == 1)) &&
                   ((*(byte *)(*(int *)(*(int *)(param_1 + 0x14) +
                                       *(int *)(puVar1[4] + (int)local_20 * 4) * 4) + 0x1b) & 2) !=
                    0)) {
                  uVar13 = 0;
                  if (*(int *)((int)pdVar15 + 0xc) != 0) {
                    local_34 = *(double **)(pdVar15 + 2);
                    do {
                      if (*(double **)local_34 == local_58) break;
                      local_34 = (double *)((int)local_34 + 4);
                      uVar13 = uVar13 + 1;
                    } while (uVar13 < *(uint *)((int)pdVar15 + 0xc));
                  }
                  local_28 = *(double **)(*(int *)(pdVar15 + 1) + uVar13 * 4);
                  local_c = *(uint **)(local_10[2] +
                                      (int)(local_10[3] * (int)local_30 + (int)local_14) * 4);
                }
              }
            }
            local_2c = (double *)((int)local_2c + 1);
            local_30 = (int *)((int)local_30 + -1);
          } while (local_2c < (double *)0x2);
        }
        local_20 = (double *)((int)local_20 + 1);
      } while (local_20 < (double *)puVar1[1]);
      if (local_28 != (double *)0xffffffff) {
        iVar6 = FUN_005f752b(0x33000004,0xffffffff,0xffffffff);
        if ((iVar6 == -1) || (iVar9 = FUN_005f752b(0x10000001,0xffffffff,0xffffffff), iVar9 == -1))
        {
          return 0x8007000e;
        }
        iVar6 = *(int *)(*(int *)(param_1 + 0x18) + iVar6 * 4);
        local_34 = *(double **)(*(int *)(param_1 + 0x18) + iVar9 * 4);
        FUN_005f7a42();
        FUN_005f7a42();
        local_2c = (double *)0x0;
        piVar12 = (int *)(iVar6 + 8);
        *(double **)(*piVar12 + 4) = local_28;
        *(double **)*piVar12 = local_28;
        *(uint **)(*piVar12 + 0xc) = local_c;
        *(uint **)(*piVar12 + 8) = local_c;
        do {
          uVar10 = FUN_005f74cf(*(undefined4 *)(param_1 + 0x60),0,0,0);
          *(undefined4 *)((int)local_2c + *(int *)(iVar6 + 0x10)) = uVar10;
          iVar9 = *(int *)((int)local_2c + *(int *)(iVar6 + 0x10));
          if (iVar9 == -1) {
            return 0x8007000e;
          }
          local_2c = (double *)((int)local_2c + 4);
          puVar2 = (uint *)(*(int *)(*(int *)(param_1 + 0x14) + iVar9 * 4) + 0x18);
          *puVar2 = *puVar2 | *(uint *)(*(int *)(*(int *)(param_1 + 0x14) + *(int *)puVar1[4] * 4) +
                                       0x18) & 0xe000000;
        } while (local_2c < (double *)0x10);
        **(undefined4 **)(local_34 + 1) = *(undefined4 *)(*(int *)(iVar6 + 0x10) + 8);
        **(undefined4 **)(local_34 + 2) = *(undefined4 *)puVar1[4];
        FUN_005f7186();
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
        pdVar15 = *(double **)(param_1 + 0xc);
        while (pdVar15 = (double *)((int)pdVar15 + -1), local_24 < pdVar15) {
          puVar11 = (undefined4 *)(*(int *)(param_1 + 0x18) + (int)pdVar15 * 4);
          *puVar11 = puVar11[-1];
        }
        *(int *)(*(int *)(param_1 + 0x18) + (int)local_24 * 4) = iVar6;
        *(double **)(*(int *)(param_1 + 0x18) + 4 + (int)local_24 * 4) = local_34;
        FUN_005fb8ae();
        local_8 = 1;
      }
    }
  }
LAB_005fe253:
  local_24 = (double *)((int)local_24 + 1);
  if (*(double **)(param_1 + 0xc) <= local_24) goto code_r0x005fe262;
  goto LAB_005fd5e2;
code_r0x005fe262:
  if (local_8 != 0) {
    return 0;
  }
  goto LAB_005fe3cc;
LAB_005fe3be:
  uVar13 = 0x8007000e;
  goto LAB_005fe3e0;
}

