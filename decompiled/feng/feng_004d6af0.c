/* Decompiled from Speed.exe @ 004d6af0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004d6af0(int param_1)

{
  int iVar1;
  
  iVar1 = _DAT_007588e4;
  if (DAT_0072cd08 == 1) {
    iVar1 = _DAT_007588e8;
  }
  if (param_1 == -0x6edfbf62) {
    iVar1 = iVar1 + 1;
    if (4 < iVar1) {
      iVar1 = 0;
    }
  }
  else if ((param_1 == -0x4a68e40f) && (iVar1 = iVar1 + -1, iVar1 < 0)) {
    iVar1 = 4;
  }
  if (DAT_0072cd08 == 0) {
    _DAT_007588e4 = iVar1;
    FUN_004d6960();
    return;
  }
  _DAT_007588e8 = iVar1;
  FUN_004d6960();
  return;
}

