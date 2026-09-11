/* Decompiled from Speed.exe @ 00654010 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_00654010(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((DAT_00714014 != 0) && (DAT_00714010 != 0)) {
    do {
      if (*(int *)(DAT_00714014 + iVar1 * 8) == param_1) {
        return DAT_00714014 + iVar1 * 8;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(uint)DAT_00714010);
  }
  return 0;
}

