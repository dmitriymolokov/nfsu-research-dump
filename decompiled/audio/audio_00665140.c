/* Decompiled from Speed.exe @ 00665140 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00665140(undefined4 param_1,int param_2)

{
  char *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_2 + 8);
  iVar5 = *(int *)(param_2 + 4);
  pcVar1 = *(char **)(param_2 + 0xc);
  if (iVar4 == 0) {
    iVar4 = 0x2d2d2d2d;
  }
  if (iVar5 == -1) {
    iVar5 = 0x2a2a2a2a;
    if (iVar4 == -1) {
      iVar4 = 0x636f6e6e;
    }
    else {
      iVar4 = ((iVar4 != -0x1010102) - 1 & 0x373c4636) + 0x2d2d2d2d;
    }
  }
  FUN_00664310("recv: %c%c%c%c/%c%c%c%c\n",iVar5 >> 0x18,iVar5 >> 0x10,iVar5 >> 8,iVar5,
               iVar4 >> 0x18,iVar4 >> 0x10,iVar4 >> 8,iVar4);
  cVar3 = *pcVar1;
  iVar4 = 0;
  bVar2 = false;
  if (cVar3 != '\0') {
    do {
      if (cVar3 == '\x7f') break;
      if ((((cVar3 < ' ') && (cVar3 != '\t')) && (cVar3 != '\n')) && (cVar3 != '\r')) {
        bVar2 = true;
        break;
      }
      cVar3 = pcVar1[iVar4 + 1];
      iVar4 = iVar4 + 1;
    } while (cVar3 != '\0');
    if (iVar4 != 0) {
      if (bVar2) {
        FUN_00664310(" [binary data]\n");
        return;
      }
      if (iVar4 < 0xf1) {
        FUN_00664310(&DAT_006cc580,pcVar1);
        return;
      }
      FUN_00664310(" [long data]\n");
      return;
    }
  }
  FUN_00664310(" [null data]\n");
  return;
}

