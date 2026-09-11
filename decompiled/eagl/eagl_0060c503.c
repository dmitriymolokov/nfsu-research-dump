/* Decompiled from Speed.exe @ 0060c503 */
/* Module: EAGL */
/* Ghidra DecompileModule */


int __thiscall FUN_0060c503(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  bool bVar7;
  undefined4 uVar8;
  uint local_10;
  uint local_c;
  int local_8;
  
  local_10 = 0;
  if (param_3 != 0) {
    do {
      *(uint *)(param_1 + 0x94) = local_10;
      iVar1 = *(int *)(param_2 + local_10 * 4);
      *(int *)(param_1 + 0x98) = iVar1;
      if (iVar1 != 0) {
        iVar1 = *(int *)(iVar1 + 0x34);
        if ((iVar1 != 0) && (*(int *)(iVar1 + 4) == 0xc)) {
          *(int *)(param_1 + 0x9c) = iVar1 + 0x30;
        }
        puVar2 = *(uint **)(param_1 + 0x98);
        if (*puVar2 != 0) {
          iVar1 = *(int *)(param_1 + 0x14);
          piVar3 = *(int **)(iVar1 + *(int *)puVar2[2] * 4);
          if (piVar3[1] != -1) {
            FUN_005fbec8(param_1,*(undefined4 *)(*(int *)(param_1 + 0x98) + 0x34),0x119f,
                         "relative addressing not allowed for pixel shaders");
            return -0x7fffbffb;
          }
          uVar6 = *puVar2 & 0xff000000;
          if (uVar6 < 0xe2000001) {
            if (uVar6 == 0xe2000000) {
              uVar8 = 0x47;
              goto LAB_0060c7c3;
            }
            if (uVar6 < 0x34000001) {
              if (uVar6 == 0x34000000) {
                local_8 = FUN_0061a7fa();
              }
              else {
                if (uVar6 == 0) {
                  local_8 = 0;
                  goto LAB_0060c7db;
                }
                if (uVar6 == 0x10000000) {
                  local_8 = FUN_0061b0f2();
                }
                else if (uVar6 == 0x11000000) {
                  local_8 = FUN_0061a926();
                }
                else if (uVar6 == 0x24000000) {
                  local_8 = FUN_0061b2e2();
                }
                else if (uVar6 == 0x25000000) {
                  local_8 = FUN_0061b2ea();
                }
                else {
                  if (uVar6 != 0x30000000) goto LAB_0060c817;
                  local_c = *puVar2 & 0xffffff;
                  if ((local_c == 4) && ((*(uint *)(param_1 + 0x30) & 0xffff) == 0x101)) {
LAB_0060c662:
                    FUN_0060a8f2();
                  }
                  else {
                    uVar6 = *(uint *)(param_1 + 0x30) & 0xffff;
                    if (((uVar6 == 0x102) || (uVar6 == 0x103)) && (local_c == 4)) {
                      piVar4 = *(int **)(iVar1 + *(int *)puVar2[4] * 4);
                      piVar5 = *(int **)(iVar1 + ((int *)puVar2[2])[4] * 4);
                      iVar1 = *piVar4;
                      if (iVar1 == *(int *)(param_1 + 0x5c)) {
                        if (((*piVar3 == *(int *)(param_1 + 0x60)) && (piVar3[2] == 0)) ||
                           ((*piVar5 == *(int *)(param_1 + 0x60) && (piVar5[2] == 0)))) {
                          bVar7 = (piVar4[0x14] & 0xffU) == 1;
LAB_0060c660:
                          if (bVar7) goto LAB_0060c662;
                        }
                      }
                      else {
                        if ((*piVar3 == iVar1) && (piVar3[2] == piVar4[2])) goto LAB_0060c662;
                        if (*piVar5 == iVar1) {
                          bVar7 = piVar5[2] == piVar4[2];
                          goto LAB_0060c660;
                        }
                      }
                    }
                    local_8 = FUN_0061b2fa();
                  }
                }
              }
            }
            else if ((((uVar6 == 0x40000000) || (uVar6 == 0x44000000)) || (uVar6 == 0x48000000)) ||
                    (uVar6 == 0x4c000000)) {
              local_8 = FUN_0060ab02();
            }
            else if (uVar6 == 0x50000000) {
              if ((*(uint *)(param_1 + 0x30) & 0xffff) == 0x104) {
                local_8 = FUN_0061b3a4();
              }
              else {
                local_8 = -0x7fffbfff;
              }
            }
            else {
              if (uVar6 != 0xe1000000) goto LAB_0060c817;
              local_8 = FUN_0060ac1e();
            }
          }
          else {
            if (uVar6 < 0xe9000001) {
              if (uVar6 == 0xe9000000) {
                uVar8 = 0x4d;
              }
              else if (uVar6 == 0xe3000000) {
                uVar8 = 0x48;
              }
              else if (uVar6 == 0xe4000000) {
                uVar8 = 0x49;
              }
              else if (uVar6 == 0xe5000000) {
                uVar8 = 0x4a;
              }
              else if (uVar6 == 0xe6000000) {
                uVar8 = 0x52;
              }
              else if (uVar6 == 0xe7000000) {
                uVar8 = 0x45;
              }
              else {
                if (uVar6 != 0xe8000000) goto LAB_0060c817;
                uVar8 = 0x46;
              }
            }
            else if (uVar6 == 0xea000000) {
              uVar8 = 0x4c;
            }
            else {
              if (uVar6 != 0xeb000000) {
                if (uVar6 == 0xf1000000) {
                  local_8 = FUN_0061aa11();
                }
                else {
                  if ((uVar6 != 0xf5000000) && (uVar6 != 0xf6000000)) goto LAB_0060c817;
                  local_8 = FUN_0061abc1();
                }
                goto LAB_0060c7cd;
              }
              uVar8 = 0x53;
            }
LAB_0060c7c3:
            local_8 = FUN_0060a9c6(uVar8);
          }
LAB_0060c7cd:
          if (local_8 == -0x7fffbfff) {
LAB_0060c817:
            FUN_005fbec8(param_1,*(undefined4 *)(*(int *)(param_1 + 0x98) + 0x34),0x11b4,
                         "cannot map expression to pixel shader instruction set");
            return -0x7fffbfff;
          }
          if (local_8 < 0) {
            return local_8;
          }
        }
      }
LAB_0060c7db:
      local_10 = local_10 + 1;
    } while (local_10 < param_3);
  }
  return 0;
}

