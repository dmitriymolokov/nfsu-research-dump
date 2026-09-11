/* Decompiled from Speed.exe @ 005b8444 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005b8444(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (((param_4 == 0) || (param_3 != 0)) && (iVar1 = FUN_005b7369(param_2,1), iVar1 != 0)) {
    iVar3 = *(int *)(*(int *)(iVar1 + 4) + 0x40) + *(int *)(param_1 + 0x118) +
            *(int *)(iVar1 + 0x18);
    if (((param_4 <= *(uint *)(iVar3 + 0x10)) && (*(uint *)(iVar3 + 0x10) != 0)) &&
       ((*(int *)(iVar1 + 0x10) == -1 && (*(int *)(iVar3 + 4) == 1)))) {
      uVar2 = FUN_005b6b61(iVar3,*(undefined4 *)(iVar1 + 0x1c),param_3,param_4);
      return uVar2;
    }
  }
  return 0x8876086c;
}

