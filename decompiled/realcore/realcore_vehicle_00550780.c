/* Decompiled from Speed.exe @ 00550780 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_00550780(void)

{
  bool bVar1;
  char in_AL;
  int unaff_ESI;
  
  *(char *)(unaff_ESI + 0x20) = in_AL;
  if ((*(int *)(unaff_ESI + 0x1c) == 1) && (in_AL == '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    FUN_004f6970();
  }
  else {
    FUN_004f6910(*(undefined4 *)(unaff_ESI + 0x14));
  }
  if ((*(int *)(unaff_ESI + 0x1c) == 1) || (*(char *)(unaff_ESI + 0x20) != '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    FUN_004f6970();
  }
  else {
    FUN_004f6910(*(undefined4 *)(unaff_ESI + 8));
  }
  if (*(char *)(unaff_ESI + 0x20) == '\0') {
    FUN_004f6910(*(undefined4 *)(unaff_ESI + 0xc));
  }
  else {
    FUN_004f6970();
  }
  if (*(char *)(unaff_ESI + 0x20) == '\0') {
    FUN_004f6970();
  }
  else {
    FUN_004f6910(*(undefined4 *)(unaff_ESI + 0x10));
  }
  if (*(char *)(unaff_ESI + 0x20) != '\0') {
    FUN_004f6970();
    return;
  }
  FUN_004f6910(*(undefined4 *)(unaff_ESI + 0x18));
  return;
}

