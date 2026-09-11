/* Decompiled from Speed.exe @ 005d362c */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005d362c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_3 == 0) {
    return -0x7789f794;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 4) = 2;
  **(undefined4 **)(param_1 + 0x90) = 3;
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x10) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x14) = 4;
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x18) = 4;
  iVar1 = FUN_005d1d40(param_2,1,1);
  if ((iVar1 != 0) &&
     (iVar3 = *(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar1 + 4) * 4),
     (*(uint *)(iVar3 + 0x20) & 2) == 0)) {
    if (*(int *)(iVar3 + 0x38) == 0) {
      iVar2 = *(int *)(param_1 + 0x2c);
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 8);
    }
    iVar2 = *(int *)(iVar3 + 0x24) + *(int *)(iVar1 + 8) + iVar2;
    if ((*(int *)(iVar2 + 0x10) == 0) || (*(int *)(iVar1 + 0x18) != -1)) {
      if (*(int *)(iVar2 + 4) == 2) {
        if (*(int *)(iVar3 + 0x38) == 0) {
          iVar4 = *(int *)(param_1 + 0x2c);
        }
        else {
          iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 8);
        }
        iVar3 = FUN_005cbd17(iVar2,*(int *)(iVar3 + 0x28) + *(int *)(iVar1 + 0xc) + iVar4,param_3,1)
        ;
      }
      else {
        if (*(int *)(iVar2 + 4) != 3) {
          return -0x7789f794;
        }
        if (*(int *)(iVar3 + 0x38) == 0) {
          iVar4 = *(int *)(param_1 + 0x2c);
        }
        else {
          iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 8);
        }
        iVar3 = FUN_005cbec7(iVar2,*(int *)(iVar3 + 0x28) + *(int *)(iVar1 + 0xc) + iVar4,param_3,1)
        ;
      }
      if (-1 < iVar3) {
        iVar1 = FUN_005d02d7(iVar1);
        return iVar1;
      }
      return iVar3;
    }
  }
  return -0x7789f794;
}

