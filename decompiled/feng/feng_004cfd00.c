/* Decompiled from Speed.exe @ 004cfd00 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004cfd00(void)

{
  int iVar1;
  int unaff_EBX;
  
  FUN_004f68c0(0x20,"%s%1d",unaff_EBX + 0x42c);
  iVar1 = FUN_0059fb80();
  if (iVar1 == 0) {
    iVar1 = FUN_0059fb80();
  }
  FUN_004f67f0(iVar1);
  FUN_004f68c0(0x20,"OptionData_%1d");
  iVar1 = *(int *)(&DAT_00758938 + DAT_00758948 * 4);
  if (((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) {
    iVar1 = FUN_0059fb80();
    if (iVar1 == 0) {
      iVar1 = FUN_0059fb80();
    }
    FUN_004f67f0(iVar1);
  }
  return;
}

