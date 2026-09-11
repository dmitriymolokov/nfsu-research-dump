/* Decompiled from Speed.exe @ 00589810 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_00589810(void)

{
  int iVar1;
  int unaff_EDI;
  
  if (((&DAT_00731120)[*(int *)(unaff_EDI + 0x38)] != 0) &&
     (FUN_0040be70(), *(int *)(unaff_EDI + 0xf0) != 1 && -1 < *(int *)(unaff_EDI + 0xf0) + -1)) {
    iVar1 = 0;
    do {
      FUN_00589350();
      FUN_00589350();
      FUN_0040c300((&DAT_00731120)[*(int *)(unaff_EDI + 0x38)],&DAT_0078bcc0,0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(unaff_EDI + 0xf0) + -1);
  }
  return;
}

