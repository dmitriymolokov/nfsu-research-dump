/* Decompiled from Speed.exe @ 004f7f60 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f7f60(void)

{
  int iVar1;
  int unaff_EDI;
  
  if ((((*(int *)(unaff_EDI + 0xc) != 0) && (iVar1 = FUN_004f65d0(), iVar1 != 0)) &&
      (iVar1 = FUN_004ffb70(), iVar1 != 0)) ||
     ((DAT_0073578c != 0 && (iVar1 = FUN_004ef050(0xfd5daf49), iVar1 != 0)))) {
    FUN_004f6910(iVar1);
  }
  if (((*(int *)(unaff_EDI + 0xc) == 0) || (iVar1 = FUN_004f65d0(), iVar1 == 0)) ||
     (iVar1 = FUN_004ffb70(), iVar1 == 0)) {
    if (DAT_0073578c == 0) {
      return;
    }
    iVar1 = FUN_004ef050(0xcb86b1f9);
    if (iVar1 == 0) {
      return;
    }
  }
  FUN_004f6910(iVar1);
  return;
}

