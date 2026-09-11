/* Decompiled from Speed.exe @ 005828e0 */
/* Module: Loader */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005828e0(float param_1,float param_2,float param_3,float param_4,float param_5)

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
  float *pfVar12;
  float *unaff_ESI;
  
  pfVar12 = (float *)FUN_005826c0(param_1 - _DAT_006cc7bc);
  fVar1 = *pfVar12;
  fVar2 = pfVar12[1];
  fVar3 = pfVar12[2];
  pfVar12 = (float *)FUN_005826c0(param_1);
  fVar4 = *pfVar12;
  fVar5 = pfVar12[1];
  fVar6 = pfVar12[2];
  pfVar12 = (float *)FUN_005826c0(param_1 + _DAT_006cc7bc);
  fVar7 = *pfVar12;
  fVar8 = pfVar12[1];
  fVar9 = pfVar12[2];
  pfVar12 = (float *)FUN_005826c0(param_1 + _DAT_006ccc00);
  fVar10 = pfVar12[1];
  fVar11 = pfVar12[2];
  *unaff_ESI = param_5 * *pfVar12 + param_4 * fVar7 + param_3 * fVar4 + fVar1 * param_2;
  unaff_ESI[1] = param_5 * fVar10 + param_4 * fVar8 + param_3 * fVar5 + fVar2 * param_2;
  unaff_ESI[2] = param_5 * fVar11 + param_4 * fVar9 + param_3 * fVar6 + fVar3 * param_2;
  return;
}

