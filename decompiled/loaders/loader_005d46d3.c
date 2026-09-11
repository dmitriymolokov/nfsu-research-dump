/* Decompiled from Speed.exe @ 005d46d3 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005d46d3(int param_1,undefined4 param_2,uint param_3)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  float local_18 [4];
  undefined4 local_8;
  
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 4) = 0;
  **(undefined4 **)(param_1 + 0x90) = 2;
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x10) = 0;
  local_8 = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x14) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x18) = 1;
  iVar3 = FUN_005d1d40(param_2,1,1);
  if ((iVar3 != 0) &&
     (iVar7 = *(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar3 + 4) * 4),
     (*(uint *)(iVar7 + 0x20) & 2) == 0)) {
    if (*(int *)(iVar7 + 0x38) == 0) {
      iVar6 = *(int *)(param_1 + 0x2c);
    }
    else {
      iVar6 = *(int *)(*(int *)(param_1 + 0xc) + 8);
    }
    piVar4 = (int *)(*(int *)(iVar7 + 0x24) + *(int *)(iVar3 + 8) + iVar6);
    if ((((piVar4[4] == 0) || (*(int *)(iVar3 + 0x18) != -1)) && (-1 < piVar4[1])) &&
       (piVar4[1] < 4)) {
      uVar2 = piVar4[5];
      iVar6 = *piVar4;
      if (((iVar6 == 3) && (piVar4[6] == 1)) && ((uVar2 == 3 || (uVar2 == 4)))) {
        local_18[0] = (float)(param_3 >> 0x10 & 0xff) * _DAT_006cc970;
        uVar9 = 0;
        local_18[1] = (float)(param_3 >> 8 & 0xff) * _DAT_006cc970;
        local_18[2] = (float)(param_3 & 0xff) * _DAT_006cc970;
        local_18[3] = (float)(param_3 >> 0x18) * _DAT_006cc970;
        if (uVar2 != 0) {
          do {
            iVar7 = *(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar3 + 4) * 4);
            if (*(int *)(iVar7 + 0x38) == 0) {
              iVar6 = *(int *)(param_1 + 0x2c);
            }
            else {
              iVar6 = *(int *)(*(int *)(param_1 + 0xc) + 8);
            }
            iVar5 = uVar9 * 4;
            pfVar1 = local_18 + uVar9;
            uVar9 = uVar9 + 1;
            *(float *)(*(int *)(iVar7 + 0x28) + iVar5 + iVar6 + *(int *)(iVar3 + 0xc)) = *pfVar1;
          } while (uVar9 < uVar2);
        }
      }
      else {
        if (uVar2 != 1) {
          return 0x8876086c;
        }
        if (piVar4[6] != 1) {
          return 0x8876086c;
        }
        if (iVar6 == 1) {
          if (*(int *)(iVar7 + 0x38) == 0) {
            iVar6 = *(int *)(param_1 + 0x2c);
          }
          else {
            iVar6 = *(int *)(*(int *)(param_1 + 0xc) + 8);
          }
          iVar5 = *(int *)(iVar7 + 0x28) + *(int *)(iVar3 + 0xc);
          if ((*(int *)(iVar5 + iVar6) == 0) == (param_3 == 0)) {
            return local_8;
          }
          if (*(int *)(iVar7 + 0x38) == 0) {
            iVar7 = *(int *)(param_1 + 0x2c);
          }
          else {
            iVar7 = *(int *)(*(int *)(param_1 + 0xc) + 8);
          }
          *(uint *)(iVar5 + iVar7) = (uint)(param_3 != 0);
        }
        else if (iVar6 == 2) {
          if (*(int *)(iVar7 + 0x38) == 0) {
            iVar6 = *(int *)(param_1 + 0x2c);
          }
          else {
            iVar6 = *(int *)(*(int *)(param_1 + 0xc) + 8);
          }
          iVar5 = *(int *)(iVar7 + 0x28) + *(int *)(iVar3 + 0xc);
          if (*(uint *)(iVar5 + iVar6) == param_3) {
            return local_8;
          }
          if (*(int *)(iVar7 + 0x38) == 0) {
            iVar7 = *(int *)(param_1 + 0x2c);
          }
          else {
            iVar7 = *(int *)(*(int *)(param_1 + 0xc) + 8);
          }
          *(uint *)(iVar5 + iVar7) = param_3;
        }
        else {
          if (iVar6 != 3) {
            return 0x8876086c;
          }
          if (*(int *)(iVar7 + 0x38) == 0) {
            iVar6 = *(int *)(param_1 + 0x2c);
          }
          else {
            iVar6 = *(int *)(*(int *)(param_1 + 0xc) + 8);
          }
          iVar5 = *(int *)(iVar7 + 0x28) + *(int *)(iVar3 + 0xc);
          if ((float)(int)param_3 == *(float *)(iVar5 + iVar6)) {
            return local_8;
          }
          if (*(int *)(iVar7 + 0x38) == 0) {
            iVar7 = *(int *)(param_1 + 0x2c);
          }
          else {
            iVar7 = *(int *)(*(int *)(param_1 + 0xc) + 8);
          }
          *(float *)(iVar5 + iVar7) = (float)(int)param_3;
        }
      }
      uVar8 = FUN_005d02d7(iVar3);
      return uVar8;
    }
  }
  return 0x8876086c;
}

