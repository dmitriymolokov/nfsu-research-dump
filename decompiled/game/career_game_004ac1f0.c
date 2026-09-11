/* Decompiled from Speed.exe @ 004ac1f0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


int FUN_004ac1f0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_ESI;
  int unaff_EDI;
  
  iVar1 = 0;
  if (0 < *(int *)(unaff_ESI + 0x62cc)) {
    piVar2 = (int *)(unaff_ESI + 0x61dc);
    do {
      if (*piVar2 == unaff_EDI) {
        return iVar1 * 0x10 + 0x61dc + unaff_ESI;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 4;
    } while (iVar1 < *(int *)(unaff_ESI + 0x62cc));
  }
  return 0;
}

