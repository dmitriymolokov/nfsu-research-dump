/* Decompiled from Speed.exe @ 005594e0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


uint FUN_005594e0(void)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int unaff_ESI;
  
  pcVar2 = *(char **)(unaff_ESI + 0x40);
  iVar3 = 0;
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    do {
      iVar1 = iVar3 + 1;
      iVar3 = iVar3 + 1;
    } while (pcVar2[iVar1] != '\0');
    if ((3 < iVar3) && (iVar3 < 0x11)) {
      return CONCAT31((int3)((uint)iVar3 >> 8),1);
    }
  }
  uVar4 = FUN_004eb950();
  return uVar4 & 0xffffff00;
}

