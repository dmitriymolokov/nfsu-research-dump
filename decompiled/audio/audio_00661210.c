/* Decompiled from Speed.exe @ 00661210 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00661210(float *param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (3 < param_2) {
    iVar5 = 3;
    pfVar2 = (float *)(param_3 + 4);
    pfVar3 = (float *)(param_4 + 0xc);
    do {
      pfVar3[-3] = param_1[3] * param_1[0xc] +
                   (*param_1 + param_1[6]) * param_1[9] +
                   (param_1[4] + param_1[2]) * param_1[0xb] +
                   (param_1[5] + param_1[1]) * param_1[10] + (pfVar2[-1] + param_1[7]) * param_1[8];
      param_1[7] = param_1[6];
      param_1[6] = param_1[5];
      param_1[5] = param_1[4];
      param_1[4] = param_1[3];
      param_1[3] = param_1[2];
      param_1[2] = param_1[1];
      param_1[1] = *param_1;
      fVar1 = pfVar2[-1];
      *param_1 = fVar1;
      *(float *)((int)pfVar2 + (param_4 - param_3)) =
           param_1[3] * param_1[0xc] +
           (param_1[4] + param_1[2]) * param_1[0xb] +
           (param_1[5] + param_1[1]) * param_1[10] +
           (*pfVar2 + param_1[7]) * param_1[8] + (fVar1 + param_1[6]) * param_1[9];
      param_1[7] = param_1[6];
      param_1[6] = param_1[5];
      param_1[5] = param_1[4];
      param_1[4] = param_1[3];
      param_1[3] = param_1[2];
      param_1[2] = param_1[1];
      param_1[1] = *param_1;
      fVar1 = *pfVar2;
      *param_1 = fVar1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 4;
      pfVar3[-1] = param_1[3] * param_1[0xc] +
                   (param_1[4] + param_1[2]) * param_1[0xb] +
                   (param_1[5] + param_1[1]) * param_1[10] +
                   (pfVar2[1] + param_1[7]) * param_1[8] + (fVar1 + param_1[6]) * param_1[9];
      param_1[7] = param_1[6];
      param_1[6] = param_1[5];
      param_1[5] = param_1[4];
      param_1[4] = param_1[3];
      param_1[3] = param_1[2];
      param_1[2] = param_1[1];
      param_1[1] = *param_1;
      fVar1 = pfVar2[1];
      *param_1 = fVar1;
      *pfVar3 = param_1[3] * param_1[0xc] +
                (param_1[4] + param_1[2]) * param_1[0xb] +
                (param_1[5] + param_1[1]) * param_1[10] +
                (pfVar2[2] + param_1[7]) * param_1[8] + (fVar1 + param_1[6]) * param_1[9];
      param_1[7] = param_1[6];
      param_1[6] = param_1[5];
      param_1[5] = param_1[4];
      param_1[4] = param_1[3];
      param_1[3] = param_1[2];
      param_1[2] = param_1[1];
      param_1[1] = *param_1;
      *param_1 = pfVar2[2];
      pfVar2 = pfVar2 + 4;
      pfVar3 = pfVar3 + 4;
    } while (iVar5 < param_2);
  }
  if (iVar4 < param_2) {
    param_2 = param_2 - iVar4;
    pfVar2 = (float *)(param_3 + iVar4 * 4);
    do {
      param_2 = param_2 + -1;
      *(float *)((int)pfVar2 + (param_4 - param_3)) =
           param_1[3] * param_1[0xc] +
           (*param_1 + param_1[6]) * param_1[9] +
           (param_1[4] + param_1[2]) * param_1[0xb] +
           (param_1[5] + param_1[1]) * param_1[10] + (param_1[7] + *pfVar2) * param_1[8];
      param_1[7] = param_1[6];
      param_1[6] = param_1[5];
      param_1[5] = param_1[4];
      param_1[4] = param_1[3];
      param_1[3] = param_1[2];
      param_1[2] = param_1[1];
      param_1[1] = *param_1;
      *param_1 = *pfVar2;
      pfVar2 = pfVar2 + 1;
    } while (param_2 != 0);
  }
  return;
}

