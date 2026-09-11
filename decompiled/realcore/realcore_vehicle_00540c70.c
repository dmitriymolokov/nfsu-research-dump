/* Decompiled from Speed.exe @ 00540c70 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_00540c70(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar1 = DAT_00735538 + 1;
  if (0 < iVar1) {
    iVar5 = DAT_0073553c + 1;
    puVar4 = &DAT_00740b50;
    do {
      puVar2 = puVar4;
      iVar3 = iVar5;
      if (0 < iVar5) {
        do {
          *puVar2 = 0;
          iVar3 = iVar3 + -1;
          puVar2 = puVar2 + 0xc;
        } while (iVar3 != 0);
      }
      puVar4 = puVar4 + 0x78;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

