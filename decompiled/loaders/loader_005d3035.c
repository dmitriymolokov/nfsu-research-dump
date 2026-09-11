/* Decompiled from Speed.exe @ 005d3035 */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005d3035(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_4 != 0) && (param_3 == 0)) {
    return -0x7789f794;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 4) = 2;
  **(undefined4 **)(param_1 + 0x90) = 3;
  *(uint *)(*(int *)(param_1 + 0x90) + 0x10) = param_4;
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x14) = 4;
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x18) = 4;
  iVar1 = FUN_005d1d40(param_2,1,1);
  if ((iVar1 != 0) &&
     (iVar3 = *(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar1 + 4) * 4),
     (*(uint *)(iVar3 + 0x20) & 2) == 0)) {
    iVar4 = *(int *)(iVar3 + 0x38);
    if (iVar4 == 0) {
      iVar2 = *(int *)(param_1 + 0x2c);
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 8);
    }
    iVar2 = *(int *)(iVar3 + 0x24) + *(int *)(iVar1 + 8) + iVar2;
    if (((*(uint *)(iVar2 + 0x10) != 0) && (*(int *)(iVar1 + 0x18) == -1)) &&
       (param_4 <= *(uint *)(iVar2 + 0x10))) {
      if (*(int *)(iVar2 + 4) == 2) {
        if (iVar4 == 0) {
          iVar4 = *(int *)(param_1 + 0x2c);
        }
        else {
          iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 8);
        }
        iVar3 = FUN_005cc44f(iVar2,*(int *)(iVar3 + 0x28) + *(int *)(iVar1 + 0xc) + iVar4,param_3,
                             param_4);
      }
      else {
        if (*(int *)(iVar2 + 4) != 3) {
          return -0x7789f794;
        }
        if (iVar4 == 0) {
          iVar4 = *(int *)(param_1 + 0x2c);
        }
        else {
          iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 8);
        }
        iVar3 = FUN_005cc632(iVar2,*(int *)(iVar3 + 0x28) + *(int *)(iVar1 + 0xc) + iVar4,param_3,
                             param_4);
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

