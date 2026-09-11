/* Decompiled from Speed.exe @ 00421e80 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00421e80(void)

{
  char cVar1;
  int unaff_ESI;
  int iVar2;
  
  FUN_00571ea0(0,"RaceCoordinator");
  FUN_0041fc00(DAT_007361f8);
  FUN_004343f0();
  iVar2 = 0;
  if (0 < DAT_007361c4) {
    do {
      FUN_0042bd60((&DAT_007361bc)[iVar2],unaff_ESI);
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_007361c4);
  }
  iVar2 = *(char *)(unaff_ESI + 0x40) * 0x10 + 0x4c + unaff_ESI;
  *(int *)(iVar2 + 0xc) = *(int *)(unaff_ESI + 0x150) - *(int *)(iVar2 + 0xc);
  cVar1 = *(char *)(unaff_ESI + 0x40) + -1;
  *(char *)(unaff_ESI + 0x40) = cVar1;
  if ((int)cVar1 < *(int *)(unaff_ESI + 0x44)) {
    *(undefined4 *)(unaff_ESI + 0x44) = 0xffffffff;
  }
  return;
}

