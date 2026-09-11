/* Decompiled from Speed.exe @ 005ae60b */
/* Module: Loader */
/* Ghidra DecompileAll */


float * FUN_005ae60b(float *param_1,int param_2,float *param_3,int param_4,float *param_5,
                    int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *extraout_ECX;
  float *pfVar7;
  undefined8 uVar8;
  
  pfVar7 = param_1;
  for (; param_6 != 0; param_6 = param_6 + -1) {
    fVar1 = param_5[1];
    fVar2 = *param_3;
    fVar3 = param_5[5];
    fVar4 = param_3[1];
    fVar5 = param_5[0xd];
    fVar6 = param_5[7] * param_3[1] + param_5[3] * *param_3 + param_5[0xf];
    *pfVar7 = *param_3 * *param_5 + param_5[4] * param_3[1] + param_5[0xc];
    pfVar7[1] = fVar3 * fVar4 + fVar1 * fVar2 + fVar5;
    uVar8 = FUN_005ab736(fVar6,0x3f800000);
    if ((int)uVar8 == 0) {
      fVar6 = 1.0 / fVar6;
      *pfVar7 = fVar6 * *pfVar7;
      pfVar7[1] = fVar6 * pfVar7[1];
    }
    param_3 = (float *)((int)((ulonglong)uVar8 >> 0x20) + param_4);
    pfVar7 = (float *)((int)pfVar7 + param_2);
    param_5 = extraout_ECX;
  }
  return param_1;
}

