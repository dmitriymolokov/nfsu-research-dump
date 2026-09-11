/* Decompiled from Speed.exe @ 005d3741 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005d3741(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if (param_3 == 0) {
    return 0x8876086c;
  }
  iVar2 = FUN_005d1d40(param_2,1,0);
  if (iVar2 != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar2 + 4) * 4);
    iVar5 = *(int *)(iVar1 + 0x38);
    if (iVar5 == 0) {
      iVar4 = *(int *)(param_1 + 0x2c);
    }
    else {
      iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 8);
    }
    iVar4 = *(int *)(iVar1 + 0x24) + *(int *)(iVar2 + 8) + iVar4;
    if ((*(int *)(iVar4 + 0x10) == 0) || (*(int *)(iVar2 + 0x18) != -1)) {
      if (*(int *)(iVar4 + 4) == 2) {
        if (iVar5 == 0) {
          iVar5 = *(int *)(param_1 + 0x2c);
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0xc) + 8);
        }
        uVar3 = FUN_005cc081(iVar4,*(int *)(iVar1 + 0x28) + *(int *)(iVar2 + 0xc) + iVar5,param_3,1)
        ;
        return uVar3;
      }
      if (*(int *)(iVar4 + 4) == 3) {
        if (iVar5 == 0) {
          iVar5 = *(int *)(param_1 + 0x2c);
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0xc) + 8);
        }
        uVar3 = FUN_005cc269(iVar4,*(int *)(iVar1 + 0x28) + *(int *)(iVar2 + 0xc) + iVar5,param_3,1)
        ;
        return uVar3;
      }
    }
  }
  return 0x8876086c;
}

