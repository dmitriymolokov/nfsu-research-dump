/* Decompiled from Speed.exe @ 0050fee0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_0050fee0(void)

{
  int iVar1;
  int unaff_EBX;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 0x40);
  if (unaff_EBX == -0x6edfbf62) {
    if ((iVar1 != *(int *)(unaff_EDI + 0x44)) && (*(int *)(unaff_EDI + 0x44) != unaff_EDI + 0x44)) {
      *(undefined4 *)(unaff_EDI + 0x40) = *(undefined4 *)(iVar1 + 4);
    }
  }
  else if (((unaff_EBX == -0x4a68e40f) &&
           (*(undefined4 **)(unaff_EDI + 0x40) != *(undefined4 **)(unaff_EDI + 0x48))) &&
          (*(int *)(unaff_EDI + 0x44) != unaff_EDI + 0x44)) {
    *(undefined4 *)(unaff_EDI + 0x40) = **(undefined4 **)(unaff_EDI + 0x40);
  }
  if (iVar1 != *(int *)(unaff_EDI + 0x40)) {
    FUN_004f8910();
    FUN_0050ff80(unaff_EDI);
    if (unaff_EBX == -0x6edfbf62) {
      FUN_004f8340(*(undefined4 *)(unaff_EDI + 0xc));
      return;
    }
    FUN_004f8340(*(undefined4 *)(unaff_EDI + 0xc));
  }
  return;
}

