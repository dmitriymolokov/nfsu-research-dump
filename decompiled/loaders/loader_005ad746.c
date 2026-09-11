/* spd-match: far pct=15.22 M4.0.2-CE */
/* Decompiled from Speed.exe @ 005ad746 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_005ad746(float *param_1,undefined4 param_2,float param_3)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float local_18;
  float local_14;
  float local_10;
  
  FUN_005abb30(&local_18,param_2);
  fVar2 = (float10)fcos((float10)(param_3 * _DAT_006cc7dc));
  fVar3 = (float10)fsin((float10)(param_3 * _DAT_006cc7dc));
  param_1[3] = (float)fVar2;
  fVar1 = (float)fVar3;
  *param_1 = local_18 * fVar1;
  param_1[1] = local_14 * fVar1;
  param_1[2] = local_10 * fVar1;
  return param_1;
}

