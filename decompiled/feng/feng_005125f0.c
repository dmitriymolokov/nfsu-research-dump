/* Decompiled from Speed.exe @ 005125f0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_005125f0(void)

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
    FUN_00512690(unaff_EDI);
    FUN_004f8340(*(undefined4 *)(unaff_EDI + 0xc));
    *(undefined1 *)(unaff_EDI + 0x93) = 1;
    DAT_0073575c = 0;
  }
  return;
}

