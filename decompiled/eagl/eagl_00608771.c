/* Decompiled from Speed.exe @ 00608771 */
/* Module: EAGL */
/* Ghidra DecompileAll */


int * __fastcall FUN_00608771(int param_1)

{
  int *piVar1;
  uint *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint uVar13;
  int *piVar14;
  uint *puVar15;
  undefined4 *puVar16;
  bool bVar17;
  undefined8 uVar18;
  undefined4 auStack_1f4 [24];
  int local_194 [32];
  undefined4 local_114 [24];
  undefined4 local_b4 [6];
  int local_9c [6];
  uint local_84 [6];
  uint local_6c [6];
  int *local_54;
  uint local_50;
  uint *local_4c;
  int *local_48;
  uint *local_44;
  uint *local_40;
  int *local_3c;
  uint *local_38;
  int *local_34;
  int local_30;
  int *local_2c;
  int *local_28;
  uint *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  uint *local_14;
  int *local_10;
  uint *local_c;
  int *local_8;
  
  iVar7 = 6;
  puVar12 = local_84;
  for (iVar6 = iVar7; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  puVar11 = local_114;
  for (iVar6 = 0x18; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  puVar12 = local_6c;
  for (iVar6 = iVar7; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  piVar10 = local_9c;
  for (iVar6 = iVar7; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar10 = 0;
    piVar10 = piVar10 + 1;
  }
  puVar11 = local_b4;
  for (; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  uVar8 = 0;
  local_30 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      piVar10 = *(int **)(*(int *)(param_1 + 0x14) + uVar8 * 4);
      if (*piVar10 == *(int *)(param_1 + 0x60)) {
        piVar10[2] = -1;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 8));
  }
  local_14 = (uint *)0x0;
  if (*(int *)(param_1 + 0x88) != 0) {
    do {
      local_30 = 0;
      if (*(int *)(param_1 + 0x140) == 0) goto LAB_00608fb0;
      puVar12 = *(uint **)(*(int *)(param_1 + 0x144) + (int)local_14 * 4);
      if ((((puVar12 != (uint *)0x0) && (uVar8 = *puVar12, uVar8 != 0)) &&
          ((uVar8 & 0xff000000) != 0xe1000000)) && ((uVar8 & 0xff000000) != 0x34000000)) {
        piVar14 = (int *)(uVar8 & 0xffffff);
        piVar10 = *(int **)(*(int *)(param_1 + 0x14) + *(int *)(puVar12[2] + (int)piVar14 * 4) * 4);
        local_20 = piVar14;
        if (((*(byte *)((int)piVar10 + 0x22) & 0xf) != 0) && (*piVar10 == *(int *)(param_1 + 0x60)))
        {
          pvVar3 = _malloc(0x38);
          if (pvVar3 == (void *)0x0) {
            local_30 = 0;
          }
          else {
            local_30 = FUN_005f7709();
          }
          if (local_30 == 0) {
            return (int *)0x8007000e;
          }
          local_8 = (int *)FUN_005f7760((uint)piVar14 | 0x10000000,piVar14,piVar14,0);
          if ((int)local_8 < 0) goto LAB_006099bc;
          local_10 = (int *)0x0;
          if (piVar14 != (int *)0x0) {
            iVar6 = (*puVar12 & 0xffffff) << 2;
            do {
              local_1c = *(int **)(*(int *)(param_1 + 0x14) + *(int *)(iVar6 + puVar12[2]) * 4);
              *(int *)(*(int *)(local_30 + 8) + (int)local_10 * 4) = *(int *)(iVar6 + puVar12[2]);
              uVar4 = FUN_005f74cf(*(undefined4 *)(param_1 + 0x60),0xffffffff,local_1c[3],0);
              *(undefined4 *)(*(int *)(local_30 + 0x10) + (int)local_10 * 4) = uVar4;
              *(undefined4 *)(iVar6 + puVar12[2]) =
                   *(undefined4 *)(*(int *)(local_30 + 0x10) + (int)local_10 * 4);
              *(undefined4 *)
               (*(int *)(*(int *)(param_1 + 0x14) + *(int *)(iVar6 + puVar12[2]) * 4) + 0x20) = 0;
              local_10 = (int *)((int)local_10 + 1);
              iVar6 = iVar6 + 4;
            } while (local_10 < local_20);
          }
          iVar6 = local_30;
          local_30 = 0;
          piVar10 = (int *)(param_1 + 0x134);
          *(int *)(*(int *)(param_1 + 0x140) + *piVar10 * 4) = iVar6;
          *piVar10 = *piVar10 + 1;
        }
      }
      local_14 = (uint *)((int)local_14 + 1);
    } while (local_14 < *(uint **)(param_1 + 0x88));
  }
  local_30 = 0;
  if ((*(int *)(param_1 + 0x140) != 0) && (local_18 = (int *)0x0, *(int *)(param_1 + 0x134) != 0)) {
    local_28 = (int *)0x0;
    do {
      piVar10 = local_28;
      puVar12 = *(uint **)((int)local_28 + *(int *)(param_1 + 0x140));
      local_38 = puVar12;
      if (((puVar12 != (uint *)0x0) && (uVar8 = *puVar12 & 0xff000000, uVar8 != 0)) &&
         (uVar8 != 0x34000000)) {
        if (((uVar8 == 0x40000000) || (uVar8 == 0x44000000)) ||
           ((uVar8 == 0x48000000 || ((uVar8 == 0x4c000000 || (uVar8 == 0xe1000000)))))) {
          local_2c = (int *)0x0;
          local_1c = (int *)0x0;
          local_10 = (int *)0x0;
          if (*(int *)(param_1 + 0x138) != 0) {
LAB_00608c07:
            local_14 = (uint *)0x0;
            puVar12 = *(uint **)(*(int *)(param_1 + 0x144) + (int)local_10 * 4);
            puVar15 = (uint *)(*puVar12 & 0xffffff);
            local_34 = (int *)(uint)(local_10 < *(int **)(param_1 + 0x88));
            local_4c = puVar15;
            if (puVar15 == (uint *)0x0) goto LAB_00608d48;
            local_c = (uint *)0x0;
            local_54 = (int *)(puVar12[1] / (uint)puVar15);
            if (local_38[3] != 0) {
              local_44 = *(uint **)(*(int *)(*(int *)(param_1 + 0x140) + (int)local_28) + 0xc);
              do {
                if (local_34 < local_54) {
                  local_8 = (int *)((int)puVar15 * (int)local_34 * 4);
                  local_20 = (int *)((int)local_54 - (int)local_34);
                  do {
                    if (puVar15 != (uint *)0x0) {
                      local_50 = *(uint *)(local_38[4] + (int)local_c * 4);
                      puVar9 = (uint *)(puVar12[2] + (int)local_8);
                      local_40 = puVar15;
                      do {
                        local_24 = *(uint **)(*(int *)(param_1 + 0x14) + *puVar9 * 4);
                        if ((*puVar9 == local_50) || (local_24[9] == local_50)) {
                          *(undefined4 *)((int)local_b4 + (int)local_28) = 1;
                          puVar2 = local_4c;
                          if ((local_18 < local_10) &&
                             (**(int **)((int)local_28 + *(int *)(param_1 + 0x144)) != 0)) {
                            local_1c = (int *)0x1;
                            local_14 = local_38;
                          }
                          else if ((*(int **)(param_1 + 0x88) <= local_10) && (local_24[3] == 3)) {
                            local_9c[(uint)local_18 % 6] = 1;
                            puVar15 = puVar2;
                          }
                        }
                        puVar9 = puVar9 + 1;
                        local_40 = (uint *)((int)local_40 + -1);
                      } while (local_40 != (uint *)0x0);
                    }
                    local_8 = local_8 + (int)puVar15;
                    local_20 = (int *)((int)local_20 - 1);
                  } while (local_20 != (int *)0x0);
                }
                local_c = (uint *)((int)local_c + 1);
              } while (local_c < local_44);
            }
            if (local_1c == (int *)0x0) goto LAB_00608d48;
            piVar10 = (int *)(*puVar12 & 0xffffff);
            local_1c = piVar10;
            pvVar3 = _malloc(0x38);
            if (pvVar3 == (void *)0x0) {
              local_30 = 0;
            }
            else {
              local_30 = FUN_005f7709();
            }
            if (local_30 == 0) {
              return (int *)0x8007000e;
            }
            local_8 = (int *)FUN_005f7760((uint)piVar10 | 0x10000000,piVar10,piVar10,0);
            if (-1 < (int)local_8) {
              puVar11 = *(undefined4 **)(local_30 + 0x10);
              for (piVar10 = local_1c; piVar10 != (int *)0x0; piVar10 = (int *)((int)piVar10 - 1)) {
                *puVar11 = 0xffffffff;
                puVar11 = puVar11 + 1;
              }
              local_10 = (int *)0x0;
              puVar15 = local_14;
              if (puVar12[1] != 0) {
                do {
                  local_8 = (int *)0x0;
                  if (puVar15[3] != 0) {
                    do {
                      iVar6 = *(int *)(puVar15[4] + (int)local_8 * 4);
                      if (iVar6 == *(int *)(puVar12[2] + (int)local_10 * 4)) {
                        iVar7 = ((uint)local_10 % (uint)local_1c) * 4;
                        piVar10 = *(int **)(iVar7 + *(int *)(local_30 + 0x10));
                        if (piVar10 == (int *)0xffffffff) {
                          piVar10 = (int *)FUN_005f74cf(*(undefined4 *)(param_1 + 0x60),0xffffffff,
                                                        *(undefined4 *)
                                                         (*(int *)(*(int *)(param_1 + 0x14) +
                                                                  iVar6 * 4) + 0xc),0);
                        }
                        local_20 = piVar10;
                        if (piVar10 == (int *)0xffffffff) {
                          return (int *)0x8007000e;
                        }
                        *(int **)(puVar12[2] + (int)local_10 * 4) = piVar10;
                        *(undefined4 *)(iVar7 + *(int *)(local_30 + 8)) =
                             *(undefined4 *)(local_14[4] + (int)local_8 * 4);
                        *(int **)(iVar7 + *(int *)(local_30 + 0x10)) = piVar10;
                        *(undefined4 *)
                         (*(int *)(*(int *)(param_1 + 0x14) + (int)piVar10 * 4) + 0x20) = 0;
                        puVar15 = local_14;
                      }
                      local_8 = (int *)((int)local_8 + 1);
                    } while (local_8 < (int *)puVar15[3]);
                  }
                  local_10 = (int *)((int)local_10 + 1);
                } while (local_10 < puVar12[1]);
              }
              *(int *)(*(int *)(param_1 + 0x140) + *(int *)(param_1 + 0x134) * 4) = local_30;
              *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + 1;
              local_30 = 0;
              goto LAB_00608ea2;
            }
            goto LAB_006099bc;
          }
LAB_00608ea2:
          piVar10 = local_28;
          local_10 = (int *)0x0;
          local_c = (uint *)0x0;
          if (*(int *)(*(int *)(*(int *)(param_1 + 0x140) + (int)local_28) + 0xc) != 0) {
            local_48 = local_18;
            do {
              iVar6 = *(int *)(*(int *)(param_1 + 0x14) +
                              *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x140) + (int)piVar10) +
                                               0x10) + (int)local_c * 4) * 4);
              *(int **)(iVar6 + 8) = local_18;
              local_8 = (int *)FUN_006077c3(*(int *)(param_1 + 0x140),(int)local_18 + 1,
                                            *(undefined4 *)(param_1 + 0x134),
                                            *(undefined4 *)
                                             (*(int *)(*(int *)((int)piVar10 +
                                                               *(int *)(param_1 + 0x140)) + 0x10) +
                                             (int)local_c * 4),iVar6,&local_3c);
              piVar14 = (int *)FUN_006077c3(*(undefined4 *)(param_1 + 0x144),0,
                                            *(undefined4 *)(param_1 + 0x138),
                                            *(undefined4 *)
                                             (*(int *)(*(int *)(*(int *)(param_1 + 0x140) +
                                                               (int)piVar10) + 0x10) +
                                             (int)local_c * 4),iVar6,&local_3c);
              if (local_10 < piVar14) {
                local_10 = piVar14;
              }
              piVar5 = local_8;
              if (local_3c != (int *)0x0) {
                piVar5 = (int *)0xffffffff;
              }
              if (local_2c < piVar5) {
                local_2c = piVar5;
              }
              iVar7 = *(int *)(iVar6 + 0xc) + (int)piVar10;
              local_c = (uint *)((int)local_c + 1);
              local_114[iVar7] = piVar14;
              iVar6 = *(int *)(*(int *)(param_1 + 0x140) + (int)piVar10);
              auStack_1f4[iVar7] = piVar5;
            } while (local_c < *(uint **)(iVar6 + 0xc));
          }
          piVar14 = local_48;
          local_84[(int)local_48] = (uint)local_2c;
          local_6c[(int)piVar14] = (uint)local_10;
        }
        else {
          local_38 = (uint *)0x0;
          local_34 = (int *)0x0;
          if (puVar12[3] != 0) {
            local_24 = *(uint **)(*(int *)(*(int *)(param_1 + 0x140) + (int)local_28) + 0xc);
            piVar14 = (int *)puVar12[4];
            do {
              if (*(int *)(*(int *)(*(int *)(param_1 + 0x14) + *piVar14 * 4) + 8) == -1) {
                local_38 = (uint *)0x1;
              }
              else {
                local_34 = (int *)0x1;
              }
              piVar14 = piVar14 + 1;
              local_24 = (uint *)((int)local_24 + -1);
            } while (local_24 != (uint *)0x0);
            if (local_34 != (int *)0x0) {
              if (local_38 == (uint *)0x0) goto LAB_00608f96;
              uVar18 = 0x6a5408000012c8;
              uVar4 = 0;
              goto LAB_006098ec;
            }
          }
          local_14 = (uint *)0x0;
          FUN_0060783e(*(undefined4 *)(param_1 + 0x140),(int)local_18 + 1,
                       *(undefined4 *)(param_1 + 0x134),puVar12[4],puVar12[3],local_194,&local_14);
          iVar6 = *(int *)((int)piVar10 + *(int *)(param_1 + 0x140));
          FUN_0060783e(*(undefined4 *)(param_1 + 0x144),0,*(undefined4 *)(param_1 + 0x138),
                       *(undefined4 *)(iVar6 + 0x10),*(undefined4 *)(iVar6 + 0xc),local_194,
                       &local_14);
          local_28 = (int *)0x0;
          do {
            piVar14 = local_28;
            iVar6 = *(int *)((int)piVar10 + *(int *)(param_1 + 0x140));
            local_8 = (int *)FUN_0060807f(local_28,*(undefined4 *)(param_1 + 0x144),
                                          *(undefined4 *)(param_1 + 0x138),
                                          *(undefined4 *)(iVar6 + 0x10),*(undefined4 *)(iVar6 + 0xc)
                                         );
            if ((int)local_8 < 0) {
              return local_8;
            }
            if (((int *)local_84[(int)piVar14] <= local_18) && (local_8 == (int *)0x0)) break;
            piVar14 = (int *)((int)piVar14 + 1);
            local_28 = piVar14;
          } while (piVar14 < (int *)0x6);
          if (piVar14 == (int *)0x6) {
            iVar6 = *(int *)(param_1 + 0x140);
            goto LAB_006098ce;
          }
          local_2c = (int *)0x0;
          local_c = (uint *)0x0;
          if (local_14 != (uint *)0x0) {
            local_48 = piVar14;
            do {
              iVar6 = local_194[(int)local_c];
              iVar7 = *(int *)(*(int *)(param_1 + 0x14) + iVar6 * 4);
              *(int **)(iVar7 + 8) = local_28;
              local_8 = (int *)FUN_006077c3(*(undefined4 *)(param_1 + 0x140),(int)local_18 + 1,
                                            *(undefined4 *)(param_1 + 0x134),iVar6,iVar7,&local_3c);
              piVar5 = (int *)FUN_006077c3(*(undefined4 *)(param_1 + 0x144),0,
                                           *(undefined4 *)(param_1 + 0x138),local_194[(int)local_c],
                                           iVar7,&local_3c);
              piVar14 = local_28;
              if (local_10 < piVar5) {
                local_10 = piVar5;
              }
              if ((*(int **)(param_1 + 0x88) <= piVar5) && (*(int *)(iVar7 + 0xc) == 3)) {
                local_9c[(int)local_28] = 1;
              }
              if (local_3c != (int *)0x0) {
                local_b4[(int)piVar14] = 1;
              }
              if ((local_10 != (int *)0x0) || (local_3c != (int *)0x0)) {
                local_8 = (int *)0xffffffff;
              }
              piVar1 = local_8;
              if (local_2c < local_8) {
                local_2c = local_8;
              }
              iVar6 = *(int *)(iVar7 + 0xc) + (int)piVar14 * 4;
              local_c = (uint *)((int)local_c + 1);
              local_114[iVar6] = piVar5;
              bVar17 = local_c < local_14;
              auStack_1f4[iVar6] = piVar1;
              piVar14 = local_28;
            } while (bVar17);
          }
          local_84[(int)piVar14] = (uint)local_2c;
          local_6c[(int)piVar14] = (uint)local_10;
          FUN_00607a1e();
        }
      }
LAB_00608f96:
      local_18 = (int *)((int)local_18 + 1);
      local_28 = piVar10 + 1;
    } while (local_18 < *(int **)(param_1 + 0x134));
  }
LAB_00608fb0:
  if ((*(int *)(param_1 + 0x144) != 0) && (local_18 = (int *)0x0, *(int *)(param_1 + 0x138) != 0)) {
    do {
      piVar10 = local_18;
      iVar6 = (int)local_18 * 4;
      puVar12 = *(uint **)(iVar6 + *(int *)(param_1 + 0x144));
      if (puVar12 != (uint *)0x0) {
        uVar8 = *puVar12 & 0xff000000;
        if ((uVar8 != 0) && (uVar8 != 0x34000000)) {
          if ((((uVar8 == 0x40000000) ||
               (((((uVar8 == 0x44000000 || (uVar8 == 0x48000000)) || (uVar8 == 0x4c000000)) ||
                 ((uVar8 == 0xe3000000 || (uVar8 == 0xe5000000)))) || (uVar8 == 0xe1000000)))) ||
              (((uVar8 == 0xe6000000 || (uVar8 == 0xe7000000)) || (uVar8 == 0xe8000000)))) ||
             (((uVar8 == 0xea000000 || (uVar8 == 0xe9000000)) || (uVar8 == 0xeb000000)))) {
            local_8 = (int *)0x0;
            local_c = (uint *)0x0;
            if (puVar12[3] != 0) {
              do {
                iVar7 = *(int *)(*(int *)(param_1 + 0x14) +
                                *(int *)((int)local_c * 4 +
                                        *(int *)(*(int *)(*(int *)(param_1 + 0x144) + iVar6) + 0x10)
                                        ) * 4);
                local_48 = local_18;
                if ((*(uint *)(param_1 + 0x30) & 0xffff) != 0x104) {
                  local_48 = (int *)((int)local_18 + 2);
                }
                *(int **)(iVar7 + 8) = local_48;
                piVar10 = (int *)FUN_006077c3(*(int *)(param_1 + 0x144),(int)local_18 + 1,
                                              *(undefined4 *)(param_1 + 0x138),
                                              *(undefined4 *)
                                               (*(int *)(*(int *)(iVar6 + *(int *)(param_1 + 0x144))
                                                        + 0x10) + (int)local_c * 4),iVar7,&local_3c)
                ;
                if (local_8 < piVar10) {
                  local_8 = piVar10;
                }
                local_c = (uint *)((int)local_c + 1);
                local_114[*(int *)(iVar7 + 0xc) + (int)local_48 * 4] = piVar10;
              } while (local_c < *(uint **)(*(int *)(*(int *)(param_1 + 0x144) + iVar6) + 0xc));
            }
            local_6c[(int)local_48] = (uint)local_8;
          }
          else if ((uVar8 != 0xe2000000) && (uVar8 != 0xe4000000)) {
            if ((*(uint *)(param_1 + 0x30) & 0xffff) == 0x101) {
              uVar8 = *puVar12 & 0xffffff;
              local_44 = (uint *)(puVar12[1] / uVar8);
              local_40 = (uint *)0x0;
              local_38 = (uint *)0x0;
              if (local_44 != (uint *)0x0) {
                local_20 = (int *)puVar12[2];
                local_1c = (int *)(uVar8 * 4);
                do {
                  local_14 = (uint *)0x0;
                  piVar14 = *(int **)(*(int *)(param_1 + 0x14) + *local_20 * 4);
                  if (local_38 != (uint *)0x0) {
                    local_34 = (int *)puVar12[2];
                    do {
                      piVar5 = *(int **)(*(int *)(param_1 + 0x14) + *local_34 * 4);
                      if (((*piVar14 == *piVar5) && (piVar14[1] == piVar5[1])) &&
                         (piVar14[2] == piVar5[2])) break;
                      local_14 = (uint *)((int)local_14 + 1);
                      local_34 = local_34 + uVar8;
                    } while (local_14 < local_38);
                  }
                  if (((local_38 == local_14) && (*piVar14 == *(int *)(param_1 + 0x60))) &&
                     (1 < (uint)piVar14[2])) {
                    local_40 = (uint *)((int)local_40 + 1);
                  }
                  local_20 = local_20 + uVar8;
                  local_38 = (uint *)((int)local_38 + 1);
                } while (local_38 < local_44);
                if ((uint *)0x2 < local_40) {
                  iVar6 = *(int *)(param_1 + 0x144);
LAB_006098ce:
                  iVar6 = *(int *)(iVar6 + (int)local_18 * 4);
LAB_006098df:
                  uVar18 = 0x6a53b0000011a9;
                  uVar4 = *(undefined4 *)(iVar6 + 0x34);
LAB_006098ec:
                  FUN_005fbec8(param_1,uVar4,uVar18);
                  return (int *)0x80004005;
                }
              }
            }
            local_24 = (uint *)0x0;
            local_20 = (int *)0x0;
            if (puVar12[3] != 0) {
              local_1c = *(int **)(*(int *)(*(int *)(param_1 + 0x144) + (int)local_18 * 4) + 0xc);
              piVar14 = (int *)puVar12[4];
              do {
                if (*(int *)(*(int *)(*(int *)(param_1 + 0x14) + *piVar14 * 4) + 8) == -1) {
                  local_24 = (uint *)0x1;
                }
                else {
                  local_20 = (int *)0x1;
                }
                piVar14 = piVar14 + 1;
                local_1c = (int *)((int)local_1c - 1);
              } while (local_1c != (int *)0x0);
              if (local_20 != (int *)0x0) {
                if (local_24 != (uint *)0x0) {
                  FUN_005fbec8(param_1,0,0x12c9,"internal error: unvectorized register found");
                  return (int *)0x80004005;
                }
                goto LAB_00609794;
              }
            }
            local_14 = (uint *)0x0;
            FUN_0060783e(*(undefined4 *)(param_1 + 0x144),(int)local_18 + 1,
                         *(undefined4 *)(param_1 + 0x138),puVar12[4],puVar12[3],local_194,&local_14)
            ;
            piVar14 = local_18;
            local_1c = (int *)0xffffffff;
            local_20 = (int *)0xffffffff;
            local_44 = (uint *)(*(uint *)(param_1 + 0x30) & 0xffff);
            if (((local_44 == (uint *)0x102) || (local_44 == (uint *)0x103)) &&
               (piVar5 = *(int **)(*(int *)(param_1 + 0x144) + (int)piVar10 * 4),
               *piVar5 == 0x30000004)) {
              piVar5 = (int *)piVar5[2];
              piVar1 = *(int **)(*(int *)(param_1 + 0x14) + *piVar5 * 4);
              if (*piVar1 == *(int *)(param_1 + 0x60)) {
                local_1c = (int *)piVar1[2];
              }
              piVar5 = *(int **)(*(int *)(param_1 + 0x14) + piVar5[4] * 4);
              if (*piVar5 == *(int *)(param_1 + 0x60)) {
                local_20 = (int *)piVar5[2];
              }
            }
            puVar12 = *(uint **)(*(int *)(param_1 + 0x144) + (int)piVar10 * 4);
            uVar8 = *puVar12;
            if ((((uVar8 & 0xffffff) == 1) && ((uVar8 & 0xff000000) != 0x30000000)) &&
               ((local_14 == (uint *)0x1 &&
                (*(int *)(*(int *)(*(int *)(param_1 + 0x14) + local_194[0] * 4) + 0xc) == 3)))) {
              local_28 = (int *)0x0;
              puVar11 = local_114 + 3;
              do {
                if ((piVar10 < (int *)local_6c[(int)local_28]) && ((int *)*puVar11 <= piVar10))
                break;
                local_28 = (int *)((int)local_28 + 1);
                puVar11 = puVar11 + 4;
              } while (local_28 < (int *)0x6);
              if (local_28 == (int *)0x6) goto LAB_006092c9;
            }
            else {
LAB_006092c9:
              local_28 = (int *)0x0;
              do {
                if ((((int *)local_6c[(int)local_28] <= piVar10) && (local_28 != local_1c)) &&
                   (local_28 != local_20)) break;
                local_28 = (int *)((int)local_28 + 1);
              } while (local_28 < (int *)0x6);
              if (local_28 == (int *)0x6) {
                iVar6 = *(int *)(*(int *)(param_1 + 0x144) + (int)piVar10 * 4);
                goto LAB_006098df;
              }
            }
            local_20 = (int *)0x0;
            if ((((uVar8 & 0xff000000) == 0x30000000) && (local_44 < (uint *)0x104)) &&
               (puVar12[3] == 1)) {
              FUN_00607a58(*(undefined4 *)(param_1 + 0x144),(int)local_18 + 1,
                           *(undefined4 *)(param_1 + 0x138),puVar12[4],1,&local_2c,&local_4c,
                           &local_44);
              if (local_4c != (uint *)0x0) {
                local_2c = (int *)0x4;
              }
              bVar17 = local_2c < (int *)0x4;
              if (bVar17) {
                local_2c = (int *)0x3;
              }
              if (!bVar17 && local_2c != (int *)0x4) {
                local_2c = (int *)0x4;
              }
              pvVar3 = _malloc(0x38);
              if (pvVar3 == (void *)0x0) {
                local_c = (uint *)0x0;
              }
              else {
                local_c = (uint *)FUN_005f7709();
              }
              if (local_c == (uint *)0x0) {
                return (int *)0x8007000e;
              }
              puVar11 = *(undefined4 **)((int)piVar14 * 4 + *(int *)(param_1 + 0x144));
              local_8 = (int *)FUN_005f7760(*puVar11,puVar11[1],local_2c,0);
              if ((int)local_8 < 0) {
                return local_8;
              }
              local_8 = (int *)FUN_005f7a42();
              puVar12 = local_c;
              if ((int)local_8 < 0) {
                return local_8;
              }
              puVar11 = *(undefined4 **)
                         (*(int *)(*(int *)(param_1 + 0x144) + (int)local_18 * 4) + 8);
              puVar16 = (undefined4 *)local_c[2];
              for (uVar8 = local_c[1] & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
                *puVar16 = *puVar11;
                puVar11 = puVar11 + 1;
                puVar16 = puVar16 + 1;
              }
              for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                *(undefined1 *)puVar16 = *(undefined1 *)puVar11;
                puVar11 = (undefined4 *)((int)puVar11 + 1);
                puVar16 = (undefined4 *)((int)puVar16 + 1);
              }
              iVar6 = *(int *)(*(int *)(param_1 + 0x144) + (int)local_18 * 4);
              piVar10 = *(int **)(iVar6 + 0xc);
              local_1c = piVar10;
              puVar15 = *(uint **)(iVar6 + 0x10);
              puVar9 = local_84 + 2;
              for (; piVar10 != (int *)0x0; piVar10 = (int *)((int)piVar10 - 1)) {
                *puVar9 = *puVar15;
                puVar15 = puVar15 + 1;
                puVar9 = puVar9 + 1;
              }
              if (iVar6 != 0) {
                FUN_005f7186();
                puVar12 = local_c;
              }
              *(uint **)((int)local_18 * 4 + *(int *)(param_1 + 0x144)) = puVar12;
              piVar10 = (int *)0x0;
              local_8 = (int *)0x0;
              local_34 = (int *)0x0;
              if (local_1c != (int *)0x0) {
                do {
                  local_10 = (int *)0x0;
                  if (*(int *)(param_1 + 8) != 0) {
                    do {
                      iVar6 = *(int *)(*(int *)(param_1 + 0x14) + (int)local_10 * 4);
                      piVar14 = (int *)(local_84 + 2)[(int)local_34];
                      if ((local_10 == piVar14) || (*(int **)(iVar6 + 0x24) == piVar14)) {
                        piVar14 = (int *)0x0;
                        piVar10 = local_18;
                        if (local_2c != (int *)0x0) {
                          do {
                            uVar4 = FUN_005f74cf(*(undefined4 *)(param_1 + 0x60),local_28,piVar14,0)
                            ;
                            *(undefined4 *)(local_c[4] + (int)piVar14 * 4) = uVar4;
                            iVar7 = *(int *)(local_c[4] + (int)piVar14 * 4);
                            if (iVar7 == -1) {
                              return (int *)0x8007000e;
                            }
                            iVar7 = *(int *)(*(int *)(param_1 + 0x14) + iVar7 * 4);
                            *(undefined4 *)(iVar7 + 0x2c) = *(undefined4 *)(iVar6 + 0x2c);
                            *(undefined4 *)(iVar7 + 0x38) = *(undefined4 *)(iVar6 + 0x38);
                            *(undefined4 *)(iVar7 + 0x3c) = *(undefined4 *)(iVar6 + 0x3c);
                            piVar14 = (int *)((int)piVar14 + 1);
                            *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(iVar6 + 0x20);
                            piVar10 = local_18;
                          } while (piVar14 < local_2c);
                        }
                        while( true ) {
                          piVar10 = (int *)((int)piVar10 + 1);
                          local_3c = piVar10;
                          if (*(int **)(param_1 + 0x138) <= piVar10) break;
                          puVar12 = *(uint **)(*(int *)(param_1 + 0x144) + (int)piVar10 * 4);
                          uVar8 = *puVar12 & 0xffffff;
                          local_44 = (uint *)(puVar12[1] / uVar8);
                          local_38 = (uint *)0x0;
                          if (local_44 != (uint *)0x0) {
                            local_40 = (uint *)0x0;
                            do {
                              if (uVar8 < 3) {
                                if (uVar8 == 1) {
                                  puVar15 = (uint *)(puVar12[2] + (int)local_38 * 4);
                                  if ((int *)*puVar15 == local_10) {
                                    if (local_2c == (int *)0x4) {
                                      uVar13 = ((uint *)local_c[4])[3];
                                    }
                                    else {
                                      uVar13 = *(uint *)local_c[4];
                                    }
                                    *puVar15 = uVar13;
                                    if (local_8 < piVar10) {
                                      local_8 = piVar10;
                                    }
                                  }
                                }
                                else {
                                  uVar13 = 0;
                                  if (uVar8 != 0) {
                                    local_24 = local_40;
                                    do {
                                      if ((*(int **)(puVar12[2] + (int)local_24) == local_10) &&
                                         (*(uint *)(puVar12[2] + (int)local_24) =
                                               *(uint *)(local_c[4] + uVar13 * 4), local_8 < piVar10
                                         )) {
                                        local_8 = piVar10;
                                      }
                                      local_24 = local_24 + 1;
                                      uVar13 = uVar13 + 1;
                                    } while (uVar13 < uVar8);
                                  }
                                }
                              }
                              else {
                                uVar13 = 0;
                                if (uVar8 != 0) {
                                  local_24 = local_40;
                                  do {
                                    if ((*(int **)(puVar12[2] + (int)local_24) == local_10) &&
                                       (*(uint *)(puVar12[2] + (int)local_24) =
                                             *(uint *)(local_c[4] + uVar13 * 4), local_8 < piVar10))
                                    {
                                      local_8 = piVar10;
                                    }
                                    local_24 = local_24 + 1;
                                    uVar13 = uVar13 + 1;
                                  } while (uVar13 < uVar8);
                                }
                              }
                              local_38 = (uint *)((int)local_38 + 1);
                              local_40 = local_40 + uVar8;
                            } while (local_38 < local_44);
                          }
                        }
                        local_20 = (int *)0x1;
                        piVar10 = local_8;
                      }
                      local_10 = (int *)((int)local_10 + 1);
                    } while (local_10 < *(int **)(param_1 + 8));
                  }
                  local_34 = (int *)((int)local_34 + 1);
                } while (local_34 < local_1c);
              }
              piVar14 = local_28;
              if ((int *)local_6c[(int)local_28] < piVar10) {
                local_6c[(int)local_28] = (uint)piVar10;
              }
              if ((int *)local_114[(int)piVar14 * 4] < piVar10) {
                local_114[(int)piVar14 * 4] = piVar10;
              }
              if ((int *)local_114[(int)piVar14 * 4 + 1] < piVar10) {
                local_114[(int)piVar14 * 4 + 1] = piVar10;
              }
              if ((int *)local_114[(int)piVar14 * 4 + 2] < piVar10) {
                local_114[(int)piVar14 * 4 + 2] = piVar10;
              }
              if ((int *)local_114[(int)piVar14 * 4 + 3] < piVar10) {
                local_114[(int)piVar14 * 4 + 3] = piVar10;
              }
              if (local_20 != (int *)0x0) goto LAB_00609794;
            }
            piVar10 = local_28;
            local_8 = (int *)0x0;
            if (local_14 == (uint *)0x0) {
              **(undefined4 **)((int)local_18 * 4 + *(int *)(param_1 + 0x144)) = 0;
            }
            else {
              local_c = (uint *)0x0;
              if (local_14 != (uint *)0x0) {
                do {
                  iVar6 = local_194[(int)local_c];
                  iVar7 = *(int *)(*(int *)(param_1 + 0x14) + iVar6 * 4);
                  *(int **)(iVar7 + 8) = piVar10;
                  piVar14 = (int *)FUN_006077c3(*(undefined4 *)(param_1 + 0x144),(int)local_18 + 1,
                                                *(undefined4 *)(param_1 + 0x138),iVar6,iVar7,
                                                &local_3c);
                  if (local_8 < piVar14) {
                    local_8 = piVar14;
                  }
                  local_c = (uint *)((int)local_c + 1);
                  local_114[*(int *)(iVar7 + 0xc) + (int)piVar10 * 4] = piVar14;
                } while (local_c < local_14);
              }
              if ((int *)local_6c[(int)piVar10] < local_8) {
                local_6c[(int)piVar10] = (uint)local_8;
              }
              FUN_00607a1e();
            }
          }
        }
      }
LAB_00609794:
      local_18 = (int *)((int)local_18 + 1);
    } while (local_18 < *(int **)(param_1 + 0x138));
  }
  iVar6 = 0;
  uVar8 = 0;
  do {
    if (local_9c[uVar8] != 0) {
      iVar6 = iVar6 + 1;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 6);
  if ((*(int *)(param_1 + 0x140) != 0) && (iVar6 != 0)) {
    local_8 = (int *)FUN_006081f6(local_6c,local_b4,iVar6);
    if ((int)local_8 < 0) {
      return local_8;
    }
    local_14 = (uint *)0x0;
    local_20 = *(int **)(param_1 + 0x138);
    local_24 = local_6c;
    do {
      iVar6 = 0;
      if (local_9c[(int)local_14] != 0) {
        if (0x1ff < *(uint *)(param_1 + 0x134)) {
          return (int *)0x8007000e;
        }
        if (0x1ff < *(uint *)(param_1 + 0x138)) {
          return (int *)0x8007000e;
        }
        local_1c = (int *)FUN_005f74cf(*(undefined4 *)(param_1 + 0x60),local_14,3,0);
        if (local_1c == (int *)0xffffffff) {
          return (int *)0x8007000e;
        }
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + (int)local_1c * 4) + 0x20) = 0;
        pvVar3 = _malloc(0x38);
        if (pvVar3 != (void *)0x0) {
          iVar6 = FUN_005f7709();
        }
        if (iVar6 == 0) {
          return (int *)0x8007000e;
        }
        local_8 = (int *)FUN_005f7760(0x10000001,1,1,0);
        if ((int)local_8 < 0) {
          return local_8;
        }
        uVar8 = *local_24;
        **(uint **)(iVar6 + 0x10) = uVar8;
        **(uint **)(iVar6 + 8) = (uint)local_1c;
        *(int *)(*(int *)(param_1 + 0x140) + *(int *)(param_1 + 0x134) * 4) = iVar6;
        *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + 1;
        pvVar3 = _malloc(0x38);
        if (pvVar3 == (void *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_005f7709();
        }
        if (iVar6 == 0) {
          return (int *)0x8007000e;
        }
        local_8 = (int *)FUN_005f7760(0x10000001,1,1,0);
        if ((int)local_8 < 0) {
          return local_8;
        }
        **(uint **)(iVar6 + 0x10) = (uint)local_1c;
        **(uint **)(iVar6 + 8) = uVar8;
        *(int *)(*(int *)(param_1 + 0x144) + *(int *)(param_1 + 0x138) * 4) = iVar6;
        *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
        local_24 = local_24 + 1;
      }
      local_14 = (uint *)((int)local_14 + 1);
    } while (local_14 < (uint *)0x6);
    for (piVar10 = *(int **)(param_1 + 0x88); piVar10 < local_20;
        piVar10 = (int *)((int)piVar10 + 1)) {
      if (0x1ff < *(uint *)(param_1 + 0x138)) {
        return (int *)0x8007000e;
      }
      *(undefined4 *)(*(int *)(param_1 + 0x144) + *(uint *)(param_1 + 0x138) * 4) =
           *(undefined4 *)(*(int *)(param_1 + 0x144) + (int)piVar10 * 4);
      *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
      *(undefined4 *)(*(int *)(param_1 + 0x144) + (int)piVar10 * 4) = 0;
    }
  }
  if (((*(int *)(param_1 + 0x140) == 0) || ((*(uint *)(param_1 + 0x30) & 0xffff) != 0x104)) ||
     (local_8 = (int *)FUN_00608700(), -1 < (int)local_8)) {
    local_8 = (int *)0x0;
LAB_006099bc:
    if (local_30 != 0) {
      FUN_005f7186();
    }
  }
  return local_8;
LAB_00608d48:
  local_10 = (int *)((int)local_10 + 1);
  if (*(int **)(param_1 + 0x138) <= local_10) goto LAB_00608ea2;
  goto LAB_00608c07;
}

