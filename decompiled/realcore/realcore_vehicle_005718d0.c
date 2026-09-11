/* Decompiled from Speed.exe @ 005718d0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void __fastcall FUN_005718d0(int param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  
  if (-1 < param_1) {
    iVar3 = 0;
    cVar2 = DAT_006f1a18;
    while (cVar2 != '\0') {
      pcVar1 = &DAT_006f1a19 + iVar3;
      iVar3 = iVar3 + 1;
      cVar2 = *pcVar1;
    }
    if (iVar3 + -1 < param_1) {
      param_1 = 0;
      cVar2 = DAT_006f1a18;
      while (cVar2 != '\0') {
        pcVar1 = &DAT_006f1a19 + param_1;
        param_1 = param_1 + 1;
        cVar2 = *pcVar1;
      }
      param_1 = param_1 + -1;
    }
    (&DAT_006f1a18)[param_1] = 0x20;
  }
  return;
}

