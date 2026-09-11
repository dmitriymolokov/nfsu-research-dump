/* Decompiled from Speed.exe @ 004abaa0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004abaa0(void)

{
  int iVar1;
  int iVar2;
  int *unaff_ESI;
  
  iVar1 = *unaff_ESI;
  iVar2 = FUN_004ab880(unaff_ESI);
  if (unaff_ESI[0xbaf7] == 1) {
    if (*(int *)(unaff_ESI[0xbb57] + 0x58a0) == 0) goto LAB_004abb12;
    unaff_ESI[0x7c93] = unaff_ESI[0x7c93] + 1;
  }
  else {
    unaff_ESI[0x7c93] = unaff_ESI[0x7c93] + 1;
  }
  if (iVar2 != -1) {
    unaff_ESI[iVar2 * 3 + 0x7c96] = unaff_ESI[iVar2 * 3 + 0x7c96] + 1;
  }
  if (iVar1 != 2) {
    return;
  }
  unaff_ESI[0x7ca2] = unaff_ESI[0x7ca2] + 1;
LAB_004abb12:
  if (iVar1 == 2) {
    unaff_ESI[0xbae4] = unaff_ESI[0xbae4] + 1;
    if (iVar2 != -1) {
      unaff_ESI[iVar2 * 3 + 0xbae7] = unaff_ESI[iVar2 * 3 + 0xbae7] + 1;
    }
    unaff_ESI[0xbaf3] = unaff_ESI[0xbaf3] + 1;
  }
  return;
}

