/* Decompiled from Speed.exe @ 006603e0 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006603e0(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  
  if ((((float)*(int *)(param_1 + 0x1c) * _DAT_006aab80 <= *(float *)(param_1 + 0x24)) ||
      (*(float *)(param_1 + 0x20) <= DAT_006cc7a4)) ||
     ((float)(*(int *)(param_1 + 0x1c) >> 1) <= *(float *)(param_1 + 0x20))) {
    if (0 < param_2) {
      param_3 = param_3 - (int)param_4;
      do {
        *param_4 = *(undefined4 *)((int)param_4 + param_3);
        param_4 = param_4 + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  else {
    iVar6 = 0;
    if (3 < param_2) {
      pfVar4 = (float *)(param_4 + 1);
      pfVar5 = (float *)(param_3 + 0xc);
      iVar7 = 3;
      do {
        fVar2 = *(float *)(param_1 + 0x2c) * *(float *)(param_1 + 0x28);
        pfVar4[-1] = ((fVar2 + fVar2) * *(float *)(param_1 + 0x38) +
                     (pfVar5[-3] + _DAT_006aab7c) * *(float *)(param_1 + 0x30)) -
                     *(float *)(param_1 + 0x3c) * *(float *)(param_1 + 0x28) *
                     *(float *)(param_1 + 0x28);
        *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
        fVar2 = pfVar4[-1];
        *(float *)(param_1 + 0x38) = fVar2;
        fVar3 = *(float *)(param_1 + 0x2c) * *(float *)(param_1 + 0x28);
        *pfVar4 = ((fVar3 + fVar3) * fVar2 +
                  (*(float *)((int)pfVar4 + (param_3 - (int)param_4)) + _DAT_006aab7c) *
                  *(float *)(param_1 + 0x30)) -
                  *(float *)(param_1 + 0x3c) * *(float *)(param_1 + 0x28) *
                  *(float *)(param_1 + 0x28);
        *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
        fVar2 = *pfVar4;
        *(float *)(param_1 + 0x38) = fVar2;
        fVar3 = *(float *)(param_1 + 0x2c) * *(float *)(param_1 + 0x28);
        pfVar4[1] = ((fVar3 + fVar3) * fVar2 +
                    (pfVar5[-1] + _DAT_006aab7c) * *(float *)(param_1 + 0x30)) -
                    *(float *)(param_1 + 0x3c) * *(float *)(param_1 + 0x28) *
                    *(float *)(param_1 + 0x28);
        *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
        fVar2 = pfVar4[1];
        *(float *)(param_1 + 0x38) = fVar2;
        fVar3 = *(float *)(param_1 + 0x2c) * *(float *)(param_1 + 0x28);
        pfVar4[2] = ((*pfVar5 + _DAT_006aab7c) * *(float *)(param_1 + 0x30) +
                    (fVar3 + fVar3) * fVar2) -
                    *(float *)(param_1 + 0x3c) * *(float *)(param_1 + 0x28) *
                    *(float *)(param_1 + 0x28);
        *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
        pfVar1 = pfVar4 + 2;
        iVar7 = iVar7 + 4;
        iVar6 = iVar6 + 4;
        pfVar4 = pfVar4 + 4;
        pfVar5 = pfVar5 + 4;
        *(float *)(param_1 + 0x38) = *pfVar1;
      } while (iVar7 < param_2);
    }
    if (iVar6 < param_2) {
      param_2 = param_2 - iVar6;
      pfVar4 = (float *)(param_4 + iVar6);
      do {
        param_2 = param_2 + -1;
        fVar2 = *(float *)(param_1 + 0x2c) * *(float *)(param_1 + 0x28);
        *pfVar4 = ((fVar2 + fVar2) * *(float *)(param_1 + 0x38) +
                  (*(float *)((int)pfVar4 + (param_3 - (int)param_4)) + _DAT_006aab7c) *
                  *(float *)(param_1 + 0x30)) -
                  *(float *)(param_1 + 0x3c) * *(float *)(param_1 + 0x28) *
                  *(float *)(param_1 + 0x28);
        *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x38);
        *(float *)(param_1 + 0x38) = *pfVar4;
        pfVar4 = pfVar4 + 1;
      } while (param_2 != 0);
      return;
    }
  }
  return;
}

