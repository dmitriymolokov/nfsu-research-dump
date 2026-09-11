/* Decompiled from Speed.exe @ 005d7902 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005d7902(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  
  iVar1 = FUN_005d7830(param_1);
  uVar3 = 0;
  iVar2 = extraout_ECX;
  if (iVar1 != 0) {
    for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc)) {
      if (*(int *)(iVar2 + 4) != 1) {
        iVar2 = FUN_005d7866(iVar2,param_1);
        if (iVar2 == 0) {
          return 0;
        }
        break;
      }
      if (param_1 == 0) {
        return 0;
      }
      if (*(int *)(param_1 + 4) != 1) {
        return 0;
      }
      iVar1 = FUN_005d7866(*(undefined4 *)(iVar2 + 8),*(undefined4 *)(param_1 + 8));
      if (iVar1 == 0) {
        return 0;
      }
      param_1 = *(int *)(param_1 + 0xc);
    }
    uVar3 = 1;
  }
  return uVar3;
}

