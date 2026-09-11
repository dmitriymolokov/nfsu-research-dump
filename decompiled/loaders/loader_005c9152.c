/* spd-match: far pct=7.56 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_005e8fb1();
extern unsigned char *DAT_006dc274;

int FUN_005c9152(int *param_1,undefined4 *param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  uint local_c;
  int local_8;
  
  piVar1 = param_1;
  local_c = 0;
  if ((param_1[0x21] == 3) || ((param_3 & 3) != param_3)) {
    return -0x7789f794;
  }
  param_1[0xc] = -1;
  iVar6 = param_1[0xd] * 0xac + param_1[7];
  param_1[0xf] = param_1[0xf] ^ (param_1[0xf] ^ param_3) & 1;
  uVar3 = param_1[0xf];
  if ((uVar3 & 1) == 0) {
    uVar2 = param_3 >> 1 & 1;
  }
  else {
    uVar2 = 1;
  }
  uVar3 = (uVar2 * 2 ^ uVar3) & 2 ^ uVar3;
  param_1[0xf] = uVar3;
  if ((uVar3 & 2) == 0) {
    if (*(int *)(iVar6 + 0x84) == 0) {
      iVar4 = (**(code **)(*(int *)param_1[2] + 0xf0))((int *)param_1[2]);
      if (iVar4 < 0) {
        return iVar4;
      }
      FUN_005e8fb1(1);
      local_c = 0;
      if (*(int *)(iVar6 + 0x2c) != 0) {
        local_8 = 0;
        do {
          iVar4 = *(int *)(iVar6 + 0x30) + local_8;
          param_3 = 0;
          if (*(int *)(iVar4 + 0x24) != 0) {
            param_1 = (int *)0x0;
            do {
              piVar5 = (int *)(*(int *)(iVar4 + 0x28) + (int)param_1);
              uVar3 = *(uint *)(&DAT_006dc274 + *piVar5 * 0x1c);
              if ((uVar3 & 0xff000000) != 0x6000000) goto switchD_005c925a_caseD_6000008;
              if (0x6000102 < uVar3) {
                if (uVar3 != 0x6000105) {
                  if (uVar3 == 0x6000202) goto switchD_005c925a_caseD_6000002;
                  if (uVar3 != 0x6000205) {
                    if (uVar3 == 0x6000302) goto switchD_005c925a_caseD_6000002;
                    if (uVar3 != 0x6000305) {
                      if (uVar3 == 0x6000402) goto switchD_005c925a_caseD_6000002;
                      if (uVar3 != 0x6000405) goto switchD_005c925a_default;
                    }
                  }
                }
switchD_005c925a_caseD_6000005:
                (**(code **)(*(int *)piVar1[2] + 0x1b4))
                          ((int *)piVar1[2],piVar5[1],piVar5[0x13],piVar5[0x2a]);
                goto switchD_005c925a_caseD_6000008;
              }
              if (uVar3 == 0x6000102) {
switchD_005c925a_caseD_6000002:
                (**(code **)(*(int *)piVar1[2] + 0x178))
                          ((int *)piVar1[2],piVar5[1],piVar5[0x13],piVar5[0x2a]);
              }
              else {
                switch(uVar3) {
                case 0x6000000:
                  (**(code **)(*(int *)piVar1[2] + 0x170))((int *)piVar1[2],0);
                  break;
                case 0x6000001:
                  (**(code **)(*(int *)piVar1[2] + 0x1ac))((int *)piVar1[2],0);
                  break;
                case 0x6000002:
                  goto switchD_005c925a_caseD_6000002;
                case 0x6000003:
                  (**(code **)(*(int *)piVar1[2] + 0x180))
                            ((int *)piVar1[2],piVar5[1],piVar5[0x13],piVar5[0x2a]);
                  break;
                case 0x6000004:
                  (**(code **)(*(int *)piVar1[2] + 0x188))
                            ((int *)piVar1[2],piVar5[1],piVar5[0x13],piVar5[0x2a]);
                  break;
                case 0x6000005:
                  goto switchD_005c925a_caseD_6000005;
                case 0x6000006:
                  (**(code **)(*(int *)piVar1[2] + 0x1bc))
                            ((int *)piVar1[2],piVar5[1],piVar5[0x13],piVar5[0x2a]);
                  break;
                case 0x6000007:
                  (**(code **)(*(int *)piVar1[2] + 0x1c4))
                            ((int *)piVar1[2],piVar5[1],piVar5[0x13],piVar5[0x2a]);
                  break;
                case 0x6000008:
                  break;
                default:
switchD_005c925a_default:
                  FUN_005e8fb1(0);
                  return -0x7fffbffb;
                }
              }
switchD_005c925a_caseD_6000008:
              param_3 = param_3 + 1;
              param_1 = (int *)((int)param_1 + 0xac);
            } while (param_3 < *(uint *)(iVar4 + 0x24));
          }
          local_c = local_c + 1;
          local_8 = local_8 + 0x3c;
        } while (local_c < *(uint *)(iVar6 + 0x2c));
      }
      FUN_005e8fb1(0);
      iVar4 = (**(code **)(*(int *)piVar1[2] + 0xf4))((int *)piVar1[2],iVar6 + 0x84);
      if (iVar4 < 0) {
        return iVar4;
      }
    }
    iVar4 = (**(code **)(**(int **)(iVar6 + 0x84) + 0x10))(*(int **)(iVar6 + 0x84));
    if (iVar4 < 0) {
      return iVar4;
    }
    if (*(int *)(iVar6 + 0x88) == 0) {
      iVar4 = (**(code **)(*(int *)piVar1[2] + 0xf0))((int *)piVar1[2]);
      if (iVar4 < 0) {
        return iVar4;
      }
      FUN_005e8fb1(1);
      if (*(int *)(iVar6 + 0x90) != 0) {
        (**(code **)(*(int *)piVar1[2] + 0x178))
                  ((int *)piVar1[2],0,piVar1[0x2a],*(int *)(iVar6 + 0x90));
      }
      if (*(int *)(iVar6 + 0x94) != 0) {
        (**(code **)(*(int *)piVar1[2] + 0x188))
                  ((int *)piVar1[2],0,piVar1[0x2b],*(int *)(iVar6 + 0x94));
      }
      if (*(int *)(iVar6 + 0x98) != 0) {
        (**(code **)(*(int *)piVar1[2] + 0x180))
                  ((int *)piVar1[2],0,piVar1[0x2c],*(int *)(iVar6 + 0x98));
      }
      if (*(int *)(iVar6 + 0x9c) != 0) {
        (**(code **)(*(int *)piVar1[2] + 0x1b4))
                  ((int *)piVar1[2],0,piVar1[0x2a],*(int *)(iVar6 + 0x9c));
      }
      if (*(int *)(iVar6 + 0xa0) != 0) {
        (**(code **)(*(int *)piVar1[2] + 0x1c4))
                  ((int *)piVar1[2],0,piVar1[0x2b],*(int *)(iVar6 + 0xa0));
      }
      if (*(int *)(iVar6 + 0xa4) != 0) {
        (**(code **)(*(int *)piVar1[2] + 0x1bc))
                  ((int *)piVar1[2],0,piVar1[0x2c],*(int *)(iVar6 + 0xa4));
      }
      FUN_005e8fb1(0);
      iVar4 = (**(code **)(*(int *)piVar1[2] + 0xf4))((int *)piVar1[2],iVar6 + 0x88);
      if (iVar4 < 0) {
        return iVar4;
      }
    }
    local_c = (**(code **)(**(int **)(iVar6 + 0x88) + 0x10))(*(int **)(iVar6 + 0x88));
    if ((int)local_c < 0) {
      return local_c;
    }
  }
  if ((*(byte *)(piVar1 + 0xf) & 1) == 0) {
    if (*(int *)(iVar6 + 0x80) == 0) {
      puVar7 = (undefined4 *)(iVar6 + 0x3c);
      for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      puVar7 = *(undefined4 **)(iVar6 + 0x38);
      for (uVar3 = (uint)(*(int *)(iVar6 + 0x34) * 0x68) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined1 *)puVar7 = 0;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      uVar3 = 0;
      if (*(int *)(iVar6 + 0x34) != 0) {
        iVar4 = 0;
        do {
          *(undefined4 *)(iVar4 + *(int *)(iVar6 + 0x38)) = 3;
          *(undefined4 *)(*(int *)(iVar6 + 0x38) + 0x48 + iVar4) = 0x3f800000;
          uVar3 = uVar3 + 1;
          iVar4 = iVar4 + 0x68;
        } while (uVar3 < *(uint *)(iVar6 + 0x34));
      }
      iVar4 = (**(code **)(*(int *)piVar1[2] + 0xf0))((int *)piVar1[2]);
      if (iVar4 < 0) {
        return iVar4;
      }
      piVar1[0x21] = 1;
      FUN_005e8fb1(1);
      uVar3 = 0;
      if (*(int *)(iVar6 + 0x2c) != 0) {
        do {
          (**(code **)(*piVar1 + 0x104))(piVar1,uVar3);
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(iVar6 + 0x2c));
      }
      FUN_005e8fb1(0);
      piVar1[0x21] = 0;
      iVar4 = (**(code **)(*(int *)piVar1[2] + 0xf4))((int *)piVar1[2],iVar6 + 0x80);
      if (iVar4 < 0) {
        return iVar4;
      }
    }
    iVar4 = (**(code **)(**(int **)(iVar6 + 0x80) + 0x10))(*(int **)(iVar6 + 0x80));
    if (iVar4 < 0) {
      return iVar4;
    }
    if (*(int *)(iVar6 + 0x8c) == 0) {
      iVar4 = (**(code **)(*(int *)piVar1[2] + 0xf0))((int *)piVar1[2]);
      if (iVar4 < 0) {
        return iVar4;
      }
      FUN_005e8fb1(1);
      param_1 = (int *)0x0;
      if (*(int *)(iVar6 + 0xa8) != 0) {
        do {
          (**(code **)(*(int *)piVar1[2] + 0x104))((int *)piVar1[2],param_1,0);
          uVar3 = 0x1c;
          do {
            piVar5 = (int *)piVar1[2];
            if (*(int *)(uVar3 + 0x6db9c0) == 0) {
              (**(code **)(*piVar5 + 0x114))
                        (piVar5,param_1,*(uint *)(uVar3 + 0x6db9bc) & 0xffffff,0);
            }
            else {
              (**(code **)(*piVar5 + 0x114))
                        (piVar5,param_1,*(uint *)(uVar3 + 0x6db9bc) & 0xffffff,
                         *(undefined4 *)(*(int *)(uVar3 + 0x6db9c0) + 4));
            }
            uVar3 = uVar3 + 0x1c;
          } while (uVar3 < 0x16c);
          param_1 = (int *)((int)param_1 + 1);
        } while (param_1 < *(uint *)(iVar6 + 0xa8));
      }
      FUN_005e8fb1(0);
      iVar4 = (**(code **)(*(int *)piVar1[2] + 0xf4))((int *)piVar1[2],iVar6 + 0x8c);
      if (iVar4 < 0) {
        return iVar4;
      }
    }
    local_c = (**(code **)(**(int **)(iVar6 + 0x8c) + 0x10))(*(int **)(iVar6 + 0x8c));
    if ((int)local_c < 0) {
      return local_c;
    }
  }
  puVar7 = (undefined4 *)(iVar6 + 0x3c);
  for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  puVar7 = *(undefined4 **)(iVar6 + 0x38);
  for (uVar3 = (uint)(*(int *)(iVar6 + 0x34) * 0x68) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar7 = 0;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  iVar4 = 0;
  uVar3 = 0;
  if (*(int *)(iVar6 + 0x34) != 0) {
    do {
      *(undefined4 *)(iVar4 + *(int *)(iVar6 + 0x38)) = 3;
      *(undefined4 *)(*(int *)(iVar6 + 0x38) + 0x48 + iVar4) = 0x3f800000;
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x68;
    } while (uVar3 < *(uint *)(iVar6 + 0x34));
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(iVar6 + 0x2c);
  }
  piVar1[0x21] = 3;
  return local_c;
}
