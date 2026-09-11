/* Decompiled from Speed.exe @ 005d7040 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005d7040(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float local_48 [17];
  
  if ((param_1 == param_2) || (pfVar5 = param_1, param_1 == param_3)) {
    pfVar5 = local_48;
  }
  iVar8 = -4;
  do {
    iVar7 = -4;
    pfVar6 = pfVar5 + iVar8 + 4;
    fVar1 = *param_2;
    fVar2 = param_2[1];
    fVar3 = param_2[2];
    fVar4 = param_2[3];
    do {
      *pfVar6 = (float)((float10)fVar4 * (float10)param_3[iVar7 + 0x10] +
                        (float10)fVar2 * (float10)param_3[iVar7 + 8] +
                       (float10)fVar1 * (float10)param_3[iVar7 + 4] +
                       (float10)fVar3 * (float10)param_3[iVar7 + 0xc]);
      pfVar6 = pfVar6 + 4;
      iVar7 = iVar7 + 1;
    } while (iVar7 != 0);
    ffree((float10)fVar1);
    ffree((float10)fVar2);
    ffree((float10)fVar3);
    ffree((float10)fVar4);
    param_2 = param_2 + 4;
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0);
  if (pfVar5 != param_1) {
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *param_1 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      param_1 = param_1 + 1;
    }
  }
  return;
}

