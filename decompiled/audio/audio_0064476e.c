/* Decompiled from Speed.exe @ 0064476e */
/* Module: Audio */
/* Ghidra DecompileVAs */


float * FUN_0064476e(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = param_1[2];
  fVar2 = *param_2;
  fVar3 = *param_1;
  fVar4 = param_2[1];
  fVar5 = *param_1;
  fVar6 = param_2[2];
  fVar7 = param_1[1];
  fVar8 = *param_2;
  *param_3 = param_1[1] * param_2[2] - param_1[2] * param_2[1];
  param_3[1] = fVar1 * fVar2 - fVar5 * fVar6;
  param_3[2] = fVar3 * fVar4 - fVar7 * fVar8;
  return param_1 + 3;
}

