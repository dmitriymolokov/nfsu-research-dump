/* Decompiled from Speed.exe @ 005d4e55 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005d4e55(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  float *pfVar7;
  
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 4) = 0;
  **(undefined4 **)(param_1 + 0x90) = 1;
  *(uint *)(*(int *)(param_1 + 0x90) + 0x10) = param_4;
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x14) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x18) = 1;
  if ((((param_4 == 0) || (param_3 != 0)) && (iVar3 = FUN_005d1d40(param_2,1,1), iVar3 != 0)) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar3 + 4) * 4),
     (*(uint *)(iVar1 + 0x20) & 2) == 0)) {
    if (*(int *)(iVar1 + 0x38) == 0) {
      iVar4 = *(int *)(param_1 + 0x2c);
    }
    else {
      iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 8);
    }
    piVar6 = (int *)(*(int *)(iVar1 + 0x24) + *(int *)(iVar3 + 8) + iVar4);
    if (((((piVar6[4] != 0) && (*(int *)(iVar3 + 0x18) == -1)) &&
         ((param_4 <= (uint)piVar6[4] && ((-1 < piVar6[1] && (piVar6[1] < 4)))))) &&
        (piVar6[5] == 1)) && (piVar6[6] == 1)) {
      if (*(int *)(iVar1 + 0x38) == 0) {
        iVar4 = *(int *)(param_1 + 0x2c);
      }
      else {
        iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 8);
      }
      iVar2 = *piVar6;
      pfVar7 = (float *)(*(int *)(iVar1 + 0x28) + *(int *)(iVar3 + 0xc) + iVar4);
      if (iVar2 == 1) {
        if (param_4 != 0) {
          param_3 = param_3 - (int)pfVar7;
          do {
            *pfVar7 = (float)(uint)(*(int *)((int)pfVar7 + param_3) != 0);
            pfVar7 = pfVar7 + 1;
            param_4 = param_4 - 1;
          } while (param_4 != 0);
        }
      }
      else if (iVar2 == 2) {
        if (param_4 != 0) {
          param_3 = param_3 - (int)pfVar7;
          do {
            *pfVar7 = (float)(uint)(*(int *)((int)pfVar7 + param_3) != 0);
            pfVar7 = pfVar7 + 1;
            param_4 = param_4 - 1;
          } while (param_4 != 0);
        }
      }
      else {
        if (iVar2 != 3) {
          return 0x8876086c;
        }
        if (param_4 != 0) {
          param_3 = param_3 - (int)pfVar7;
          do {
            *pfVar7 = (float)(*(int *)(param_3 + (int)pfVar7) != 0);
            pfVar7 = pfVar7 + 1;
            param_4 = param_4 - 1;
          } while (param_4 != 0);
        }
      }
      uVar5 = FUN_005d02d7(iVar3);
      return uVar5;
    }
  }
  return 0x8876086c;
}

