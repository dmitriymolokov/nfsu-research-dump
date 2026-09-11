/* Decompiled from Speed.exe @ 00658440 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_00658440(void)

{
  int iVar1;
  
  iVar1 = 0;
  if (DAT_00713d98 != 0) {
    do {
      if (*(int *)(DAT_00713f4c + iVar1 * 8) == 0) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(uint)DAT_00713d98);
  }
  return -9;
}

