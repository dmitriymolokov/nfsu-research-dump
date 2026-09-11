/* Decompiled from Speed.exe @ 00464ed0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00464ed0(undefined4 param_1)

{
  short sVar1;
  int unaff_ESI;
  float10 fVar2;
  
  sVar1 = FUN_00564db0(*(undefined4 *)(unaff_ESI + 0x30),*(undefined4 *)(unaff_ESI + 0x34),param_1);
  fVar2 = (float10)(ushort)(*(short *)(unaff_ESI + 0x374) - sVar1) * (float10)_DAT_006cc980;
  if ((float10)_DAT_006cc97c < fVar2) {
    fVar2 = fVar2 - (float10)_DAT_006cc978;
  }
  return fVar2;
}

