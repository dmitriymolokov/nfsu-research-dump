/* Decompiled from Speed.exe @ 004fc070 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004fc070(float *param_1)

{
  float fVar1;
  
  fVar1 = _DAT_006cc7bc /
          SQRT(param_1[3] * param_1[3] +
               param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1);
  if (_DAT_006ccb7c < fVar1) {
    *param_1 = fVar1 * *param_1;
    param_1[1] = fVar1 * param_1[1];
    param_1[2] = fVar1 * param_1[2];
    param_1[3] = fVar1 * param_1[3];
    return;
  }
  param_1[2] = 0.0;
  param_1[1] = 0.0;
  *param_1 = 0.0;
  param_1[3] = 1.0;
  return;
}

