/* Decompiled from Speed.exe @ 00459870 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00459870(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float *unaff_ESI;
  char *unaff_EDI;
  float10 extraout_ST0;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  fVar1 = DAT_006cc7a4;
  if (DAT_006cc7a4 < param_1) {
    fVar1 = param_1;
  }
  param_1 = fVar1;
  if ((float)(*unaff_EDI + -1) < param_1) {
    param_1 = (float)(*unaff_EDI + -1);
  }
  FUN_004387e0(param_1);
  iVar4 = FUN_00674898();
  if ((float10)param_1 == extraout_ST0) {
    iVar4 = (iVar4 + 1) * 0x10;
    fVar1 = *(float *)(unaff_EDI + iVar4 + 4);
    fVar2 = *(float *)((int)(unaff_EDI + iVar4) + 8);
    *unaff_ESI = *(float *)(unaff_EDI + iVar4);
    unaff_ESI[1] = fVar1;
    unaff_ESI[2] = fVar2;
    return;
  }
  fVar7 = (float10)param_1 - extraout_ST0;
  iVar5 = (iVar4 + 1) * 0x10;
  fVar3 = *(float *)(unaff_EDI + iVar5 + 8);
  fVar8 = (float10)_DAT_006cc7bc - fVar7;
  fVar1 = *(float *)((int)(unaff_EDI + iVar5) + 4);
  pfVar6 = (float *)(unaff_EDI + (iVar4 + 2) * 0x10);
  *unaff_ESI = (float)(fVar8 * (float10)*(float *)(unaff_EDI + iVar5));
  fVar9 = (float10)fVar1 * fVar8;
  unaff_ESI[1] = (float)fVar9;
  unaff_ESI[2] = (float)(fVar8 * (float10)fVar3);
  fVar1 = pfVar6[1];
  fVar2 = pfVar6[2];
  *unaff_ESI = (float)(fVar7 * (float10)*pfVar6 + (float10)*unaff_ESI);
  unaff_ESI[1] = (float)(fVar7 * (float10)fVar1 + (float10)(float)fVar9);
  unaff_ESI[2] = (float)(fVar7 * (float10)fVar2 + (float10)(float)(fVar8 * (float10)fVar3));
  return;
}

