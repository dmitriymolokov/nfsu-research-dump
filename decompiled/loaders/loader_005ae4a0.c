/* Decompiled from Speed.exe @ 005ae4a0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005ae4a0(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = param_3[1];
  fVar2 = *param_2;
  fVar3 = param_3[5];
  fVar4 = param_2[1];
  fVar5 = param_3[0xd];
  fVar6 = param_3[2];
  fVar7 = *param_2;
  fVar8 = param_3[6];
  fVar9 = param_2[1];
  fVar10 = param_3[0xe];
  fVar11 = param_3[3];
  fVar12 = *param_2;
  fVar13 = param_3[7];
  fVar14 = param_2[1];
  fVar15 = param_3[0xf];
  *param_1 = *param_2 * *param_3 + param_3[4] * param_2[1] + param_3[0xc];
  param_1[1] = fVar3 * fVar4 + fVar1 * fVar2 + fVar5;
  param_1[2] = fVar8 * fVar9 + fVar6 * fVar7 + fVar10;
  param_1[3] = fVar13 * fVar14 + fVar11 * fVar12 + fVar15;
  return;
}

