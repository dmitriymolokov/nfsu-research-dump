/* Decompiled from Speed.exe @ 005d99a5 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005d99a5(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      iVar1 = FUN_005f762c(*(undefined4 *)(param_1 + uVar2 * 4));
      if ((iVar1 == 0) || (*(int *)(iVar1 + 0x4c) == 0)) {
        return 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_2);
  }
  return 1;
}

