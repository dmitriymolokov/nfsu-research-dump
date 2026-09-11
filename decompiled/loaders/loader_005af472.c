/* spd-match: far pct=16.06 M4.0.2-CE */
/* Decompiled from Speed.exe @ 005af472 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005af472(float *param_1,float *param_2,undefined4 param_3)

{
  float fVar1;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  FUN_005addb8(&local_14,param_3);
  fVar1 = local_c * param_2[2] + local_8 * param_2[3] + local_14 * *param_2 + local_10 * param_2[1];
  local_14 = -local_14;
  local_10 = -local_10;
  local_c = -local_c;
  local_8 = -local_8;
  *param_1 = local_14 * *param_2 + fVar1;
  param_1[4] = local_10 * *param_2;
  param_1[8] = local_c * *param_2;
  param_1[0xc] = local_8 * *param_2;
  param_1[1] = local_14 * param_2[1];
  param_1[5] = local_10 * param_2[1] + fVar1;
  param_1[9] = local_c * param_2[1];
  param_1[0xd] = local_8 * param_2[1];
  param_1[2] = local_14 * param_2[2];
  param_1[6] = local_10 * param_2[2];
  param_1[10] = local_c * param_2[2] + fVar1;
  param_1[0xe] = local_8 * param_2[2];
  param_1[3] = local_14 * param_2[3];
  param_1[7] = local_10 * param_2[3];
  param_1[0xb] = local_c * param_2[3];
  param_1[0xf] = local_8 * param_2[3] + fVar1;
  return;
}

