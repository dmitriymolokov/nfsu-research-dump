/* spd-match: far pct=10.85 M4.0.2-CE */
/* Decompiled from Speed.exe @ 005ad246 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005ad246(float *param_1,float *param_2,float param_3)

{
  float10 fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float local_20;
  float local_1c;
  float local_18;
  float *local_14;
  float *local_10;
  float local_c;
  float local_8;
  
  local_10 = &local_8;
  local_14 = &local_c;
  fVar1 = (float10)fcos((float10)param_3);
  fVar6 = (float10)fsin((float10)param_3);
  local_8 = (float)fVar1;
  local_c = (float)fVar6;
  fVar2 = 1.0 - local_8;
  local_20 = *param_2;
  local_1c = param_2[1];
  local_18 = param_2[2];
  FUN_005abb30(&local_20,&local_20);
  fVar3 = local_1c * local_20 * fVar2;
  fVar4 = local_1c * local_18 * fVar2;
  fVar5 = local_18 * local_20 * fVar2;
  *param_1 = local_20 * local_20 * fVar2 + local_8;
  param_1[1] = fVar3 + local_18 * local_c;
  param_1[2] = fVar5 - local_1c * local_c;
  param_1[3] = 0.0;
  param_1[4] = fVar3 - local_18 * local_c;
  param_1[5] = local_1c * local_1c * fVar2 + local_8;
  param_1[6] = local_20 * local_c + fVar4;
  param_1[7] = 0.0;
  param_1[8] = local_1c * local_c + fVar5;
  param_1[9] = fVar4 - local_20 * local_c;
  param_1[10] = local_18 * local_18 * fVar2 + local_8;
  param_1[0xb] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 1.0;
  return;
}

