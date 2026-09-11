/* Decompiled from Speed.exe @ 005b75d1 */
/* Module: Loader */
/* Ghidra DecompileAll */


uint FUN_005b75d1(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    if (param_3 < *(uint *)(param_1 + 0x100)) {
      uVar1 = *(uint *)(param_1 + 0x120);
      while (param_3 = param_3 + 1, param_3 < *(uint *)(param_1 + 0x100)) {
        uVar1 = *(uint *)(uVar1 + 0x34);
      }
      uVar1 = ~uVar1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    iVar2 = FUN_005b7369(param_2,1);
    if (((((iVar2 == 0) ||
          (iVar3 = *(int *)(*(int *)(iVar2 + 4) + 0x40) + *(int *)(param_1 + 0x118) +
                   *(int *)(iVar2 + 0x18), *(int *)(iVar3 + 4) != 5)) ||
         ((*(int *)(iVar2 + 0x10) == -1 && (*(int *)(iVar3 + 0x10) != 0)))) ||
        (*(uint *)(iVar3 + 0x14) <= param_3)) ||
       ((*(int *)(iVar2 + 8) == 0 &&
        (iVar3 = FUN_005b618f(iVar2,*(uint *)(iVar3 + 0x14)), iVar3 < 0)))) {
      uVar1 = 0;
    }
    else {
      uVar1 = ~(param_3 * 0x20 + *(int *)(iVar2 + 8));
    }
  }
  return uVar1;
}

