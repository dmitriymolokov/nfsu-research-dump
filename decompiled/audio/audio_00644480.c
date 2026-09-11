/* Decompiled from Speed.exe @ 00644480 */
/* Module: Audio */
/* Ghidra DecompileVAs */


void fn_00644480(float *param_1,float *param_2,float *param_3)

{
  *param_3 = *param_2 * param_1[3] + *param_1;
  param_3[1] = param_2[1] * param_1[3] + param_1[1];
  param_3[2] = param_1[3] * param_2[2] + param_1[2];
  param_3[3] = param_2[3] * param_1[3];
  param_3[4] = *param_2 * param_1[7] + param_1[4];
  param_3[5] = param_2[1] * param_1[7] + param_1[5];
  param_3[6] = param_1[7] * param_2[2] + param_1[6];
  param_3[7] = param_2[3] * param_1[7];
  param_3[8] = param_1[0xb] * *param_2 + param_1[8];
  param_3[9] = param_1[0xb] * param_2[1] + param_1[9];
  param_3[10] = param_1[0xb] * param_2[2] + param_1[10];
  param_3[0xb] = param_1[0xb] * param_2[3];
  param_3[0xc] = param_1[0xf] * *param_2 + param_1[0xc];
  param_3[0xd] = param_1[0xf] * param_2[1] + param_1[0xd];
  param_3[0xe] = param_1[0xf] * param_2[2] + param_1[0xe];
  param_3[0xf] = param_1[0xf] * param_2[3];
  return;
}

