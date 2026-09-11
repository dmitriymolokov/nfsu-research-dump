/* Decompiled from Speed.exe @ 00456a80 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00456a80(float param_1)

{
  float fVar1;
  float fVar2;
  int unaff_ESI;
  float *unaff_EDI;
  
  FUN_00564bd0();
  fVar1 = *(float *)(unaff_ESI + 0x68);
  fVar2 = *(float *)(unaff_ESI + 0x60);
  if (param_1 < _DAT_006cc954) {
    param_1 = _DAT_006cc954;
  }
  unaff_EDI[1] = param_1 * 0.0 + *(float *)(unaff_ESI + 100);
  *unaff_EDI = param_1 * 0.0 + fVar2;
  unaff_EDI[2] = param_1 * 0.0 + fVar1;
  return;
}

