/* Decompiled from Speed.exe @ 005d5666 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005d5666(int param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 4) = 0;
  **(undefined4 **)(param_1 + 0x90) = 3;
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x10) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x14) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x18) = 1;
  iVar1 = FUN_005d1d40(param_2,1,1);
  if ((iVar1 != 0) &&
     (iVar7 = *(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar1 + 4) * 4),
     (*(uint *)(iVar7 + 0x20) & 2) == 0)) {
    iVar4 = *(int *)(iVar7 + 0x38);
    if (iVar4 == 0) {
      iVar3 = *(int *)(param_1 + 0x2c);
    }
    else {
      iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 8);
    }
    piVar2 = (int *)(*(int *)(iVar7 + 0x24) + *(int *)(iVar1 + 8) + iVar3);
    if ((((piVar2[4] == 0) || (*(int *)(iVar1 + 0x18) != -1)) && (-1 < piVar2[1])) &&
       (((piVar2[1] < 4 && (piVar2[5] == 1)) && (piVar2[6] == 1)))) {
      iVar3 = *piVar2;
      if (iVar3 == 1) {
        if (iVar4 == 0) {
          iVar3 = *(int *)(param_1 + 0x2c);
        }
        else {
          iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 8);
        }
        iVar7 = *(int *)(iVar7 + 0x28) + *(int *)(iVar1 + 0xc);
        iVar5 = __ftol();
        if ((*(int *)(iVar7 + iVar3) == 0) == (iVar5 == 0)) {
          return 0;
        }
        if (iVar4 == 0) {
          iVar4 = *(int *)(param_1 + 0x2c);
        }
        else {
          iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 8);
        }
        *(uint *)(iVar7 + iVar4) = (uint)(iVar5 != 0);
      }
      else if (iVar3 == 2) {
        if (iVar4 == 0) {
          iVar3 = *(int *)(param_1 + 0x2c);
        }
        else {
          iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 8);
        }
        iVar7 = *(int *)(iVar7 + 0x28) + *(int *)(iVar1 + 0xc);
        iVar5 = __ftol();
        if (*(int *)(iVar7 + iVar3) == iVar5) {
          return 0;
        }
        if (iVar4 == 0) {
          iVar4 = *(int *)(param_1 + 0x2c);
        }
        else {
          iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 8);
        }
        *(int *)(iVar7 + iVar4) = iVar5;
      }
      else {
        if (iVar3 != 3) {
          return 0x8876086c;
        }
        if (iVar4 == 0) {
          iVar3 = *(int *)(param_1 + 0x2c);
        }
        else {
          iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 8);
        }
        iVar7 = *(int *)(iVar7 + 0x28) + *(int *)(iVar1 + 0xc);
        if (*(float *)(iVar7 + iVar3) == param_3) {
          return 0;
        }
        if (iVar4 == 0) {
          iVar4 = *(int *)(param_1 + 0x2c);
        }
        else {
          iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 8);
        }
        *(float *)(iVar7 + iVar4) = param_3;
      }
      uVar6 = FUN_005d02d7(iVar1);
      return uVar6;
    }
  }
  return 0x8876086c;
}

