/* Decompiled from Speed.exe @ 00536450 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_00536450(undefined4 param_1)

{
  int iVar1;
  int unaff_ESI;
  
  FUN_005326f0(param_1);
  FUN_005326f0(param_1);
  if (*(char *)(unaff_ESI + 0x128) == '\0') {
    FUN_00674898();
  }
  iVar1 = FUN_00674898();
  *(int *)(unaff_ESI + 4) = iVar1;
  if (iVar1 < 0x8000) {
    if ((iVar1 < 0x7fff) && (*(char *)(unaff_ESI + 300) != '\0')) {
      *(undefined1 *)(unaff_ESI + 300) = 0;
    }
  }
  else {
    *(undefined4 *)(unaff_ESI + 4) = 0x7fff;
    if (*(char *)(unaff_ESI + 300) == '\0') {
      *(undefined1 *)(unaff_ESI + 300) = 1;
      return;
    }
  }
  return;
}

