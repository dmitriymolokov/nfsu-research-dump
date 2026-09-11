/* Decompiled from Speed.exe @ 005d3d47 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005d3d47(uint param_1,uint param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  iVar1 = param_1;
  if (param_3 == (float *)0x0) {
    return 0x8876086c;
  }
  iVar5 = FUN_005d1d40(param_2,1,0);
  if (iVar5 != 0) {
    iVar10 = *(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar5 + 4) * 4);
    if (*(int *)(iVar10 + 0x38) == 0) {
      iVar7 = *(int *)(param_1 + 0x2c);
    }
    else {
      iVar7 = *(int *)(*(int *)(param_1 + 0xc) + 8);
    }
    piVar6 = (int *)(*(int *)(iVar10 + 0x24) + *(int *)(iVar5 + 8) + iVar7);
    if ((((piVar6[4] == 0) || (*(int *)(iVar5 + 0x18) != -1)) && (-1 < piVar6[1])) &&
       (piVar6[1] < 2)) {
      param_2 = piVar6[5];
      iVar10 = *piVar6;
      if (piVar6[6] == 1) {
        if (4 < param_2) {
          param_2 = 4;
        }
        *param_3 = 0.0;
        param_3[1] = 0.0;
        param_3[2] = 0.0;
        param_3[3] = 0.0;
        if (iVar10 == 1) {
          param_1 = 0;
          if (param_2 == 0) {
            return 0;
          }
          do {
            iVar10 = *(int *)(*(int *)(iVar1 + 0x8c) + *(int *)(iVar5 + 4) * 4);
            if (*(int *)(iVar10 + 0x38) == 0) {
              iVar7 = *(int *)(iVar1 + 0x2c);
            }
            else {
              iVar7 = *(int *)(*(int *)(iVar1 + 0xc) + 8);
            }
            param_3[param_1] =
                 (float)(*(int *)(*(int *)(iVar10 + 0x28) + *(int *)(iVar5 + 0xc) + param_1 * 4 +
                                 iVar7) != 0);
            param_1 = param_1 + 1;
          } while (param_1 < param_2);
          return 0;
        }
        if (iVar10 == 2) {
          if (param_2 == 1) {
            iVar1 = *(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar5 + 4) * 4);
            if (*(int *)(iVar1 + 0x38) == 0) {
              iVar10 = *(int *)(param_1 + 0x2c);
            }
            else {
              iVar10 = *(int *)(*(int *)(param_1 + 0xc) + 8);
            }
            uVar9 = *(uint *)(*(int *)(iVar1 + 0x28) + *(int *)(iVar5 + 0xc) + iVar10);
            fVar2 = (float)(uVar9 >> 8 & 0xff) * _DAT_006cc970;
            fVar3 = (float)(uVar9 & 0xff) * _DAT_006cc970;
            fVar4 = (float)(uVar9 >> 0x18) * _DAT_006cc970;
            *param_3 = (float)(uVar9 >> 0x10 & 0xff) * _DAT_006cc970;
            param_3[1] = fVar2;
            param_3[2] = fVar3;
            param_3[3] = fVar4;
            return 0;
          }
          uVar9 = 0;
          if (param_2 == 0) {
            return 0;
          }
          do {
            iVar1 = *(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar5 + 4) * 4);
            if (*(int *)(iVar1 + 0x38) == 0) {
              iVar10 = *(int *)(param_1 + 0x2c);
            }
            else {
              iVar10 = *(int *)(*(int *)(param_1 + 0xc) + 8);
            }
            uVar8 = uVar9 + 1;
            param_3[uVar9] =
                 (float)*(int *)(*(int *)(iVar1 + 0x28) + *(int *)(iVar5 + 0xc) + uVar9 * 4 + iVar10
                                );
            uVar9 = uVar8;
          } while (uVar8 < param_2);
          return 0;
        }
        if (iVar10 == 3) {
          uVar9 = 0;
          if (param_2 == 0) {
            return 0;
          }
          do {
            iVar1 = *(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar5 + 4) * 4);
            if (*(int *)(iVar1 + 0x38) == 0) {
              iVar10 = *(int *)(param_1 + 0x2c);
            }
            else {
              iVar10 = *(int *)(*(int *)(param_1 + 0xc) + 8);
            }
            uVar8 = uVar9 + 1;
            param_3[uVar9] =
                 *(float *)(*(int *)(iVar1 + 0x28) + *(int *)(iVar5 + 0xc) + uVar9 * 4 + iVar10);
            uVar9 = uVar8;
          } while (uVar8 < param_2);
          return 0;
        }
      }
    }
  }
  return 0x8876086c;
}

