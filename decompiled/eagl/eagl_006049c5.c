/* Decompiled from Speed.exe @ 006049c5 */
/* Module: EAGL */
/* Ghidra DecompileModule */


undefined4 __fastcall FUN_006049c5(int param_1)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int local_20;
  int *local_1c;
  int *local_18;
  uint local_10;
  uint local_c;
  uint local_8;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x144) + -4 + *(int *)(param_1 + 0x138) * 4);
  if (*piVar1 == 0x10000004) {
    local_10 = 0;
    piVar6 = (int *)piVar1[4];
    do {
      if (**(int **)(*(int *)(param_1 + 0x14) + *piVar6 * 4) != *(int *)(param_1 + 0x5c)) {
        return 0;
      }
      local_10 = local_10 + 1;
      piVar6 = piVar6 + 1;
    } while (local_10 < 4);
    uVar5 = *(int *)(param_1 + 0x138) - 1;
    bVar4 = true;
    local_8 = 0;
    do {
      uVar9 = 0;
      bVar3 = false;
      if (uVar5 != 0) {
        local_18 = *(int **)(param_1 + 0x144);
        do {
          piVar6 = (int *)*local_18;
          if ((piVar6 != (int *)0x0) && (*piVar6 != 0)) {
            iVar7 = piVar6[3];
            if (iVar7 != 0) {
              piVar6 = (int *)piVar6[4];
              do {
                if (*piVar6 == *(int *)(piVar1[2] + local_8 * 4)) {
                  bVar3 = true;
                }
                piVar6 = piVar6 + 1;
                iVar7 = iVar7 + -1;
              } while (iVar7 != 0);
            }
            if (bVar3) break;
          }
          local_18 = local_18 + 1;
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar5);
      }
      if ((*(uint *)(param_1 + 0x30) & 0xffff) == 0x104) {
        if ((uVar9 < *(uint *)(param_1 + 0x88)) && (uVar9 != 0)) {
LAB_00604aa6:
          bVar4 = false;
        }
      }
      else if (uVar9 < *(uint *)(param_1 + 0x88)) goto LAB_00604aa6;
      if (!bVar3) {
        return 0;
      }
      uVar9 = uVar9 + 1;
      if (uVar9 < uVar5) {
        local_1c = (int *)(*(int *)(param_1 + 0x144) + uVar9 * 4);
        local_20 = uVar5 - uVar9;
        do {
          piVar6 = (int *)*local_1c;
          if ((piVar6 != (int *)0x0) && (*piVar6 != 0)) {
            local_18 = (int *)piVar6[3];
            if (local_18 != (int *)0x0) {
              piVar8 = (int *)piVar6[4];
              do {
                piVar2 = *(int **)(*(int *)(param_1 + 0x14) + *piVar8 * 4);
                if (((*piVar2 == *(int *)(param_1 + 0x60)) && (piVar2[3] == local_8)) &&
                   (piVar2[2] == 0)) {
                  bVar4 = false;
                }
                piVar8 = piVar8 + 1;
                local_18 = (int *)((int)local_18 + -1);
              } while (local_18 != (int *)0x0);
            }
            iVar7 = piVar6[1];
            if (iVar7 != 0) {
              piVar6 = (int *)piVar6[2];
              do {
                piVar8 = *(int **)(*(int *)(param_1 + 0x14) + *piVar6 * 4);
                if (((*piVar8 == *(int *)(param_1 + 0x60)) && (piVar8[3] == local_8)) &&
                   (piVar8[2] == 0)) {
                  bVar4 = false;
                }
                piVar6 = piVar6 + 1;
                iVar7 = iVar7 + -1;
              } while (iVar7 != 0);
            }
          }
          local_1c = local_1c + 1;
          local_20 = local_20 + -1;
        } while (local_20 != 0);
      }
      local_8 = local_8 + 1;
    } while (local_8 < 4);
    if (bVar4) {
      uVar9 = 0;
      do {
        local_c = 0;
        if (uVar5 != 0) {
          do {
            piVar6 = *(int **)(*(int *)(param_1 + 0x144) + local_c * 4);
            if (((piVar6 != (int *)0x0) && (*piVar6 != 0)) && (local_10 = 0, piVar6[3] != 0)) {
              do {
                piVar8 = (int *)(piVar6[4] + local_10 * 4);
                if (*piVar8 == *(int *)(uVar9 + piVar1[2])) {
                  *piVar8 = *(int *)(uVar9 + piVar1[4]);
                }
                local_10 = local_10 + 1;
              } while (local_10 < (uint)piVar6[3]);
            }
            local_c = local_c + 1;
            uVar5 = *(int *)(param_1 + 0x138) - 1;
          } while (local_c < uVar5);
        }
        uVar9 = uVar9 + 4;
      } while (uVar9 < 0x10);
      *piVar1 = 0;
    }
  }
  return 0;
}

