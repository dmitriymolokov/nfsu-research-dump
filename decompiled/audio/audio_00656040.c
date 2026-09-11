/* Decompiled from Speed.exe @ 00656040 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_00656040(void)

{
  if (DAT_00713ee4 == '\0') {
    return -10;
  }
  return ((*(int *)(DAT_00713f78 + 8) - *(int *)(DAT_00713f78 + 0x10)) * 100) /
         *(int *)(DAT_00713f78 + 8);
}

