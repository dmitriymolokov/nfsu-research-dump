/* Decompiled from Speed.exe @ 00548cc0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00548cc0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  DAT_0073fe88 = 0x72;
  iVar2 = 0;
  do {
    cVar1 = "reliable"[iVar2 + 1];
    (&DAT_0073fe89)[iVar2] = cVar1;
    iVar2 = iVar2 + 1;
  } while (cVar1 != '\0');
  DAT_00740090 = 0x75;
  iVar2 = 0;
  do {
    cVar1 = "unreliable"[iVar2 + 1];
    (&DAT_00740091)[iVar2] = cVar1;
    iVar2 = iVar2 + 1;
  } while (cVar1 != '\0');
  DAT_0073fc80 = 0x43;
  iVar2 = 0;
  do {
    cVar1 = "Combined"[iVar2 + 1];
    (&DAT_0073fc81)[iVar2] = cVar1;
    iVar2 = iVar2 + 1;
  } while (cVar1 != '\0');
  do {
    uVar5 = FUN_00548e30();
    pcVar4 = (char *)((ulonglong)uVar5 >> 0x20);
    cVar1 = *(char *)uVar5;
    *pcVar4 = cVar1;
    if (cVar1 != '\0') {
      pcVar3 = pcVar4;
      do {
        cVar1 = pcVar3[(int)((char *)uVar5 + (1 - (int)pcVar4))];
        pcVar3 = pcVar3 + 1;
        *pcVar3 = cVar1;
      } while (cVar1 != '\0');
    }
  } while ((int)(pcVar4 + 0x204) < 0x73fc7c);
  return;
}

