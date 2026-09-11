/* Decompiled from Speed.exe @ 0064471d */
/* Module: Audio */
/* Ghidra DecompileVAs */


float * FUN_0064471d(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_1[1];
  fVar2 = param_2[1];
  fVar3 = param_1[2];
  fVar4 = param_2[2];
  *param_3 = *param_1 - *param_2;
  param_3[1] = fVar1 - fVar2;
  param_3[2] = fVar3 - fVar4;
  return param_1 + 3;
}

