/* Decompiled from Speed.exe @ 005edd20 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005edd20(float *param_1,float *param_2)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float local_18 [4];
  int local_8;
  
  pfVar4 = param_2;
  fVar3 = param_2[5] + *param_2 + param_2[10];
  if (fVar3 <= DAT_006cc7a4) {
    local_18[1] = param_2[5];
    pfVar1 = param_2 + 10;
    local_18[0] = *param_2;
    local_18[2] = *pfVar1;
    param_2 = (float *)(uint)(*param_2 < param_2[5]);
    if (local_18[(int)param_2] < *pfVar1) {
      param_2 = (float *)0x2;
    }
    iVar5 = (int)param_2 * 4;
    iVar2 = *(int *)(&DAT_006a3d90 + iVar5);
    iVar6 = iVar2 * 4;
    local_8 = *(int *)(&DAT_006a3d90 + iVar6);
    fVar3 = SQRT(((local_18[(int)param_2] - local_18[iVar2]) - local_18[local_8]) + _DAT_006cc7bc) *
            _DAT_006cc7dc;
    param_1[(int)param_2] = fVar3;
    fVar3 = _DAT_006cc90c / fVar3;
    param_1[iVar2] = (pfVar4[(int)param_2 + iVar6] + pfVar4[iVar2 + iVar5]) * fVar3;
    param_1[local_8] = (pfVar4[(int)param_2 + local_8 * 4] + pfVar4[iVar5 + local_8]) * fVar3;
    param_1[3] = (pfVar4[iVar6 + local_8] - pfVar4[local_8 * 4 + iVar2]) * fVar3;
  }
  else {
    fVar3 = SQRT(fVar3 + _DAT_006cc7bc) * _DAT_006cc7dc;
    param_1[3] = fVar3;
    fVar3 = _DAT_006cc90c / fVar3;
    *param_1 = (param_2[6] - param_2[9]) * fVar3;
    param_1[1] = (param_2[8] - param_2[2]) * fVar3;
    param_1[2] = (param_2[1] - param_2[4]) * fVar3;
  }
  return;
}

