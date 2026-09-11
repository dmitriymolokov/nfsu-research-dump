/* Decompiled from Speed.exe @ 00421550 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00421550(float param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int unaff_ESI;
  float10 fVar4;
  float10 fVar5;
  
  fVar1 = *(float *)(unaff_ESI + 0x2c0) - param_1;
  if ((0 < DAT_007372b8) && (*(char *)(DAT_007372bc + 1) != '\0')) {
    if (DAT_007372b0 * _DAT_006cc920 <= fVar1) {
      if (DAT_007372b0 * _DAT_006cc7dc < fVar1) {
        fVar1 = fVar1 - DAT_007372b0;
      }
    }
    else {
      fVar1 = fVar1 + DAT_007372b0;
    }
  }
  fVar1 = ABS(fVar1);
  fVar2 = *(float *)(unaff_ESI + 0x2c4) - param_1;
  if ((0 < DAT_007372b8) && (*(char *)(DAT_007372bc + 1) != '\0')) {
    if (DAT_007372b0 * _DAT_006cc920 <= fVar2) {
      if (DAT_007372b0 * _DAT_006cc7dc < fVar2) {
        fVar2 = fVar2 - DAT_007372b0;
      }
    }
    else {
      fVar2 = fVar2 + DAT_007372b0;
    }
  }
  fVar2 = ABS(fVar2);
  cVar3 = FUN_0043a2e0();
  if ((cVar3 == '\0') || (*(int *)(unaff_ESI + 0x1c) < 3)) {
    if (fVar2 <= fVar1) {
      return (float10)fVar2;
    }
  }
  else {
    fVar4 = (float10)FUN_00443d60(*(undefined4 *)(unaff_ESI + 0x2c8),param_1);
    fVar5 = (float10)FUN_00443d60(*(undefined4 *)(unaff_ESI + 0x2cc),param_1);
    fVar5 = ABS(fVar5);
    if ((float10)(float)ABS(fVar4) < fVar5) {
      fVar5 = (float10)(float)ABS(fVar4);
    }
    if ((float10)fVar2 < fVar5) {
      fVar5 = (float10)fVar2;
    }
    if (fVar5 <= (float10)fVar1) {
      return fVar5;
    }
  }
  return (float10)fVar1;
}

