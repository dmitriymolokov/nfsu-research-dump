/* Decompiled from Speed.exe @ 004ac060 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


int * FUN_004ac060(void)

{
  int iVar1;
  int *piVar2;
  int *unaff_ESI;
  int iVar3;
  
  if (DAT_00777b4c == 8) {
    iVar3 = unaff_ESI[1];
  }
  else {
    iVar3 = *unaff_ESI;
  }
  iVar1 = 0;
  if (0 < unaff_ESI[0x1876]) {
    piVar2 = unaff_ESI + 0x8df;
    do {
      if (*piVar2 == iVar3) {
        return unaff_ESI + iVar1 * 0xd2 + 0x80e;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0xd2;
    } while (iVar1 < unaff_ESI[0x1876]);
  }
  return (int *)0x0;
}

