/* Decompiled from Speed.exe @ 00564ad0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00564ad0(float param_1,float param_2)

{
  float10 fVar1;
  
  param_1 = param_1 / ABS(param_2);
  fVar1 = (float10)FUN_004387e0(param_1);
  if ((float10)param_1 < fVar1) {
    fVar1 = fVar1 - (float10)_DAT_006cc7bc;
  }
  return ((float10)param_1 - fVar1) * (float10)ABS(param_2);
}

