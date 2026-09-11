/* Decompiled from Speed.exe @ 00577010 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_00577010(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_0073b14c == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = DAT_0073b14c + -4;
  }
  iVar1 = FUN_0040cb70();
  while (iVar2 != iVar1) {
    FUN_005772f0(iVar2);
    if (*(int *)(iVar2 + 4) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 4) + -4;
    }
  }
  FUN_00564990(&DAT_0073b14c,&LAB_00576e70);
  return;
}

