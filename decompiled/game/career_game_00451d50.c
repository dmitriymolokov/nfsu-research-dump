/* Decompiled from Speed.exe @ 00451d50 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00451d50(void)

{
  int iVar1;
  int iVar2;
  int *unaff_EDI;
  
  iVar1 = *unaff_EDI;
  iVar2 = (((unaff_EDI[1] - iVar1) + -0x27c) / 0x88) * 0x88 + 0x414 + iVar1;
  if (iVar2 == 0) {
    iVar2 = *(short *)(iVar1 + 0x10) * 0x88 + 500 + iVar1;
  }
  FUN_004422b0(0,(float)((int)*(short *)(iVar2 + 0x3c + unaff_EDI[2] * 2) << 8) * _DAT_006cc83c);
  return;
}

