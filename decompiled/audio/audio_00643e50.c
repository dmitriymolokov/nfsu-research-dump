/* Decompiled from Speed.exe @ 00643e50 */
/* Module: Audio */
/* Ghidra DecompileVAs */


void FUN_00643e50(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = *param_1;
  fVar2 = param_2[1];
  fVar3 = *param_1;
  fVar4 = param_2[2];
  fVar5 = param_1[1];
  fVar6 = param_2[5];
  fVar7 = param_1[1];
  fVar8 = param_2[6];
  fVar9 = param_1[2];
  fVar10 = param_2[9];
  fVar11 = param_1[2];
  fVar12 = param_2[10];
  fVar13 = param_2[0xd];
  fVar14 = param_2[0xe];
  *param_3 = param_1[2] * param_2[8] + param_1[1] * param_2[4] + *param_1 * *param_2 + param_2[0xc];
  param_3[1] = fVar9 * fVar10 + fVar5 * fVar6 + fVar1 * fVar2 + fVar13;
  param_3[2] = fVar11 * fVar12 + fVar7 * fVar8 + fVar3 * fVar4 + fVar14;
  return;
}

