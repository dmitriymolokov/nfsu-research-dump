/* Decompiled from Speed.exe @ 0044e850 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044e850(int param_1,float param_2)

{
  char cVar1;
  int iVar2;
  float fVar3;
  int unaff_EBX;
  int unaff_EDI;
  
  cVar1 = *(char *)(unaff_EDI + 0x388);
  iVar2 = *(int *)(*(int *)(*(int *)(unaff_EBX + 0x34) + 0x1d4) + 0x1c);
  if (*(int *)(iVar2 + 0xe4) != 0) {
    FUN_005791c0();
  }
  *(float *)(param_1 + 0x1e4) =
       SQRT(*(float *)(iVar2 + 0x98) * *(float *)(iVar2 + 0x98) +
            *(float *)(iVar2 + 0x94) * *(float *)(iVar2 + 0x94) +
            *(float *)(iVar2 + 0x90) * *(float *)(iVar2 + 0x90)) - param_2;
  if (ABS(*(float *)(unaff_EBX + 4)) <= _DAT_006cc79c) {
    *(undefined4 *)(param_1 + 0x1e8) = 0x47c34f80;
  }
  else {
    *(float *)(param_1 + 0x1e8) =
         (((*(float *)(unaff_EBX + 0x10) -
           *(float *)(*(char *)(unaff_EDI + 0x388) * 0x38 + 0x18 + unaff_EDI)) -
          *(float *)(cVar1 * 0x38 + unaff_EDI + 0x14)) - *(float *)(unaff_EBX + 0xc)) /
         *(float *)(unaff_EBX + 4);
  }
  fVar3 = *(float *)(param_1 + 0x1e4);
  if (*(float *)(param_1 + 0x1e4) <= DAT_006cc7a4) {
    fVar3 = DAT_006cc7a4;
  }
  *(float *)(param_1 + 0x1e4) = fVar3;
  if (_DAT_006cc7b8 < *(float *)(param_1 + 0x1e8)) {
    *(float *)(param_1 + 0x1e8) = *(float *)(param_1 + 0x1e8);
    return;
  }
  *(undefined4 *)(param_1 + 0x1e8) = 0x3dcccccd;
  return;
}

