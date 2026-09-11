/* Decompiled from Speed.exe @ 00592c50 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_00592c50(void)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EDI + 0x10) = *(undefined4 *)(unaff_EDI + 8);
  if (DAT_00779c70 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = DAT_00779c70 + -4;
  }
  iVar1 = FUN_0040cb70();
  while (iVar2 != iVar1) {
    if ((*(char *)(iVar2 + 0x16) != '\0') && (*(char *)(iVar2 + 0x1d) != '\0')) {
      FUN_00593170(unaff_EDI,iVar2,0);
    }
    if (*(int *)(iVar2 + 4) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 4) + -4;
    }
  }
  return;
}

