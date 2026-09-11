/* Decompiled from Speed.exe @ 00430020 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00430020(float param_1,float param_2,float param_3)

{
  float10 fVar1;
  
  fVar1 = ((float10)param_2 - (float10)param_1) / (float10)param_3;
  if (fVar1 < (float10)_DAT_006cc7dc) {
    fVar1 = fVar1 + (float10)_DAT_006cc7bc;
  }
  if ((float10)_DAT_006cc7dc < fVar1) {
    fVar1 = fVar1 - (float10)_DAT_006cc7bc;
  }
  return fVar1;
}

