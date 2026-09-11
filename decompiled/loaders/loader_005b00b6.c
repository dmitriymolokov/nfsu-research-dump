/* Decompiled from Speed.exe @ 005b00b6 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005b00b6(float *param_1,float *param_2,float *param_3,float param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  *param_5 = *param_1;
  param_5[1] = param_1[1];
  param_5[2] = param_1[2];
  *param_5 = *param_5 - *param_2;
  param_5[1] = param_5[1] - param_2[1];
  fVar3 = param_5[2] - param_2[2];
  param_5[2] = fVar3;
  fVar4 = param_5[1] * param_3[1] + *param_3 * *param_5 + fVar3 * param_3[2];
  fVar1 = *param_3;
  fVar2 = param_3[1];
  param_5[2] = fVar3 - fVar4 * param_3[2];
  fVar1 = (*param_5 - fVar4 * fVar1) * param_4;
  *param_5 = fVar1;
  fVar2 = (param_5[1] - fVar4 * fVar2) * param_4;
  param_5[1] = fVar2;
  param_5[2] = param_4 * param_5[2];
  *param_5 = fVar1 + *param_2;
  param_5[1] = fVar2 + param_2[1];
  param_5[2] = param_2[2] + param_5[2];
  return;
}

