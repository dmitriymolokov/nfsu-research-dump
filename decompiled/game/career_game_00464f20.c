/* Decompiled from Speed.exe @ 00464f20 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00464f20(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *extraout_EDX;
  int unaff_EDI;
  float10 fVar5;
  float10 fVar6;
  
  if (*(char *)(unaff_EDI + 0x420) == '\0') {
    fVar1 = *(float *)(unaff_EDI + 0x30);
    fVar2 = *(float *)(unaff_EDI + 0x34);
    fVar3 = *(float *)(unaff_EDI + 0x38);
    if (*(float *)(unaff_EDI + 0x390) < DAT_006cc7a4) {
      fVar1 = -fVar1;
      fVar2 = -fVar2;
      fVar3 = -fVar3;
    }
    *(float *)(unaff_EDI + 0x3e0) = 1.0;
    *(undefined4 *)(unaff_EDI + 0x3e4) = 0;
    *(undefined4 *)(unaff_EDI + 1000) = 0;
    *(undefined4 *)(unaff_EDI + 0x3ec) = 0;
    *(undefined4 *)(unaff_EDI + 0x3f0) = 0;
    *(undefined4 *)(unaff_EDI + 0x3f4) = 0x3f800000;
    *(undefined4 *)(unaff_EDI + 0x3f8) = 0;
    *(undefined4 *)(unaff_EDI + 0x3fc) = 0;
    *(undefined4 *)(unaff_EDI + 0x400) = 0;
    *(undefined4 *)(unaff_EDI + 0x404) = 0;
    *(undefined4 *)(unaff_EDI + 0x408) = 0x3f800000;
    *(undefined4 *)(unaff_EDI + 0x40c) = 0;
    fVar4 = _DAT_006cc7bc;
    *(undefined4 *)(unaff_EDI + 0x410) = 0;
    *(undefined4 *)(unaff_EDI + 0x414) = 0;
    *(undefined4 *)(unaff_EDI + 0x418) = 0;
    *(undefined4 *)(unaff_EDI + 0x41c) = 0x3f800000;
    if (fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3 <= fVar4) {
      fVar5 = (float10)FUN_00564b10();
      fVar6 = (float10)FUN_00564b10();
      extraout_EDX[2] = 0.0;
      extraout_EDX[3] = 0.0;
      *extraout_EDX = (float)fVar6;
      extraout_EDX[1] = -(float)fVar5;
      *(float *)(unaff_EDI + 0x3f0) = (float)fVar5;
      *(undefined4 *)(unaff_EDI + 0x3f8) = 0;
      *(float *)(unaff_EDI + 0x3f4) = (float)fVar6;
      *(undefined4 *)(unaff_EDI + 0x3fc) = 0;
      *(undefined4 *)(unaff_EDI + 0x400) = 0;
      *(undefined4 *)(unaff_EDI + 0x404) = 0;
      *(undefined4 *)(unaff_EDI + 0x408) = 0x3f800000;
      *(undefined4 *)(unaff_EDI + 0x40c) = 0;
      *(undefined4 *)(unaff_EDI + 0x41c) = 0x3f800000;
    }
    else {
      *(undefined4 *)(unaff_EDI + 1000) = 0;
      *(undefined4 *)(unaff_EDI + 0x3ec) = 0;
      *(float *)(unaff_EDI + 0x3e0) = fVar2;
      *(float *)(unaff_EDI + 0x3e4) = -fVar1;
      *(float *)(unaff_EDI + 0x3f4) = fVar2;
      *(undefined4 *)(unaff_EDI + 0x3f8) = 0;
      *(float *)(unaff_EDI + 0x3f0) = fVar1;
      *(undefined4 *)(unaff_EDI + 0x3fc) = 0;
      *(undefined4 *)(unaff_EDI + 0x400) = 0;
      *(undefined4 *)(unaff_EDI + 0x404) = 0;
      *(undefined4 *)(unaff_EDI + 0x408) = 0x3f800000;
      *(undefined4 *)(unaff_EDI + 0x40c) = 0;
      *(undefined4 *)(unaff_EDI + 0x41c) = 0x3f800000;
    }
    *(undefined4 *)(unaff_EDI + 0x418) = 0;
    *(undefined4 *)(unaff_EDI + 0x414) = 0;
    *(undefined4 *)(unaff_EDI + 0x410) = 0;
    FUN_0040bd40();
    *(undefined1 *)(unaff_EDI + 0x420) = 1;
  }
  return unaff_EDI + 0x3e0;
}

