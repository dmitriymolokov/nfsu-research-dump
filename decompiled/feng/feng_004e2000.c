/* Decompiled from Speed.exe @ 004e2000 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004e2000(void)

{
  int iVar1;
  int unaff_EDI;
  
  *(undefined1 *)(unaff_EDI + 0x14) = 0;
  iVar1 = 0;
  do {
    FUN_004f6910(*(undefined4 *)(unaff_EDI + iVar1 * 4));
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  FUN_004f6910(*(undefined4 *)(unaff_EDI + 0xc));
  return;
}

