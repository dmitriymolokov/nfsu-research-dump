/* Decompiled from Speed.exe @ 004a1460 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004a1460(undefined4 param_1,float param_2,float param_3,float param_4)

{
  float10 fVar1;
  
  if (param_4 <= param_3) {
    fVar1 = ((float10)_DAT_006cc934 - (float10)param_3) + (float10)param_4;
  }
  else {
    fVar1 = (float10)param_4 - (float10)param_3;
  }
  fVar1 = ((float10)param_2 + (float10)_DAT_006cc7bc) * (float10)_DAT_006cc7dc * fVar1 +
          (float10)param_3;
  if ((float10)_DAT_006cc934 < fVar1) {
    fVar1 = fVar1 - (float10)_DAT_006cc934;
  }
  if (fVar1 < (float10)DAT_006cc7a4) {
    fVar1 = (float10)_DAT_006cc934 - fVar1;
  }
  return fVar1;
}

