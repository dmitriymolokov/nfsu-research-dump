/* Decompiled from Speed.exe @ 00492ff0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00492ff0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float fVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar1 = *param_1;
  iVar10 = (param_2 * 3 + -3) * 8;
  pfVar2 = *(float **)(iVar1 + 4 + iVar10);
  iVar3 = *(int *)(iVar1 + iVar10);
  iVar4 = *(int *)(iVar1 + 0x10 + iVar10);
  FUN_004422b0(0,*(undefined4 *)(iVar1 + 0xc + iVar10));
  iVar6 = ((int)pfVar2 + (-0x27c - iVar3)) / 0x88;
  if (iVar6 + 1 < (int)*(short *)(iVar3 + 0x10)) {
    iVar9 = param_2 * 0x18;
    *(int *)(iVar9 + iVar1) = iVar3;
    *(int *)(iVar9 + 4 + *param_1) = iVar6 * 0x88 + 0x304 + iVar3;
    *(int *)(iVar9 + 0x10 + *param_1) = iVar4;
    fVar7 = DAT_006cc7a4;
    if (iVar4 != -1) {
      fVar7 = (float)((int)*(short *)(*(int *)(iVar9 + 4 + *param_1) + 0x3c + iVar4 * 2) << 8) *
              _DAT_006cc83c;
    }
    *(float *)(iVar9 + 0xc + *param_1) = fVar7;
    *(undefined4 *)(iVar9 + 0x14 + *param_1) = 0;
  }
  else {
    cVar8 = FUN_004932e0(param_1,&local_30,param_3,param_4,param_2,pfVar2);
    if (cVar8 == '\0') {
      return (float10)DAT_006cc7a4;
    }
    iVar1 = param_2 * 0x18 + *param_1;
    pfVar5 = *(float **)(iVar1 + 4);
    *(float *)(iVar1 + 0x14) = (*pfVar2 - *pfVar5) * pfVar5[4] - (pfVar2[1] - pfVar5[1]) * pfVar5[3]
    ;
  }
  iVar1 = *param_1;
  FUN_004422b0(0,*(undefined4 *)(param_2 * 0x18 + 0xc + iVar1));
  *(float *)(iVar1 + 8 + iVar10) =
       SQRT((local_1c - local_2c) * (local_1c - local_2c) +
            (local_18 - local_28) * (local_18 - local_28) +
            (local_20 - local_30) * (local_20 - local_30));
  return (float10)*(float *)(iVar10 + 8 + *param_1);
}

