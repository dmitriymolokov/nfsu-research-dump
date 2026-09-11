/* Decompiled from Speed.exe @ 0063db80 */
/* Module: EAGL */
/* Ghidra DecompileAll */


void FUN_0063db80(void)

{
  uint uVar1;
  int iVar2;
  
  if (DAT_0070f48c != 0) {
    uVar1 = 0;
    if (0 < DAT_0070f488) {
      iVar2 = 0;
      do {
        if (*(char *)(iVar2 + DAT_0070f48c) != '\0') {
          FUN_0063d900(~uVar1);
        }
        uVar1 = uVar1 + 1;
        iVar2 = iVar2 + 0x24;
      } while ((int)uVar1 < DAT_0070f488);
    }
    DAT_0070f48c = 0;
    DAT_0070f488 = 0;
    FUN_0063f170(&DAT_0070f46c);
  }
  return;
}

