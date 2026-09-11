/* Decompiled from Speed.exe @ 005ae50b */
/* Module: Loader */
/* Ghidra DecompileAll */


float * FUN_005ae50b(float *param_1,int param_2,float *param_3,int param_4,float *param_5,
                    int param_6)

{
  float *pfVar1;
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
  float fVar16;
  float fVar17;
  float *pfVar18;
  
  pfVar18 = param_1;
  for (; param_6 != 0; param_6 = param_6 + -1) {
    pfVar1 = param_3 + 1;
    fVar2 = *param_3;
    fVar3 = param_5[1];
    fVar4 = *param_3;
    fVar5 = param_5[5];
    fVar6 = param_3[1];
    fVar7 = param_5[0xd];
    fVar8 = param_5[2];
    fVar9 = *param_3;
    fVar10 = param_5[6];
    fVar11 = param_3[1];
    fVar12 = param_5[0xe];
    fVar13 = *param_3;
    fVar14 = param_5[3];
    fVar15 = param_3[1];
    param_3 = (float *)((int)param_3 + param_4);
    fVar16 = param_5[7];
    fVar17 = param_5[0xf];
    *pfVar18 = fVar2 * *param_5 + param_5[4] * *pfVar1 + param_5[0xc];
    pfVar18[1] = fVar5 * fVar6 + fVar3 * fVar4 + fVar7;
    pfVar18[2] = fVar10 * fVar11 + fVar8 * fVar9 + fVar12;
    pfVar18[3] = fVar15 * fVar16 + fVar13 * fVar14 + fVar17;
    pfVar18 = (float *)((int)pfVar18 + param_2);
  }
  return param_1;
}

