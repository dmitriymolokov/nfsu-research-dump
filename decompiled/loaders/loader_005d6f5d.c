/* Decompiled from Speed.exe @ 005d6f5d */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005d6f5d(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float local_44 [16];
  
  if (param_3 == param_1) {
    if (param_2 != param_1) {
      iVar6 = -4;
      do {
        iVar5 = -0x10;
        fVar1 = param_3[iVar6 + 4];
        fVar2 = param_3[iVar6 + 8];
        fVar3 = param_3[iVar6 + 0xc];
        fVar4 = param_3[iVar6 + 0x10];
        do {
          param_1[iVar5 + 0x10] =
               (float)((float10)fVar4 * (float10)param_2[iVar5 + 0x13] +
                       (float10)fVar2 * (float10)param_2[iVar5 + 0x11] +
                      (float10)fVar1 * (float10)param_2[iVar5 + 0x10] +
                      (float10)fVar3 * (float10)param_2[iVar5 + 0x12]);
          iVar5 = iVar5 + 4;
        } while (iVar5 != 0);
        ffree((float10)fVar1);
        ffree((float10)fVar2);
        ffree((float10)fVar3);
        ffree((float10)fVar4);
        param_1 = param_1 + 1;
        iVar6 = iVar6 + 1;
      } while (iVar6 != 0);
      return;
    }
    pfVar7 = local_44;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar7 = *param_3;
      param_3 = param_3 + 1;
      pfVar7 = pfVar7 + 1;
    }
    param_3 = local_44;
  }
  iVar6 = -4;
  do {
    iVar5 = -4;
    fVar1 = *param_2;
    fVar2 = param_2[1];
    fVar3 = param_2[2];
    fVar4 = param_2[3];
    do {
      param_1[iVar5 + 4] =
           (float)((float10)fVar4 * (float10)param_3[iVar5 + 0x10] +
                   (float10)fVar2 * (float10)param_3[iVar5 + 8] +
                  (float10)fVar1 * (float10)param_3[iVar5 + 4] +
                  (float10)fVar3 * (float10)param_3[iVar5 + 0xc]);
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0);
    ffree((float10)fVar1);
    ffree((float10)fVar2);
    ffree((float10)fVar3);
    ffree((float10)fVar4);
    param_2 = param_2 + 4;
    param_1 = param_1 + 4;
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0);
  return;
}

