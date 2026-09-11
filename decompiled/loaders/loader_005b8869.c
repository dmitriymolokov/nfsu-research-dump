/* Decompiled from Speed.exe @ 005b8869 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005b8869(int param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 == (uint *)0x0) {
    return 0x8876086c;
  }
  iVar1 = FUN_005b7369(param_2,1);
  if (((iVar1 != 0) &&
      ((((iVar2 = *(int *)(*(int *)(iVar1 + 4) + 0x40) + *(int *)(param_1 + 0x118) +
                  *(int *)(iVar1 + 0x18), *(int *)(iVar2 + 0x10) == 0 ||
         (*(int *)(iVar1 + 0x10) != -1)) && (-1 < *(int *)(iVar2 + 4))) &&
       ((*(int *)(iVar2 + 4) < 4 && (*(int *)(iVar2 + 0x14) == 1)))))) &&
     (*(int *)(iVar2 + 0x18) == 1)) {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x1c) + 8);
    iVar2 = *(int *)(iVar1 + 0x10);
    if (((iVar2 == 0) || (iVar2 == 1)) || (iVar2 == 2)) {
      *param_3 = (uint)(*(int *)(iVar1 + 0x18) != 0);
      return 0;
    }
    if (iVar2 == 3) {
      iVar1 = __ftol();
      *param_3 = (uint)(iVar1 != 0);
      return 0;
    }
  }
  return 0x8876086c;
}

