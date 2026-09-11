/* Decompiled from Speed.exe @ 005ac3bf */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005ac3bf(float *param_1,float *param_2,float *param_3,float *param_4,float param_5,
                 float param_6)

{
  *param_1 = (*param_4 - *param_2) * param_6 + (*param_3 - *param_2) * param_5 + *param_2;
  param_1[1] = (param_4[1] - param_2[1]) * param_6 + (param_3[1] - param_2[1]) * param_5 +
               param_2[1];
  param_1[2] = (param_4[2] - param_2[2]) * param_6 + (param_3[2] - param_2[2]) * param_5 +
               param_2[2];
  param_1[3] = (param_4[3] - param_2[3]) * param_6 + (param_3[3] - param_2[3]) * param_5 +
               param_2[3];
  return;
}

