/* Decompiled from Speed.exe @ 0060bafa */
/* Module: EAGL */
/* Ghidra DecompileAll */


uint __fastcall FUN_0060bafa(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint *puVar10;
  uint uVar11;
  bool bVar12;
  int local_e4 [32];
  int local_64 [9];
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  uint *local_20;
  int local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  uVar8 = 0;
  local_1c = 0;
  local_24 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      piVar9 = *(int **)(*(int *)(param_1 + 0x14) + uVar8 * 4);
      piVar9[7] = 0;
      if (*piVar9 == *(int *)(param_1 + 0x60)) {
        piVar9[2] = -1;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 8));
  }
  for (uVar8 = *(uint *)(param_1 + 0x88); uVar8 < *(uint *)(param_1 + 0x138); uVar8 = uVar8 + 1) {
    piVar9 = *(int **)(*(int *)(param_1 + 0x144) + uVar8 * 4);
    if (((piVar9 != (int *)0x0) && (*piVar9 != 0)) && (uVar11 = 0, piVar9[3] != 0)) {
      do {
        iVar5 = uVar11 * 4;
        uVar11 = uVar11 + 1;
        *(uint *)(*(int *)(*(int *)(param_1 + 0x14) + *(int *)(piVar9[4] + iVar5) * 4) + 0x2c) =
             uVar8;
      } while (uVar11 < (uint)piVar9[3]);
    }
  }
  local_34 = *(uint *)(param_1 + 0x138);
  local_30 = *(uint *)(param_1 + 0x88);
  bVar12 = local_30 < local_34;
LAB_0060c1cb:
  if (!bVar12) {
    local_c = 0;
LAB_0060c1d7:
    if (local_1c != 0) {
LAB_0060c1de:
      FUN_005f7186();
    }
LAB_0060c1e5:
    if (local_24 != 0) {
      FUN_005f7186();
    }
    return local_c;
  }
  local_20 = *(uint **)(*(int *)(param_1 + 0x144) + local_30 * 4);
  if ((local_20 == (uint *)0x0) || (*local_20 == 0)) {
LAB_0060c1c4:
    local_30 = local_30 + 1;
    bVar12 = local_30 < local_34;
    goto LAB_0060c1cb;
  }
  pvVar4 = _malloc(0x38);
  if (pvVar4 == (void *)0x0) {
    local_24 = 0;
  }
  else {
    local_24 = FUN_005f7709();
  }
  if (local_24 != 0) {
    local_c = FUN_005f799b();
    puVar10 = local_20;
    if ((int)local_c < 0) goto LAB_0060c1e5;
    local_10 = *(uint *)(param_1 + 0x138);
    if (local_10 < 0x200) {
      if (((*local_20 & 0xff000000) == 0x30000000) && (local_20[3] == 1)) {
        local_2c = *(int *)(*(int *)(param_1 + 0x14) + *(int *)local_20[4] * 4);
        if (*(int *)(local_2c + 0xc) != 3) goto LAB_0060bd47;
        iVar5 = *(int *)(param_1 + 0x144);
        FUN_00607a58(iVar5,local_30,local_34,(int *)local_20[4],1,&local_28,&local_3c,local_64 + 8);
        if (local_64[8] != 0) {
          iVar5 = FUN_005f74cf(*(undefined4 *)(param_1 + 0x60),0,3,0);
          if (iVar5 == -1) goto LAB_0060c251;
          puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x14) + iVar5 * 4);
          FUN_005f7c63();
          uVar2 = *(undefined4 *)(param_1 + 0x60);
          puVar1[8] = 0;
          *puVar1 = uVar2;
          puVar1[3] = 3;
          pvVar4 = _malloc(0x38);
          if (pvVar4 == (void *)0x0) {
            iVar6 = 0;
          }
          else {
            iVar6 = FUN_005f7709();
          }
          if (iVar6 != 0) {
            local_c = FUN_005f7760(0x10000001,1,1,0);
            if (((int)local_c < 0) || (local_c = FUN_005f7a42(), (int)local_c < 0))
            goto LAB_0060c1de;
            **(undefined4 **)(iVar6 + 0x10) = *(undefined4 *)local_20[4];
            **(int **)(iVar6 + 8) = iVar5;
            **(int **)(local_24 + 0x10) = iVar5;
            *(int *)(*(int *)(param_1 + 0x144) + *(int *)(param_1 + 0x138) * 4) = local_24;
            *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
            local_2c = local_24;
            if (*(uint *)(param_1 + 0x138) < 0x200) {
              *(int *)(*(int *)(param_1 + 0x144) + *(uint *)(param_1 + 0x138) * 4) = iVar6;
              puVar10 = local_20;
              goto LAB_0060bd56;
            }
          }
          goto LAB_0060c251;
        }
        *(int *)(iVar5 + local_10 * 4) = local_24;
        local_2c = local_24;
      }
      else {
LAB_0060bd47:
        *(int *)(*(int *)(param_1 + 0x144) + local_10 * 4) = local_24;
        local_2c = local_24;
      }
LAB_0060bd56:
      *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
      local_24 = 0;
      iVar5 = FUN_00604f3b();
      if (iVar5 != 0) {
        local_28 = 0;
        local_64[4] = 0xffffffff;
        local_64[5] = 0xffffffff;
        local_64[6] = 0xffffffff;
        local_64[7] = 0xffffffff;
        if (puVar10[3] != 0) {
          local_10 = puVar10[3];
          iVar5 = *(int *)(param_1 + 0x14);
          piVar9 = (int *)puVar10[4];
          do {
            iVar6 = *(int *)(iVar5 + *piVar9 * 4);
            if (*(int *)(iVar6 + 0x1c) != 0) {
              local_64[*(int *)(iVar6 + 0xc) + 4] = *piVar9;
              local_28 = 1;
            }
            piVar9 = piVar9 + 1;
            local_10 = local_10 - 1;
          } while (local_10 != 0);
        }
        uVar8 = 0;
        local_18 = 0;
        FUN_0060783e(*(undefined4 *)(param_1 + 0x144),local_30,local_34,puVar10[4],puVar10[3],
                     local_e4,&local_18);
        if (local_28 == 0) {
          if (local_18 != 0) {
            do {
              iVar5 = *(int *)(*(int *)(param_1 + 0x14) + local_e4[uVar8] * 4);
              if (*(int *)(iVar5 + 0x24) != -1) {
                iVar5 = *(int *)(*(int *)(param_1 + 0x14) + *(int *)(iVar5 + 0x24) * 4);
              }
              uVar8 = uVar8 + 1;
              *(undefined4 *)(iVar5 + 0x1c) = 1;
            } while (uVar8 < local_18);
          }
        }
        else {
          local_8 = 0;
          local_64[0] = -1;
          local_64[1] = 0xffffffff;
          local_64[2] = 0xffffffff;
          local_64[3] = 0xffffffff;
          if (local_18 != 0) {
            do {
              iVar5 = *(int *)(*(int *)(param_1 + 0x14) + local_e4[local_8] * 4);
              iVar6 = *(int *)(iVar5 + 0x24);
              iVar7 = local_e4[local_8];
              if (iVar6 != -1) {
                iVar5 = *(int *)(*(int *)(param_1 + 0x14) + iVar6 * 4);
                iVar7 = iVar6;
              }
              uVar8 = *(uint *)(iVar5 + 0x2c);
              if ((((local_34 <= uVar8) || (uVar8 < local_30)) && (uVar8 != 0xffffffff)) &&
                 (iVar6 = FUN_00604f3b(), iVar6 != 0)) {
                iVar6 = local_64[*(int *)(iVar5 + 0xc)];
                if (iVar6 == -1) {
                  local_64[*(int *)(iVar5 + 0xc)] = iVar7;
                }
                else if (iVar6 != iVar7) goto LAB_0060c202;
              }
              local_8 = local_8 + 1;
            } while (local_8 < local_18);
          }
          uVar11 = 0;
          uVar8 = 0;
          local_18 = 0;
          do {
            if (*(int *)((int)local_64 + uVar8) == -1) {
LAB_0060be79:
              if (*(int *)((int)local_64 + uVar8 + 0x10) != -1) goto LAB_0060be7f;
            }
            else {
              if (*(int *)((int)local_64 + uVar8 + 0x10) != -1) {
LAB_0060c202:
                FUN_005fbec8(param_1,local_20[0xd],0x11b9,
                             "unable to emmulate write masks for ps_1_%i shader model",
                             *(uint *)(param_1 + 0x30) & 0xff);
                return 0x80004005;
              }
              if (*(int *)((int)local_64 + uVar8) == -1) goto LAB_0060be79;
LAB_0060be7f:
              uVar11 = uVar11 + 1;
              local_18 = uVar11;
            }
            uVar8 = uVar8 + 4;
          } while (uVar8 < 0x10);
          pvVar4 = _malloc(0x38);
          if (pvVar4 == (void *)0x0) {
            local_1c = 0;
          }
          else {
            local_1c = FUN_005f7709();
          }
          if (local_1c == 0) {
            return 0x8007000e;
          }
          local_c = FUN_005f7760(uVar11 & 0xffffff | 0xf1000000,uVar11 * 3,uVar11,0);
          if ((int)local_c < 0) goto LAB_0060c1d7;
          local_c = FUN_005f7a42();
          if ((int)local_c < 0) goto LAB_0060c1d7;
          local_14 = 0;
          local_10 = 0;
          local_8 = local_18 << 2;
          do {
            iVar5 = *(int *)((int)local_64 + local_10 + 0x10);
            if (iVar5 == -1) {
              local_3c = *(int *)((int)local_64 + local_10);
              if (local_3c != -1) {
                iVar7 = local_14 * 4;
                *(int *)(iVar7 + *(int *)(local_1c + 0x10)) = local_3c;
                iVar5 = *(int *)(*(int *)(param_1 + 0x14) + local_3c * 4);
                iVar6 = FUN_005f74cf(*(undefined4 *)(param_1 + 0x60),0,*(undefined4 *)(iVar5 + 0xc),
                                     0);
                if (iVar6 == -1) goto LAB_0060c251;
                *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + iVar6 * 4) + 0x20) =
                     *(undefined4 *)(iVar5 + 0x20);
                iVar3 = *(int *)(iVar5 + 0x2c);
                *(undefined4 *)(iVar5 + 0x20) = 0;
                if ((iVar3 != -1) && (iVar3 != *(int *)(param_1 + 0x138))) {
                  iVar3 = *(int *)(*(int *)(param_1 + 0x144) + iVar3 * 4);
                  local_28 = 0;
                  if (*(int *)(iVar3 + 0xc) != 0) {
                    do {
                      piVar9 = (int *)(*(int *)(iVar3 + 0x10) + local_28 * 4);
                      if (*piVar9 == local_3c) {
                        *piVar9 = iVar6;
                      }
                      local_28 = local_28 + 1;
                    } while (local_28 < *(uint *)(iVar3 + 0xc));
                  }
                  *(undefined4 *)(iVar5 + 0x2c) = *(undefined4 *)(param_1 + 0x138);
                  *(undefined4 *)(iVar7 + *(int *)(local_1c + 8)) = *(undefined4 *)(param_1 + 0x1fc)
                  ;
                  local_38 = iVar6;
                  *(int *)(*(int *)(local_1c + 8) + (local_14 + local_18 * 2) * 4) = iVar6;
                  goto LAB_0060c05f;
                }
                FUN_005fbec8(param_1,local_20[0xd],0x12ca,"internal error: illformed write field");
                goto LAB_0060c1d7;
              }
            }
            else {
              *(int *)(*(int *)(local_1c + 0x10) + local_14 * 4) = iVar5;
              iVar6 = *(int *)(*(int *)(param_1 + 0x14) + iVar5 * 4);
              iVar7 = FUN_005f74cf(*(undefined4 *)(param_1 + 0x60),0,*(undefined4 *)(iVar6 + 0xc),0)
              ;
              if (iVar7 == -1) goto LAB_0060c251;
              *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + iVar7 * 4) + 0x20) =
                   *(undefined4 *)(iVar6 + 0x20);
              *(undefined4 *)(iVar6 + 0x20) = 0;
              *(undefined4 *)(iVar6 + 0x2c) = *(undefined4 *)(param_1 + 0x138);
              uVar8 = 0;
              if (*(int *)(local_2c + 0xc) != 0) {
                do {
                  piVar9 = (int *)(*(int *)(local_2c + 0x10) + uVar8 * 4);
                  if (*piVar9 == iVar5) {
                    *piVar9 = iVar7;
                  }
                  uVar8 = uVar8 + 1;
                } while (uVar8 < *(uint *)(local_2c + 0xc));
              }
              *(undefined4 *)(*(int *)(local_1c + 8) + local_14 * 4) =
                   *(undefined4 *)(param_1 + 0x200);
              local_40 = iVar7;
              *(int *)(local_8 + *(int *)(local_1c + 8)) = iVar7;
LAB_0060c05f:
              local_14 = local_14 + 1;
              local_8 = local_8 + 4;
            }
            iVar5 = local_1c;
            local_10 = local_10 + 4;
          } while (local_10 < 0x10);
          local_14 = 0;
          local_c = 0;
          local_8 = local_18 << 2;
          do {
            iVar6 = *(int *)((int)local_64 + local_c + 0x10);
            if (iVar6 == -1) {
              if (*(int *)((int)local_64 + local_c) != -1) {
                iVar6 = *(int *)(*(int *)(param_1 + 0x14) + *(int *)((int)local_64 + local_c) * 4);
                iVar7 = FUN_005f74cf(*(undefined4 *)(param_1 + 0x60),0,*(undefined4 *)(iVar6 + 0xc),
                                     0);
                if (iVar7 != -1) {
                  iVar3 = *(int *)(*(int *)(param_1 + 0x14) + iVar7 * 4);
                  *(int *)(iVar3 + 0x24) = local_40;
                  *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(iVar6 + 0x20);
                  *(int *)(local_8 + *(int *)(iVar5 + 8)) = iVar7;
                  goto LAB_0060c128;
                }
                goto LAB_0060c251;
              }
            }
            else {
              iVar6 = *(int *)(*(int *)(param_1 + 0x14) + iVar6 * 4);
              iVar7 = FUN_005f74cf(*(undefined4 *)(param_1 + 0x60),0,*(undefined4 *)(iVar6 + 0xc),0)
              ;
              if (iVar7 == -1) goto LAB_0060c251;
              iVar3 = *(int *)(*(int *)(param_1 + 0x14) + iVar7 * 4);
              *(int *)(iVar3 + 0x24) = local_38;
              *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(iVar6 + 0x20);
              *(int *)(*(int *)(iVar5 + 8) + (local_14 + local_18 * 2) * 4) = iVar7;
LAB_0060c128:
              local_14 = local_14 + 1;
              local_8 = local_8 + 4;
            }
            local_c = local_c + 4;
          } while (local_c < 0x10);
          if (0x1ff < *(uint *)(param_1 + 0x138)) goto LAB_0060c251;
          *(int *)(*(int *)(param_1 + 0x144) + *(uint *)(param_1 + 0x138) * 4) = iVar5;
          *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
          local_1c = 0;
          puVar10 = local_20;
        }
      }
      local_10 = 0;
      if (*(int *)(local_2c + 0xc) != 0) {
        do {
          iVar5 = local_10 * 4;
          local_10 = local_10 + 1;
          *(int *)(*(int *)(*(int *)(param_1 + 0x14) +
                           *(int *)(*(int *)(local_2c + 0x10) + iVar5) * 4) + 0x2c) =
               *(int *)(param_1 + 0x138) + -1;
        } while (local_10 < *(uint *)(local_2c + 0xc));
      }
      *puVar10 = 0;
      goto LAB_0060c1c4;
    }
  }
LAB_0060c251:
  local_c = 0x8007000e;
  goto LAB_0060c1d7;
}

