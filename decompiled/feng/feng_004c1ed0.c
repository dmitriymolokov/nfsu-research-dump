/* Decompiled from Speed.exe @ 004c1ed0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004c1ed0(void)

{
  int iVar1;
  int unaff_ESI;
  
  DAT_00777cb8 = 4;
  FUN_004c13b0(1,1);
  FUN_004c13b0(2,0);
  FUN_004c1470(unaff_ESI);
  *(undefined4 *)(unaff_ESI + 0x1a4) = 1;
  *(undefined1 **)(unaff_ESI + 0x48) = &LAB_004bf4a0;
  FUN_004bf180();
  *(undefined4 *)(unaff_ESI + 0x1a8) = 2;
  *(undefined1 **)(unaff_ESI + 0x4c) = &LAB_004bf770;
  FUN_004bf270();
  if (DAT_007361c4 == 1) {
    iVar1 = FUN_004cd610();
    if (((&DAT_007361b4)[iVar1] == 0) || (*(char *)((&DAT_007361b4)[iVar1] + 0x24) != '\x02'))
    goto LAB_004c1fa6;
    FUN_004c13b0(3,1);
    FUN_004c1470(unaff_ESI);
    *(undefined4 *)(unaff_ESI + 0x1b0) = 3;
    *(undefined1 **)(unaff_ESI + 0x50) = &LAB_004bf580;
    FUN_004bf2d0();
    if ((DAT_0078a344 != '\0') || (DAT_007361a8 != 0)) goto LAB_004c1fe2;
    FUN_004c13b0(4,1);
    FUN_004c1470(unaff_ESI);
    *(undefined4 *)(unaff_ESI + 0x1b4) = 4;
    *(undefined1 **)(unaff_ESI + 0x54) = &LAB_004bf610;
  }
  else {
LAB_004c1fa6:
    if ((DAT_0078a344 != '\0') || (DAT_007361a8 != 0)) goto LAB_004c1fe2;
    FUN_004c13b0(3,1);
    FUN_004c1470(unaff_ESI);
    *(undefined4 *)(unaff_ESI + 0x1b4) = 3;
    *(undefined1 **)(unaff_ESI + 0x50) = &LAB_004bf610;
  }
  FUN_004bf380();
LAB_004c1fe2:
  *(undefined4 *)(unaff_ESI + 0x160) = 5;
  *(undefined1 *)(unaff_ESI + 0x21c) = 0;
  return;
}

