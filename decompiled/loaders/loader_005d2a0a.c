/* Decompiled from Speed.exe @ 005d2a0a */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005d2a0a(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if (param_3 == 0) {
    uVar3 = 0x8876086c;
  }
  else {
    iVar4 = FUN_005d1d40(param_2,1,0);
    if ((iVar4 == 0) || ((param_4 != 0xffffffff && (param_4 < *(uint *)(iVar4 + 0x1c))))) {
      uVar3 = 0x8876086c;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar4 + 4) * 4);
      if (*(int *)(iVar1 + 0x38) == 0) {
        iVar2 = *(int *)(param_1 + 0x2c);
        iVar5 = *(int *)(param_1 + 0x2c);
      }
      else {
        iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 8);
        iVar5 = *(int *)(*(int *)(param_1 + 0xc) + 8);
      }
      uVar3 = FUN_005cf2e6(*(int *)(iVar1 + 0x24) + *(int *)(iVar4 + 8) + iVar5,
                           *(int *)(iVar1 + 0x28) + *(int *)(iVar4 + 0xc) + iVar2,param_3,
                           *(int *)(iVar1 + 0x38),*(int *)(iVar4 + 0x18) != -1);
    }
  }
  return uVar3;
}

