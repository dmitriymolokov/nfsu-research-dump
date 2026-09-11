/* Decompiled from Speed.exe @ 004d0030 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004d0030(int param_1)

{
  int iVar1;
  
  FUN_004f68c0(0x20,"%s%1d",param_1 + 0x42c,*(undefined4 *)(param_1 + 0x3c0));
  iVar1 = FUN_0059fb80();
  if (iVar1 == 0) {
    iVar1 = FUN_0059fb80();
  }
  FUN_004f67f0(iVar1);
  FUN_004f68c0(0x20,"OptionData_%1d",*(undefined4 *)(param_1 + 0x3c0));
  if ((DAT_00758964 == 0) || (DAT_00758964 == 1)) {
    iVar1 = FUN_0059fb80();
    if (iVar1 == 0) {
      iVar1 = FUN_0059fb80();
    }
    FUN_004f67f0(iVar1);
  }
  return;
}

