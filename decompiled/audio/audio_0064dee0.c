/* Decompiled from Speed.exe @ 0064dee0 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_0064dee0(void)

{
  DAT_00713c64 = DAT_00713c64 + 1;
  if (DAT_00713c64 < 0) {
    DAT_00713c64 = 1;
    return 1;
  }
  return DAT_00713c64;
}

