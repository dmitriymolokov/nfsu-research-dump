/* Decompiled from Speed.exe @ 00644540 */
/* Module: Audio */
/* Ghidra DecompileVAs */


void fn_00644540(undefined4 *param_1,float param_2,float param_3,undefined4 *param_4)

{
  float fVar1;
  
  fVar1 = (float)param_1[2];
  *param_4 = *param_1;
  param_4[1] = param_1[1];
  param_4[2] = fVar1 * param_2 + param_3 * (float)param_1[3];
  param_4[3] = fVar1;
  fVar1 = (float)param_1[6];
  param_4[4] = param_1[4];
  param_4[5] = param_1[5];
  param_4[6] = fVar1 * param_2 + param_3 * (float)param_1[7];
  param_4[7] = fVar1;
  fVar1 = (float)param_1[10];
  param_4[8] = param_1[8];
  param_4[9] = param_1[9];
  param_4[10] = fVar1 * param_2 + param_3 * (float)param_1[0xb];
  param_4[0xb] = fVar1;
  fVar1 = (float)param_1[0xe];
  param_4[0xc] = param_1[0xc];
  param_4[0xd] = param_1[0xd];
  param_4[0xe] = fVar1 * param_2 + param_3 * (float)param_1[0xf];
  param_4[0xf] = fVar1;
  return;
}

