/* Decompiled from Speed.exe @ 004c22c0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004c22c0(void)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    FUN_004c13b0(iVar1,1);
  } while (iVar1 < 4);
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    FUN_004c1470(unaff_ESI);
  } while (iVar1 < 4);
  *(undefined4 *)(unaff_ESI + 0x1c4) = 1;
  *(undefined1 **)(unaff_ESI + 0x48) = &LAB_004bff40;
  FUN_004bfaa0();
  *(undefined4 *)(unaff_ESI + 0x1b8) = 2;
  *(undefined1 **)(unaff_ESI + 0x4c) = &LAB_004bfcb0;
  FUN_004bf7d0();
  *(undefined4 *)(unaff_ESI + 0x1c0) = 3;
  *(undefined1 **)(unaff_ESI + 0x50) = &LAB_004bfe70;
  FUN_004bf9b0();
  *(undefined4 *)(unaff_ESI + 0x1bc) = 4;
  *(undefined1 **)(unaff_ESI + 0x54) = &LAB_004bfd90;
  FUN_004bf8c0();
  if (DAT_0078a320 == 1) {
    FUN_004c13b0(5,1);
    FUN_004c1470(unaff_ESI);
    *(undefined4 *)(unaff_ESI + 0x1c8) = 5;
    *(undefined1 **)(unaff_ESI + 0x58) = &LAB_004c0090;
    FUN_004bfbc0();
    return;
  }
  return;
}

