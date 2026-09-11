/* Decompiled from Speed.exe @ 004ac0b0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


int FUN_004ac0b0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_ESI;
  int unaff_EDI;
  
  iVar1 = 0;
  if (0 < *(int *)(unaff_ESI + 0x61d8)) {
    piVar2 = (int *)(unaff_ESI + 0x237c);
    do {
      if (*piVar2 == unaff_EDI) {
        return iVar1 * 0x348 + 0x2038 + unaff_ESI;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0xd2;
    } while (iVar1 < *(int *)(unaff_ESI + 0x61d8));
  }
  return 0;
}

