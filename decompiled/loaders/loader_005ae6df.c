/* Decompiled from Speed.exe @ 005ae6df */
/* Module: Loader */
/* Ghidra DecompileAll */


float * FUN_005ae6df(float *param_1,int param_2,float *param_3,int param_4,float *param_5,
                    int param_6)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  
  pfVar7 = param_1;
  for (; param_6 != 0; param_6 = param_6 + -1) {
    pfVar1 = param_3 + 1;
    fVar2 = *param_3;
    fVar3 = param_5[1];
    fVar4 = *param_3;
    fVar5 = param_5[5];
    fVar6 = param_3[1];
    param_3 = (float *)((int)param_3 + param_4);
    *param_1 = fVar2 * *param_5 + param_5[4] * *pfVar1;
    param_1[1] = fVar5 * fVar6 + fVar3 * fVar4;
    param_1 = (float *)((int)param_1 + param_2);
  }
  return pfVar7;
}

