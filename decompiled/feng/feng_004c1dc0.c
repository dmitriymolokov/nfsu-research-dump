/* Decompiled from Speed.exe @ 004c1dc0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004c1dc0(void)

{
  int iVar1;
  int unaff_ESI;
  
  DAT_00777cb8 = 2;
  if ((DAT_0078a344 == '\0') && (DAT_007361a8 == 0)) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      FUN_004c13b0(iVar1,1);
    } while (iVar1 < 2);
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      FUN_004c1470(unaff_ESI);
    } while (iVar1 < 2);
    *(undefined4 *)(unaff_ESI + 400) = 1;
    *(undefined1 **)(unaff_ESI + 0x48) = &LAB_004beca0;
    FUN_004be9a0();
    *(undefined4 *)(unaff_ESI + 0x198) = 2;
    *(undefined1 **)(unaff_ESI + 0x4c) = &LAB_004beec0;
    FUN_004beb80();
    *(undefined4 *)(unaff_ESI + 0x160) = 2;
    return;
  }
  FUN_004c13b0(1,1);
  FUN_004c1470(unaff_ESI);
  *(undefined4 *)(unaff_ESI + 0x194) = 1;
  *(undefined1 **)(unaff_ESI + 0x48) = &LAB_004bedb0;
  FUN_004bead0();
  *(undefined4 *)(unaff_ESI + 0x160) = 2;
  return;
}

