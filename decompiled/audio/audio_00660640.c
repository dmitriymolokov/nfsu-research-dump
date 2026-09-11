/* Decompiled from Speed.exe @ 00660640 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00660640(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  
  iVar1 = *param_2;
  iVar2 = param_2[2];
  fVar4 = (float)param_2[3] * _DAT_006cc8f0;
  iVar3 = param_2[1];
  *(float *)(param_1 + 0x20) = (float)(iVar1 >> 8);
  *(int *)(param_1 + 0x1c) = iVar3 >> 8;
  *(float *)(param_1 + 0x24) = (float)(iVar2 >> 8);
  fVar6 = (float)(iVar3 >> 8);
  fVar5 = _DAT_006cc7bc - ((float)(iVar2 >> 8) * _DAT_006cca44) / fVar6;
  *(float *)(param_1 + 0x28) = fVar5;
  fVar7 = (float10)FUN_006590b0(((float)(iVar1 >> 8) * _DAT_006cca48) / fVar6);
  fVar7 = (((float10)*(float *)(param_1 + 0x28) + (float10)*(float *)(param_1 + 0x28)) /
          ((float10)(fVar5 * fVar5) + (float10)_DAT_006cc7bc)) * fVar7;
  *(float *)(param_1 + 0x2c) = (float)fVar7;
  fVar7 = (float10)FUN_00661700((float)-(fVar7 * fVar7));
  *(float *)(param_1 + 0x30) =
       (float)(((float10)_DAT_006cc7bc - (float10)(fVar5 * fVar5)) * fVar7 * (float10)fVar4);
  return;
}

