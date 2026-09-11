/* Decompiled from Speed.exe @ 005672b0 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * __fastcall FUN_005672b0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = SQRT(*param_2 * *param_2 + param_2[1] * param_2[1]);
  if (fVar2 != DAT_006cc7a4) {
    fVar1 = param_2[1];
    fVar2 = _DAT_006cc7bc / fVar2;
    *param_1 = fVar2 * *param_2;
    param_1[1] = fVar2 * fVar1;
    return param_1;
  }
  *param_1 = 1.0;
  param_1[1] = 0.0;
  return param_1;
}

