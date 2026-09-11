/* Decompiled from Speed.exe @ 00421400 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


float10 FUN_00421400(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  int unaff_ESI;
  float *unaff_EDI;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  fVar1 = *unaff_EDI - *(float *)(unaff_ESI + 0x280);
  fVar3 = unaff_EDI[1] - *(float *)(unaff_ESI + 0x284);
  fVar2 = unaff_EDI[2] - *(float *)(unaff_ESI + 0x288);
  fVar1 = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
  fVar2 = *unaff_EDI - *(float *)(unaff_ESI + 0x290);
  fVar4 = unaff_EDI[1] - *(float *)(unaff_ESI + 0x294);
  fVar3 = unaff_EDI[2] - *(float *)(unaff_ESI + 0x298);
  fVar2 = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3);
  cVar6 = FUN_0043a2e0();
  if ((cVar6 == '\0') || (*(int *)(unaff_ESI + 0x1c) < 3)) {
    if (fVar2 <= fVar1) {
      return (float10)fVar2;
    }
  }
  else {
    fVar7 = (float10)*unaff_EDI - (float10)*(float *)(unaff_ESI + 0x2a0);
    fVar8 = (float10)unaff_EDI[1] - (float10)*(float *)(unaff_ESI + 0x2a4);
    fVar9 = (float10)unaff_EDI[2] - (float10)*(float *)(unaff_ESI + 0x2a8);
    fVar7 = SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9);
    fVar3 = *unaff_EDI - *(float *)(unaff_ESI + 0x2b0);
    fVar5 = unaff_EDI[1] - *(float *)(unaff_ESI + 0x2b4);
    fVar4 = unaff_EDI[2] - *(float *)(unaff_ESI + 0x2b8);
    fVar3 = SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4);
    if ((float10)fVar3 <= fVar7) {
      fVar7 = (float10)fVar3;
    }
    if ((float10)fVar2 < fVar7) {
      fVar7 = (float10)fVar2;
    }
    if (fVar7 <= (float10)fVar1) {
      return fVar7;
    }
  }
  return (float10)fVar1;
}

