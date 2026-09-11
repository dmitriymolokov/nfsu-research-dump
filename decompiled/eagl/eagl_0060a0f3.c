/* Decompiled from Speed.exe @ 0060a0f3 */
/* Module: EAGL */
/* Ghidra DecompileAll */


/* WARNING: Type propagation algorithm not settling */

int __thiscall FUN_0060a0f3(int param_1,int *param_2,uint param_3,int param_4,uint param_5)

{
  uint *puVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  void *pvVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  uint auStack_88 [6];
  uint auStack_70 [6];
  uint local_58;
  uint local_4c [4];
  uint auStack_3c [4];
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  int *local_1c;
  uint *local_18;
  int *local_14;
  uint local_10;
  int *local_c;
  uint local_8;
  
  local_28 = 0;
  local_4c[0] = 0;
  local_4c[1] = 0;
  local_4c[2] = 0;
  if (param_3 != 0) {
    local_1c = param_2;
    do {
      puVar1 = (uint *)*local_1c;
      if (puVar1 != (uint *)0x0) {
        uVar3 = *puVar1 & 0xffffff;
        uVar7 = *puVar1 & 0xff000000;
        uVar4 = uVar3;
        if (uVar7 == 0x40000000) {
          uVar4 = 1;
        }
        if ((uVar4 == param_5) && (uVar7 != 0x34000000)) {
          local_10 = 0;
          local_8 = 0;
          if (param_5 != 0) {
            local_c = (int *)(puVar1[2] + uVar3 * 4);
            do {
              piVar5 = (int *)FUN_006099dc(*(undefined4 *)(param_1 + 0x140),
                                           *(undefined4 *)(param_1 + 0x134),local_c,1,0);
              uVar4 = local_8;
              local_14 = piVar5;
              auStack_88[local_8 + 3] = (uint)piVar5;
              if ((piVar5 == (int *)0x0) || (*piVar5 != 0x30000003)) {
                local_10 = 1;
              }
              else {
                FUN_00609ad2(*(undefined4 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x134),
                             local_14,auStack_70 + uVar4 + 0xd,auStack_70 + uVar4,auStack_88 + uVar4
                             ,0,0);
                local_18 = auStack_70 + uVar4 + 6;
                FUN_00609ad2(param_4,4,local_14,local_18,auStack_70 + uVar4 + 3,auStack_3c + 3,1,0);
                if (((auStack_88[uVar4] == 0) || (*local_18 != local_58)) || (auStack_3c[3] == 0)) {
                  local_10 = 1;
                }
              }
              local_8 = local_8 + 1;
              local_c = local_c + 1;
            } while (local_8 < param_5);
            if (local_10 != 0) goto LAB_0060a64c;
          }
          local_8 = 0;
          if (param_5 != 0) {
            do {
              uVar4 = local_8;
              local_18 = *(uint **)(param_1 + 0x88);
              if (local_18 < *(uint **)(param_1 + 0x138)) {
                local_14 = (int *)(*(int *)(param_1 + 0x144) + (int)local_18 * 4);
                do {
                  local_c = (int *)*local_14;
                  if (((local_c != (int *)0x0) &&
                      (puVar1 = (uint *)*local_1c, puVar1 != (uint *)0x0)) && (*local_c != 0)) {
                    local_10 = *puVar1 & 0xffffff;
                    local_20 = puVar1[1];
                    if (*puVar1 == 0xef000003) {
                      local_20 = 6;
                    }
                    if (local_10 < local_20) {
                      uVar3 = local_c[1];
                      do {
                        local_24 = 0;
                        if (uVar3 != 0) {
                          iVar9 = *(int *)(puVar1[2] + local_10 * 4);
                          piVar5 = (int *)local_c[2];
                          piVar8 = local_c;
                          do {
                            if ((*piVar5 == iVar9) ||
                               (piVar8 = local_c,
                               *(int *)(*(int *)(*(int *)(param_1 + 0x14) + *piVar5 * 4) + 0x24) ==
                               iVar9)) {
                              uVar12 = 0x6a56e8000011ac;
                              iVar9 = piVar8[0xd];
                              goto LAB_0060a691;
                            }
                            local_24 = local_24 + 1;
                            uVar3 = local_c[1];
                            piVar5 = piVar5 + 1;
                            piVar8 = local_c;
                          } while (local_24 < uVar3);
                        }
                        local_10 = local_10 + 1;
                      } while (local_10 < local_20);
                    }
                  }
                  local_14 = local_14 + 1;
                  local_18 = (uint *)((int)local_18 + 1);
                } while (local_18 < *(uint **)(param_1 + 0x138));
              }
              if ((local_8 != 0) &&
                 ((auStack_70[local_8 + 0xc] <= local_58 ||
                  (auStack_70[local_8 + 0xd] != auStack_70[local_8 + 0xc] + 1)))) {
                uVar13 = CONCAT44(*(undefined4 *)(param_1 + 0x30),
                                  "unable to match texm* because source inputs are not in appropriate texture coordinates. See ps_1_% assembly reference for more information"
                                 ) & 0xffffffffff;
                uVar11 = 0x11ad;
                uVar10 = 0;
                goto LAB_0060a6f7;
              }
              if (*(int *)(*(int *)(*(int *)(param_1 + 0x14) +
                                   *(int *)(*(int *)(auStack_88[local_8 + 3] + 8) +
                                           auStack_70[local_8] * 4) * 4) + 0x20) != 0) {
                uVar12 = 0x6a5600000011ae;
LAB_0060a6cd:
                iVar9 = 0;
                goto LAB_0060a691;
              }
              iVar9 = *(int *)(*(int *)(*(int *)(param_1 + 0x14) +
                                       *(int *)(*(int *)(auStack_88[local_8 + 3] + 8) +
                                               auStack_70[local_8 + 3] * 4) * 4) + 0x20);
              if ((iVar9 != 0) && (iVar9 != 0x60000)) {
                uVar12 = 0x6a55b0000011af;
                goto LAB_0060a6cd;
              }
              pvVar6 = _malloc(0x38);
              if (pvVar6 == (void *)0x0) {
                uVar3 = 0;
              }
              else {
                uVar3 = FUN_005f7709();
              }
              auStack_70[uVar4 + 9] = uVar3;
              if (uVar3 == 0) {
                iVar9 = -0x7ff8fff2;
                goto LAB_0060a661;
              }
              if (local_8 == param_5 - 1) {
                if (*(int *)*local_1c == -0x10fffffd) {
                  if (param_5 != 3) {
LAB_0060a6d7:
                    iVar9 = 1;
                    goto LAB_0060a661;
                  }
                  uVar12 = 4;
                  uVar10 = 9;
                  iVar9 = -0x15fffffd;
                }
                else if (*(int *)*local_1c == -0x11fffffd) {
                  if (param_5 != 3) goto LAB_0060a6d7;
                  uVar12 = 4;
                  uVar10 = 6;
                  iVar9 = -0x16fffffd;
                }
                else {
                  uVar12 = 4;
                  uVar10 = 6;
                  if (param_5 != 1) {
                    iVar9 = ((param_5 != 3) - 1 & 0x2000000) + 0xe3000003;
                    goto LAB_0060a41b;
                  }
                  iVar9 = -0x14fffffd;
                }
              }
              else {
                uVar12 = 0;
                iVar9 = ((param_5 != 3) - 1 & 0x2000000) + 0xe2000003;
LAB_0060a41b:
                uVar10 = 6;
              }
              iVar9 = FUN_005f7760(iVar9,uVar10,uVar12);
              if (iVar9 < 0) goto LAB_0060a661;
              local_8 = local_8 + 1;
            } while (local_8 < param_5);
          }
          local_8 = 0;
          if (param_5 != 0) {
            do {
              local_14 = (int *)0x0;
              uVar4 = auStack_70[local_8 + 9];
              local_24 = auStack_88[local_8 + 3];
              local_10 = auStack_88[local_8];
              local_20 = auStack_70[local_8 + 3] << 2;
              local_18 = (uint *)(auStack_70[local_8] << 2);
              uVar3 = 0xc;
              do {
                *(undefined4 *)((uVar3 - 0xc) + *(int *)(uVar4 + 8)) =
                     *(undefined4 *)((int)local_18 + *(int *)(local_24 + 8));
                *(undefined4 *)(uVar3 + *(int *)(uVar4 + 8)) =
                     *(undefined4 *)(local_20 + *(int *)(local_24 + 8));
                local_4c[3] = *(undefined4 *)
                               (*(int *)(param_1 + 0x14) +
                               *(int *)((uVar3 - 0xc) + *(int *)(uVar4 + 8)) * 4);
                local_2c = *(int *)(*(int *)(param_1 + 0x14) +
                                   *(int *)(uVar3 + *(int *)(uVar4 + 8)) * 4);
                iVar9 = FUN_005f74cf(*(undefined4 *)(param_1 + 0x58),0,0,0);
                local_c = *(int **)(*(int *)(param_1 + 0x14) + iVar9 * 4);
                *(int *)(uVar3 + *(int *)(uVar4 + 8)) = iVar9;
                FUN_005f7c63();
                local_2c = *(int *)(local_2c + 0x20);
                FUN_005f7c63();
                local_c[3] = (int)local_14;
                local_c[8] = local_2c;
                if ((*(int *)*local_1c == -0x10fffffd) && (local_8 == param_5 - 1)) {
                  *(undefined4 *)(uVar3 + 0xc + *(int *)(uVar4 + 8)) =
                       *(undefined4 *)(uVar3 + 0xc + ((int *)*local_1c)[2]);
                }
                local_14 = (int *)((int)local_14 + 1);
                local_18 = local_18 + 1;
                local_20 = local_20 + 4;
                uVar3 = uVar3 + 4;
              } while (uVar3 < 0x18);
              local_8 = local_8 + 1;
            } while (local_8 < param_5);
          }
          uVar4 = auStack_70[param_5 + 8];
          uVar3 = 0;
          do {
            *(undefined4 *)(uVar3 + *(int *)(uVar4 + 0x10)) =
                 *(undefined4 *)(uVar3 + *(int *)(*local_1c + 0x10));
            uVar3 = uVar3 + 4;
          } while (uVar3 < 0x10);
          uVar4 = 0;
          if (param_5 != 0) {
            do {
              if (*(int *)(param_4 + auStack_70[uVar4 + 0xd] * 4) != 0) goto LAB_0060a69a;
              uVar4 = uVar4 + 1;
            } while (uVar4 < param_5);
          }
          piVar5 = *(int **)(*(int *)(param_1 + 0x14) + **(int **)(*local_1c + 8) * 4);
          iVar9 = *(int *)(*(int *)(param_1 + 0x10) + *piVar5 * 4);
          uVar4 = *(uint *)(iVar9 + 4);
          if ((uVar4 & 0x40) == 0) {
            uVar12 = 0x6a5584000012cc;
            iVar9 = 0;
LAB_0060a691:
            FUN_005fbec8(param_1,iVar9,uVar12);
LAB_0060a69a:
            iVar9 = -0x7fffbffb;
            goto LAB_0060a661;
          }
          if ((uVar4 & 0x420) == 0) {
            piVar5[2] = auStack_70[param_5 + 0xc];
          }
          else if (auStack_70[param_5 + 0xc] != piVar5[2]) {
            if ((*(byte *)(iVar9 + 5) & 4) == 0) {
              pcVar2 = "cannot bind sampler to sampler array, sampler must be bound to %i";
            }
            else {
              pcVar2 = "cannot bind sampler to user specified stage, sampler must be bound to %i";
            }
            uVar13 = CONCAT44(auStack_70[param_5 + 0xc],pcVar2);
            uVar11 = 0x11a3;
            uVar10 = *(undefined4 *)(param_2[local_28] + 0x34);
LAB_0060a6f7:
            FUN_005fbec8(param_1,uVar10,uVar11,uVar13);
            goto LAB_0060a69a;
          }
          local_8 = 0;
          piVar5 = local_1c;
          if (param_5 != 0) {
            do {
              iVar9 = local_8 + 0xd;
              uVar4 = auStack_70[local_8 + 9];
              auStack_70[local_8 + 9] = 0;
              *(uint *)(param_4 + auStack_70[iVar9] * 4) = uVar4;
              if (*piVar5 != 0) {
                FUN_005f7186();
                piVar5 = local_1c;
              }
              *piVar5 = 0;
              local_8 = local_8 + 1;
            } while (local_8 < param_5);
          }
        }
      }
LAB_0060a64c:
      local_28 = local_28 + 1;
      local_1c = local_1c + 1;
    } while (local_28 < param_3);
  }
  iVar9 = 0;
LAB_0060a661:
  uVar4 = 0;
  do {
    if (auStack_70[uVar4 + 9] != 0) {
      FUN_005f7186();
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 3);
  return iVar9;
}

