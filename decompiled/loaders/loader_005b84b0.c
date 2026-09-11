/* Decompiled from Speed.exe @ 005b84b0 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005b84b0(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 0;
  if (param_4 != 0) {
    if (param_3 == 0) {
      uVar1 = 0x8876086c;
    }
    else {
      iVar2 = FUN_005b7369(param_2,1);
      if (iVar2 != 0) {
        iVar3 = *(int *)(*(int *)(iVar2 + 4) + 0x40) + *(int *)(param_1 + 0x118) +
                *(int *)(iVar2 + 0x18);
        if ((((param_4 <= *(uint *)(iVar3 + 0x10)) && (*(uint *)(iVar3 + 0x10) != 0)) &&
            (*(int *)(iVar2 + 0x10) == -1)) && (*(int *)(iVar3 + 4) == 1)) {
          uVar1 = FUN_005b6bd0(iVar3,*(undefined4 *)(iVar2 + 0x1c),param_3,param_4);
          return uVar1;
        }
      }
      uVar1 = 0x8876086c;
    }
  }
  return uVar1;
}

