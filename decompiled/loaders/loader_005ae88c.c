/* Decompiled from Speed.exe @ 005ae88c */
/* Module: Loader */
/* Ghidra DecompileAll */


float * FUN_005ae88c(float *param_1,int param_2,float *param_3,int param_4,float *param_5,
                    int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float *extraout_ECX;
  float *pfVar16;
  undefined8 uVar17;
  
  pfVar16 = param_1;
  for (; param_6 != 0; param_6 = param_6 + -1) {
    fVar1 = param_5[1];
    fVar2 = *param_3;
    fVar3 = param_5[5];
    fVar4 = param_3[1];
    fVar5 = param_5[9];
    fVar6 = param_3[2];
    fVar7 = param_5[0xd];
    fVar8 = param_3[2];
    fVar9 = param_5[10];
    fVar10 = *param_3;
    fVar11 = param_5[2];
    fVar12 = param_3[1];
    fVar13 = param_5[6];
    fVar14 = param_5[0xe];
    fVar15 = param_5[0xb] * param_3[2] + param_5[7] * param_3[1] + param_5[3] * *param_3 +
             param_5[0xf];
    *pfVar16 = *param_3 * *param_5 + param_5[8] * param_3[2] + param_5[4] * param_3[1] +
               param_5[0xc];
    pfVar16[1] = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2 + fVar7;
    pfVar16[2] = fVar12 * fVar13 + fVar10 * fVar11 + fVar8 * fVar9 + fVar14;
    uVar17 = FUN_005ab736(fVar15,0x3f800000);
    if ((int)uVar17 == 0) {
      fVar15 = 1.0 / fVar15;
      *pfVar16 = fVar15 * *pfVar16;
      pfVar16[1] = fVar15 * pfVar16[1];
      pfVar16[2] = fVar15 * pfVar16[2];
    }
    param_3 = (float *)((int)((ulonglong)uVar17 >> 0x20) + param_4);
    pfVar16 = (float *)((int)pfVar16 + param_2);
    param_5 = extraout_ECX;
  }
  return param_1;
}

