/* Decompiled from Speed.exe @ 00443d60 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00443d60(float *param_1,float param_2,float param_3)

{
  float10 fVar1;
  
  fVar1 = (float10)param_2 - (float10)param_3;
  if ((0 < (int)param_1[2]) && (*(char *)((int)param_1[3] + 1) != '\0')) {
    if (fVar1 < (float10)*param_1 * (float10)_DAT_006cc920) {
      return fVar1 + (float10)*param_1;
    }
    if ((float10)*param_1 * (float10)_DAT_006cc7dc < fVar1) {
      fVar1 = fVar1 - (float10)*param_1;
    }
  }
  return fVar1;
}

