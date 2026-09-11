/* Decompiled from Speed.exe @ 005d2956 */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005d2956(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_3 == 0) {
    iVar2 = -0x7789f794;
  }
  else {
    iVar3 = FUN_005d1d40(param_2,1,0);
    if (((iVar3 == 0) ||
        (iVar2 = *(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar3 + 4) * 4),
        (*(uint *)(iVar2 + 0x20) & 2) != 0)) ||
       ((param_4 != 0xffffffff && (param_4 < *(uint *)(iVar3 + 0x1c))))) {
      iVar2 = -0x7789f794;
    }
    else {
      if (*(int *)(iVar2 + 0x38) == 0) {
        iVar1 = *(int *)(param_1 + 0x2c);
        iVar4 = *(int *)(param_1 + 0x2c);
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 8);
        iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 8);
      }
      iVar2 = FUN_005d02b9(*(int *)(iVar2 + 0x24) + *(int *)(iVar3 + 8) + iVar4,
                           *(int *)(iVar2 + 0x28) + *(int *)(iVar3 + 0xc) + iVar1,param_3,
                           *(undefined4 *)(iVar2 + 0x38),*(int *)(iVar3 + 0x18) != -1);
      if (-1 < iVar2) {
        iVar2 = FUN_005d02d7(iVar3);
      }
    }
  }
  return iVar2;
}

