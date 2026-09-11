/* Decompiled from Speed.exe @ 00679ecd */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_00679ecd(void)

{
  if (DAT_00717e54 == 0) {
    __lock(6);
    if (DAT_00717e54 == 0) {
      FUN_00679c5c();
      DAT_00717e54 = DAT_00717e54 + 1;
    }
    FUN_0067733f(6);
  }
  return;
}

