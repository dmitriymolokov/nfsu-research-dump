/* Decompiled from Speed.exe @ 00567370 */
/* Module: Loader */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * __fastcall FUN_00567370(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = SQRT(param_2[2] * param_2[2] + param_2[1] * param_2[1] + *param_2 * *param_2);
  if (fVar3 != DAT_006cc7a4) {
    fVar3 = _DAT_006cc7bc / fVar3;
    fVar2 = param_2[2];
    fVar1 = param_2[1];
    *param_1 = fVar3 * *param_2;
    param_1[1] = fVar1 * fVar3;
    param_1[2] = fVar2 * fVar3;
    return param_1;
  }
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  *param_1 = 1.0;
  return param_1;
}

