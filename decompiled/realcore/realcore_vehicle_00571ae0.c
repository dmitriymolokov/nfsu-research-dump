/* Decompiled from Speed.exe @ 00571ae0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_00571ae0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  
  iVar3 = *(int *)(param_1 + 0x150);
  if (iVar3 + param_3 < 0x9400) {
    iVar2 = 0;
    cVar4 = '\0';
    if (0 < param_3) {
      do {
        cVar4 = *(char *)(iVar2 + param_2);
        *(char *)(iVar3 + 0x158 + param_1) = cVar4;
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_3);
    }
    if (iVar2 < param_4) {
      cVar5 = '\0';
      if (param_5 != 0) {
        cVar5 = cVar4 >> 7;
      }
      do {
        if (*(char *)(iVar2 + param_2) != cVar5) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_4);
    }
  }
  else if (*(char *)(param_1 + 0x41) == '\0') {
    *(undefined1 *)(param_1 + 0x41) = 1;
    *(int *)(param_1 + 0x150) = iVar3;
    return;
  }
  *(int *)(param_1 + 0x150) = iVar3;
  return;
}

