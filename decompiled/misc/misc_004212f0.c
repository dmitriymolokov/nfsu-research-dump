/* Decompiled from Speed.exe @ 004212f0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


float10 FUN_004212f0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int unaff_ESI;
  float *unaff_EDI;
  float10 fVar6;
  float10 fVar7;
  
  fVar1 = *unaff_EDI - *(float *)(unaff_ESI + 0x280);
  fVar2 = unaff_EDI[1] - *(float *)(unaff_ESI + 0x284);
  fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  fVar2 = *unaff_EDI - *(float *)(unaff_ESI + 0x290);
  fVar3 = unaff_EDI[1] - *(float *)(unaff_ESI + 0x294);
  fVar2 = SQRT(fVar2 * fVar2 + fVar3 * fVar3);
  cVar5 = FUN_0043a2e0();
  if ((cVar5 == '\0') || (*(int *)(unaff_ESI + 0x1c) < 3)) {
    if (fVar2 <= fVar1) {
      return (float10)fVar2;
    }
  }
  else {
    fVar6 = (float10)*unaff_EDI - (float10)*(float *)(unaff_ESI + 0x2a0);
    fVar7 = (float10)unaff_EDI[1] - (float10)*(float *)(unaff_ESI + 0x2a4);
    fVar6 = SQRT(fVar6 * fVar6 + fVar7 * fVar7);
    fVar3 = *unaff_EDI - *(float *)(unaff_ESI + 0x2b0);
    fVar4 = unaff_EDI[1] - *(float *)(unaff_ESI + 0x2b4);
    fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4);
    if ((float10)fVar3 <= fVar6) {
      fVar6 = (float10)fVar3;
    }
    if ((float10)fVar2 < fVar6) {
      fVar6 = (float10)fVar2;
    }
    if (fVar6 <= (float10)fVar1) {
      return fVar6;
    }
  }
  return (float10)fVar1;
}

