/* Decompiled from Speed.exe @ 0046e270 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046e270(void)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int unaff_ESI;
  float10 fVar5;
  
  iVar2 = *(int *)(unaff_ESI + 0x44);
  *(undefined4 *)(unaff_ESI + 0x70) = 0;
  if ((iVar2 == 0) || (iVar2 == 2)) {
    fVar1 = *(float *)(*(int *)(unaff_ESI + 0x20) + 0x14) - *(float *)(unaff_ESI + 0x4c);
    fVar3 = _DAT_006fff28;
    if ((fVar1 <= _DAT_006fff28) && (fVar3 = fVar1, fVar1 < -_DAT_006fff28)) {
      fVar3 = -_DAT_006fff28;
    }
    fVar1 = *(float *)(*(int *)(unaff_ESI + 0x18) + 0x14);
    fVar4 = (*(float *)(unaff_ESI + 0x4c) - *(float *)(*(int *)(unaff_ESI + 0x20) + 0x14)) *
            _DAT_006ccb78;
    if ((((*(float *)(unaff_ESI + 0x58) != DAT_006cc7a4) &&
         (fVar4 * *(float *)(unaff_ESI + 0x58) < DAT_006cc7a4)) && (_DAT_006ccaa4 < ABS(fVar4))) &&
       (_DAT_006ccaa4 < ABS(*(float *)(unaff_ESI + 0x58)))) {
      fVar1 = _DAT_006b7248 * fVar1;
    }
    *(float *)(unaff_ESI + 0x58) = fVar4;
    FUN_0046e020(fVar1 * *(float *)(unaff_ESI + 0x14) * fVar3);
  }
  else if (iVar2 == 3) {
    fVar5 = (float10)FUN_0046cff0();
    FUN_0046e020((float)fVar5);
    return;
  }
  return;
}

