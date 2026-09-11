/* Decompiled from Speed.exe @ 004a0ea0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_004a0ea0(int param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)param_2 / (float10)*(float *)(param_1 + 8);
  if ((float10)DAT_006cc7a4 <= fVar1) {
    if ((float10)_DAT_006cc7bc < fVar1) {
      fVar1 = (float10)_DAT_006cc7bc;
    }
  }
  else {
    fVar1 = (float10)DAT_006cc7a4;
  }
  fVar2 = (float10)_DAT_006cc950;
  fVar3 = (float10)_DAT_006cc80c;
  if (*(float *)(param_1 + 8) < _DAT_006cc94c) {
    if (_DAT_006cc940 <= *(float *)(param_1 + 8)) {
      fVar2 = (float10)_DAT_006cc93c;
      fVar3 = (float10)_DAT_006cc938;
    }
  }
  else {
    fVar2 = (float10)_DAT_006cc948;
    fVar3 = (float10)_DAT_006cc944;
  }
  fVar2 = fVar2 + (fVar3 - fVar2) * fVar1;
  if ((float10)_DAT_006cc934 < fVar2) {
    fVar2 = fVar2 - (float10)_DAT_006cc934;
  }
  if (fVar2 < (float10)DAT_006cc7a4) {
    fVar2 = (float10)_DAT_006cc934 - fVar2;
  }
  return fVar2;
}

