/* Decompiled from Speed.exe @ 005d4bc3 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005d4bc3(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  piVar2 = (int *)(param_1 + 0x90);
  *(undefined4 *)(*piVar2 + 4) = 0;
  *(undefined4 *)*piVar2 = 1;
  *(undefined4 *)(*piVar2 + 0x10) = 0;
  *(undefined4 *)(*piVar2 + 0x14) = 1;
  *(undefined4 *)(*piVar2 + 0x18) = 1;
  iVar1 = FUN_005d1d40(param_2,1,1);
  if ((iVar1 != 0) &&
     (iVar6 = *(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar1 + 4) * 4),
     (*(uint *)(iVar6 + 0x20) & 2) == 0)) {
    iVar4 = *(int *)(iVar6 + 0x38);
    if (iVar4 == 0) {
      iVar3 = *(int *)(param_1 + 0x2c);
    }
    else {
      iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 8);
    }
    piVar2 = (int *)(*(int *)(iVar6 + 0x24) + *(int *)(iVar1 + 8) + iVar3);
    if ((piVar2[4] == 0) || (*(int *)(iVar1 + 0x18) != -1)) {
      uVar7 = (uint)(param_3 != 0);
      if ((-1 < piVar2[1]) && (((piVar2[1] < 4 && (piVar2[5] == 1)) && (piVar2[6] == 1)))) {
        iVar3 = *piVar2;
        if (iVar3 == 1) {
          if (iVar4 == 0) {
            iVar3 = *(int *)(param_1 + 0x2c);
          }
          else {
            iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 8);
          }
          iVar6 = *(int *)(iVar6 + 0x28) + *(int *)(iVar1 + 0xc);
          if ((*(int *)(iVar6 + iVar3) == 0) == (uVar7 == 0)) {
            return 0;
          }
          if (iVar4 == 0) {
            iVar4 = *(int *)(param_1 + 0x2c);
          }
          else {
            iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 8);
          }
          *(uint *)(iVar6 + iVar4) = uVar7;
        }
        else if (iVar3 == 2) {
          if (iVar4 == 0) {
            iVar3 = *(int *)(param_1 + 0x2c);
          }
          else {
            iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 8);
          }
          iVar6 = *(int *)(iVar6 + 0x28) + *(int *)(iVar1 + 0xc);
          if (*(uint *)(iVar6 + iVar3) == uVar7) {
            return 0;
          }
          if (iVar4 == 0) {
            iVar4 = *(int *)(param_1 + 0x2c);
          }
          else {
            iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 8);
          }
          *(uint *)(iVar6 + iVar4) = uVar7;
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
          iVar6 = *(int *)(iVar6 + 0x28) + *(int *)(iVar1 + 0xc);
          if ((float)uVar7 == *(float *)(iVar6 + iVar3)) {
            return 0;
          }
          if (iVar4 == 0) {
            iVar4 = *(int *)(param_1 + 0x2c);
          }
          else {
            iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 8);
          }
          *(float *)(iVar6 + iVar4) = (float)uVar7;
        }
        uVar5 = FUN_005d02d7(iVar1);
        return uVar5;
      }
    }
  }
  return 0x8876086c;
}

