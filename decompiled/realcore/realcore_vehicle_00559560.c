/* Decompiled from Speed.exe @ 00559560 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


uint FUN_00559560(void)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int unaff_ESI;
  
  pcVar1 = (char *)(*(int *)(unaff_ESI + 0x40) + 0x11);
  iVar2 = 0;
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    do {
      iVar2 = iVar2 + 1;
    } while (pcVar1[iVar2] != '\0');
    if (((3 < iVar2) && (iVar2 < 0x11)) && (iVar2 = FUN_00567d30(), iVar2 == 0)) {
      return 1;
    }
  }
  uVar3 = FUN_004eb950();
  return uVar3 & 0xffffff00;
}

