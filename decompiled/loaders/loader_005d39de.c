/* Decompiled from Speed.exe @ 005d39de */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005d39de(uint param_1,undefined4 param_2,float *param_3)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar15;
  float10 extraout_ST0_01;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  uint local_8;
  
  iVar8 = param_1;
  if (param_3 == (float *)0x0) {
    return 0x8876086c;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 4) = 1;
  **(undefined4 **)(param_1 + 0x90) = 3;
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x10) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x14) = 4;
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x18) = 1;
  iVar5 = FUN_005d1d40(param_2,1,1);
  if ((iVar5 != 0) &&
     (iVar2 = *(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar5 + 4) * 4),
     (*(uint *)(iVar2 + 0x20) & 2) == 0)) {
    if (*(int *)(iVar2 + 0x38) == 0) {
      iVar9 = *(int *)(param_1 + 0x2c);
    }
    else {
      iVar9 = *(int *)(*(int *)(param_1 + 0xc) + 8);
    }
    piVar6 = (int *)(*(int *)(iVar2 + 0x24) + *(int *)(iVar5 + 8) + iVar9);
    if ((((piVar6[4] == 0) || (*(int *)(iVar5 + 0x18) != -1)) && (-1 < piVar6[1])) &&
       (piVar6[1] < 2)) {
      local_8 = piVar6[5];
      iVar9 = *piVar6;
      if (piVar6[6] == 1) {
        if (4 < local_8) {
          local_8 = 4;
        }
        if (iVar9 == 1) {
          param_1 = 0;
          if (local_8 != 0) {
            do {
              iVar2 = *(int *)(*(int *)(iVar8 + 0x8c) + *(int *)(iVar5 + 4) * 4);
              if (*(int *)(iVar2 + 0x38) == 0) {
                iVar9 = *(int *)(iVar8 + 0x2c);
              }
              else {
                iVar9 = *(int *)(*(int *)(iVar8 + 0xc) + 8);
              }
              iVar11 = param_1 * 4;
              iVar7 = __ftol();
              param_1 = param_1 + 1;
              *(uint *)(*(int *)(iVar2 + 0x28) + iVar11 + iVar9 + *(int *)(iVar5 + 0xc)) =
                   (uint)(iVar7 != 0);
            } while (param_1 < local_8);
          }
        }
        else if (iVar9 == 2) {
          if (local_8 == 1) {
            if (*(int *)(iVar2 + 0x38) == 0) {
              iVar8 = *(int *)(param_1 + 0x2c);
            }
            else {
              iVar8 = *(int *)(*(int *)(param_1 + 0xc) + 8);
            }
            fVar12 = (float10)param_3[3];
            fVar13 = (float10)_DAT_006cc7bc;
            fVar3 = param_3[1];
            fVar4 = param_3[2];
            fVar14 = (float10)DAT_006cc7a4;
            if ((float10)*param_3 < fVar13) {
              fVar15 = (float10)*param_3;
              if (fVar15 < fVar14 == (fVar15 == fVar14)) {
                fVar12 = fVar13;
                param_3 = (float *)__ftol();
                fVar14 = extraout_ST0;
                fVar13 = extraout_ST1;
              }
              else {
                param_3 = (float *)0x0;
              }
            }
            else {
              param_3 = (float *)0xff;
            }
            if ((float10)fVar3 < fVar13) {
              fVar15 = (float10)fVar3;
              if (fVar15 < fVar14 == (fVar15 == fVar14)) {
                fVar12 = fVar13;
                param_1 = __ftol();
                fVar14 = extraout_ST0_00;
                fVar13 = extraout_ST1_00;
              }
              else {
                param_1 = 0;
              }
            }
            else {
              param_1 = 0xff;
            }
            if ((float10)fVar4 < fVar13) {
              fVar15 = (float10)fVar4;
              if (fVar15 < fVar14 == (fVar15 == fVar14)) {
                local_8 = __ftol();
                fVar13 = extraout_ST0_01;
                fVar12 = extraout_ST1_01;
              }
              else {
                local_8 = 0;
              }
            }
            else {
              local_8 = 0xff;
            }
            if (fVar12 < fVar13) {
              if (fVar12 < (float10)DAT_006cc7a4 == (fVar12 == (float10)DAT_006cc7a4)) {
                iVar9 = __ftol();
              }
              else {
                iVar9 = 0;
              }
            }
            else {
              iVar9 = 0xff;
            }
            *(uint *)(*(int *)(iVar2 + 0x28) + *(int *)(iVar5 + 0xc) + iVar8) =
                 ((iVar9 << 8 | (uint)param_3) << 8 | param_1) << 8 | local_8;
          }
          else {
            param_1 = 0;
            if (local_8 != 0) {
              do {
                iVar2 = *(int *)(*(int *)(iVar8 + 0x8c) + *(int *)(iVar5 + 4) * 4);
                if (*(int *)(iVar2 + 0x38) == 0) {
                  iVar9 = *(int *)(iVar8 + 0x2c);
                }
                else {
                  iVar9 = *(int *)(*(int *)(iVar8 + 0xc) + 8);
                }
                iVar7 = param_1 * 4;
                uVar10 = __ftol();
                param_1 = param_1 + 1;
                *(undefined4 *)(*(int *)(iVar2 + 0x28) + iVar7 + iVar9 + *(int *)(iVar5 + 0xc)) =
                     uVar10;
              } while (param_1 < local_8);
            }
          }
        }
        else {
          if (iVar9 != 3) {
            return 0x8876086c;
          }
          param_1 = 0;
          if (local_8 != 0) {
            do {
              iVar2 = *(int *)(*(int *)(iVar8 + 0x8c) + *(int *)(iVar5 + 4) * 4);
              if (*(int *)(iVar2 + 0x38) == 0) {
                iVar9 = *(int *)(iVar8 + 0x2c);
              }
              else {
                iVar9 = *(int *)(*(int *)(iVar8 + 0xc) + 8);
              }
              iVar7 = param_1 * 4;
              pfVar1 = param_3 + param_1;
              param_1 = param_1 + 1;
              *(float *)(*(int *)(iVar2 + 0x28) + iVar7 + iVar9 + *(int *)(iVar5 + 0xc)) = *pfVar1;
            } while (param_1 < local_8);
          }
        }
        uVar10 = FUN_005d02d7(iVar5);
        return uVar10;
      }
    }
  }
  return 0x8876086c;
}

