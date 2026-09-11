/* Decompiled from Speed.exe @ 005ad1aa */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005ad1aa(float *param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)param_2);
  fVar2 = (float10)fsin((float10)param_2);
  *param_1 = (float)fVar1;
  param_1[1] = (float)fVar2;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = -(float)fVar2;
  param_1[5] = (float)fVar1;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[10] = 1.0;
  param_1[0xb] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = 1.0;
  return;
}

