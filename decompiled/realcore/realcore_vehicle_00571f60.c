/* Decompiled from Speed.exe @ 00571f60 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


int __fastcall FUN_00571f60(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar3 = 0;
  iVar5 = 0;
  if (-1 < *(char *)(param_1 + 0x40)) {
    puVar6 = (undefined4 *)(param_1 + 0x4c);
    do {
      if (iVar5 != 0) {
        iVar3 = iVar3 + 1;
      }
      pcVar2 = (char *)*puVar6;
      iVar4 = 0;
      if (pcVar2 != (char *)0x0) {
        cVar1 = *pcVar2;
        while (cVar1 != '\0') {
          iVar4 = iVar4 + 1;
          cVar1 = pcVar2[iVar4];
        }
      }
      iVar3 = iVar3 + iVar4;
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 4;
    } while (iVar5 <= *(char *)(param_1 + 0x40));
  }
  return iVar3;
}

