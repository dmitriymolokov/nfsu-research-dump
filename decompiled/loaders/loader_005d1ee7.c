/* Decompiled from Speed.exe @ 005d1ee7 */
/* Module: Loader */
/* Ghidra DecompileAll */


uint FUN_005d1ee7(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    if (param_3 < *(uint *)(param_1 + 0x10)) {
      uVar1 = ~(param_3 * 0x44 + *(int *)(param_1 + 0x14));
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    iVar2 = FUN_005d1d40(param_2,1,0);
    if (iVar2 != 0) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar2 + 4) * 4);
      if (*(int *)(iVar4 + 0x38) == 0) {
        iVar3 = *(int *)(param_1 + 0x2c);
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 8);
      }
      iVar3 = *(int *)(iVar4 + 0x24) + *(int *)(iVar2 + 8) + iVar3;
      if (((*(int *)(iVar3 + 4) == 5) &&
          (((*(int *)(iVar2 + 0x18) != -1 || (*(int *)(iVar3 + 0x10) == 0)) &&
           (param_3 < *(uint *)(iVar3 + 0x14))))) &&
         ((*(int *)(iVar2 + 0x10) != 0 ||
          (iVar4 = FUN_005cb568(iVar2,*(uint *)(iVar3 + 0x14)), -1 < iVar4)))) {
        return ~(param_3 * 0x20 + *(int *)(iVar2 + 0x10));
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}

