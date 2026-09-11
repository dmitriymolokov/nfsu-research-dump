/* Decompiled from Speed.exe @ 005832a0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005832a0(void)

{
  char *pcVar1;
  int unaff_EDI;
  
  if (*(char *)(unaff_EDI + 0x4d2) == '\0') {
    pcVar1 = (char *)(*(int *)(*(int *)(unaff_EDI + 4) + 0x3c) + 0x1b);
    *pcVar1 = *pcVar1 + '\x01';
    *(undefined1 *)(*(int *)(unaff_EDI + 4) + 0x4d0) = 0;
    FUN_00426110();
    *(undefined1 *)(unaff_EDI + 0x4d2) = 1;
  }
  return;
}

