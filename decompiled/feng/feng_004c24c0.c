/* Decompiled from Speed.exe @ 004c24c0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004c24c0(void)

{
  int iVar1;
  int unaff_ESI;
  
  DAT_00777cb8 = 7;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    FUN_004c13b0(iVar1,1);
  } while (iVar1 < 7);
  *(undefined4 *)(unaff_ESI + 0x1cc) = 1;
  *(undefined1 **)(unaff_ESI + 0x48) = &LAB_004c0600;
  FUN_004c0180();
  *(undefined4 *)(unaff_ESI + 0x1b4) = 2;
  *(undefined1 **)(unaff_ESI + 0x4c) = &LAB_004c06b0;
  FUN_004c0270();
  *(undefined4 *)(unaff_ESI + 0x1d4) = 3;
  *(undefined1 **)(unaff_ESI + 0x50) = &LAB_004c09b0;
  FUN_004c0300();
  *(undefined4 *)(unaff_ESI + 0x1d8) = 4;
  *(undefined1 **)(unaff_ESI + 0x54) = &LAB_004c0740;
  FUN_004c03b0();
  *(undefined4 *)(unaff_ESI + 0x1dc) = 5;
  *(undefined1 **)(unaff_ESI + 0x58) = &LAB_004c07c0;
  FUN_004c0420();
  *(undefined4 *)(unaff_ESI + 0x1e0) = 6;
  *(undefined1 **)(unaff_ESI + 0x5c) = &LAB_004c0840;
  FUN_004c0490();
  *(undefined4 *)(unaff_ESI + 0x1e4) = 7;
  *(undefined1 **)(unaff_ESI + 0x60) = &LAB_004c08c0;
  FUN_004c0500();
  *(undefined4 *)(unaff_ESI + 0x160) = 6;
  *(undefined1 *)(unaff_ESI + 0x21c) = 0;
  return;
}

