/* Decompiled from Speed.exe @ 006157c4 */
/* Module: EAGL */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_006157c4(int param_1,uint param_2,uint *param_3,int *param_4,int param_5)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  uint local_18;
  int local_10;
  
  uVar7 = *param_3 & 0xffffff;
  if (uVar7 != 0) {
    uVar3 = param_3[1] / uVar7;
    if (uVar3 != 0) {
      local_10 = 0;
      piVar9 = param_4;
      local_18 = uVar3;
      do {
        iVar5 = *(int *)(*(int *)(param_1 + 0x14) + *(int *)(local_10 + param_3[2]) * 4);
        uVar4 = *(uint *)(iVar5 + 0x38);
        uVar8 = *(uint *)(iVar5 + 0x2c);
        if (uVar8 == 0xffffffff) {
LAB_00615952:
          *piVar9 = 0;
        }
        else {
          puVar2 = *(uint **)(*(int *)(param_1 + 0x18) + uVar8 * 4);
          *piVar9 = (int)puVar2;
          iVar5 = local_10;
          for (uVar1 = uVar7; uVar1 != 0; uVar1 = uVar1 - 1) {
            piVar6 = *(int **)(*(int *)(param_1 + 0x14) + *(int *)(iVar5 + param_3[2]) * 4);
            if (*(int *)(param_1 + 0x60) != *piVar6) {
              *piVar9 = 0;
            }
            if (piVar6[8] != 0) {
              *piVar9 = 0;
            }
            if ((uVar8 < (uint)piVar6[0xd]) && ((uint)piVar6[0xd] < uVar4)) {
              *piVar9 = 0;
            }
            if (piVar6[0xe] != piVar6[0xf]) {
              *piVar9 = 0;
            }
            iVar5 = iVar5 + 4;
          }
          if (*piVar9 != 0) {
            uVar4 = uVar7;
            iVar5 = local_10;
            if (param_2 == *puVar2) {
              for (; uVar4 != 0; uVar4 = uVar4 - 1) {
                if (*(uint *)(*(int *)(*(int *)(param_1 + 0x14) + *(int *)(iVar5 + param_3[2]) * 4)
                             + 0x2c) != uVar8) {
                  *piVar9 = 0;
                }
                iVar5 = iVar5 + 4;
              }
              if (*piVar9 == 0) goto LAB_00615955;
              if ((puVar2[3] == (*puVar2 & 0xffffff)) &&
                 (puVar2[1] <= (*puVar2 & 0xffffff) * param_5)) {
                uVar4 = param_3[1];
                uVar8 = 0;
                if (uVar4 != 0) {
                  piVar6 = (int *)param_3[2];
                  do {
                    if (*piVar6 == *(int *)puVar2[4]) break;
                    uVar8 = uVar8 + 1;
                    piVar6 = piVar6 + 1;
                  } while (uVar8 < uVar4);
                }
                if (uVar8 != uVar4) {
                  if (1 < puVar2[3]) {
                    if ((puVar2[3] != uVar7) || (uVar4 < uVar8 + uVar7)) {
                      *piVar9 = 0;
                    }
                    uVar4 = 0;
                    if (uVar7 != 0) {
                      iVar5 = uVar8 << 2;
                      do {
                        if (*(int *)(puVar2[4] + uVar4 * 4) != *(int *)(iVar5 + param_3[2])) {
                          *piVar9 = 0;
                        }
                        uVar4 = uVar4 + 1;
                        iVar5 = iVar5 + 4;
                      } while (uVar4 < uVar7);
                    }
                  }
                  goto LAB_00615955;
                }
              }
            }
            goto LAB_00615952;
          }
        }
LAB_00615955:
        local_10 = local_10 + uVar7 * 4;
        piVar9 = piVar9 + 1;
        local_18 = local_18 - 1;
      } while (local_18 != 0);
    }
    uVar7 = 0;
    if (uVar3 != 0) {
      do {
        if (param_4[uVar7] != 0) {
          return 0;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar3);
    }
  }
  return 1;
}

