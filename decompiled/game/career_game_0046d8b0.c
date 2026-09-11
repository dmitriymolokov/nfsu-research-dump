/* Decompiled from Speed.exe @ 0046d8b0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046d8b0(float param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  int unaff_ESI;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar5 = (float10)FUN_0046d680();
  fVar4 = *(float *)(*(int *)(unaff_ESI + 0x34) + 0x394) * _DAT_006cc9f0;
  bVar3 = fVar4 < _DAT_006ccb50;
  iVar1 = *(int *)(unaff_ESI + 0x18);
  if (_DAT_006cc8bc <= *(float *)(iVar1 + 0x10)) {
    iVar2 = *(int *)(unaff_ESI + 0x2c);
    if ((*(char *)(iVar2 + 0x155) == '\0') &&
       (*(char *)(*(int *)(unaff_ESI + 0x30) + 0x155) == '\0')) {
      bVar3 = true;
    }
    fVar6 = ((float10)param_1 - fVar5) /
            ((float10)*(float *)(iVar1 + 0x20 + *(int *)(unaff_ESI + 0x3c) * 4) *
            (float10)*(float *)(iVar1 + 0xc));
    fVar7 = (float10)*(float *)(*(int *)(unaff_ESI + 0x30) + 0x28);
    if (bVar3) {
      fVar8 = (fVar7 + (float10)*(float *)(iVar2 + 0x28)) * (float10)_DAT_006cc7dc;
      fVar7 = fVar8;
    }
    else {
      fVar8 = (float10)*(float *)(iVar2 + 0x28);
    }
    *(float *)(iVar2 + 0x28) = (float)(fVar8 + fVar6);
    *(float *)(*(int *)(unaff_ESI + 0x30) + 0x28) = (float)(fVar7 + fVar6);
  }
  bVar3 = fVar4 < _DAT_006ccb50;
  iVar1 = *(int *)(unaff_ESI + 0x18);
  if (*(float *)(iVar1 + 0x10) < _DAT_006cc96c != (*(float *)(iVar1 + 0x10) == _DAT_006cc96c)) {
    iVar2 = *(int *)(unaff_ESI + 0x24);
    if ((*(char *)(iVar2 + 0x155) == '\0') &&
       (*(char *)(*(int *)(unaff_ESI + 0x28) + 0x155) == '\0')) {
      bVar3 = true;
    }
    fVar7 = ((float10)param_1 - fVar5) /
            ((float10)*(float *)(iVar1 + 0x20 + *(int *)(unaff_ESI + 0x3c) * 4) *
            (float10)*(float *)(iVar1 + 8));
    fVar5 = (float10)*(float *)(*(int *)(unaff_ESI + 0x28) + 0x28);
    if (bVar3) {
      fVar5 = (fVar5 + (float10)*(float *)(iVar2 + 0x28)) * (float10)_DAT_006cc7dc;
      *(float *)(iVar2 + 0x28) = (float)(fVar5 + fVar7);
      *(float *)(*(int *)(unaff_ESI + 0x28) + 0x28) = (float)(fVar5 + fVar7);
      return;
    }
    *(float *)(iVar2 + 0x28) = (float)((float10)*(float *)(iVar2 + 0x28) + fVar7);
    *(float *)(*(int *)(unaff_ESI + 0x28) + 0x28) = (float)(fVar5 + fVar7);
  }
  return;
}

