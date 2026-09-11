/* Decompiled from Speed.exe @ 00567310 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * __fastcall FUN_00567310(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  
  param_3 = SQRT(*param_2 * *param_2 + param_2[1] * param_2[1]) / param_3;
  if (param_3 != DAT_006cc7a4) {
    fVar1 = param_2[1];
    param_3 = _DAT_006cc7bc / param_3;
    *param_1 = param_3 * *param_2;
    param_1[1] = param_3 * fVar1;
    return param_1;
  }
  *param_1 = 1.0;
  param_1[1] = 0.0;
  return param_1;
}

