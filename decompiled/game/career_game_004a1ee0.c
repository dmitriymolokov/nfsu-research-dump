/* Decompiled from Speed.exe @ 004a1ee0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a1ee0(void)

{
  int unaff_ESI;
  char *pcVar1;
  
  if (*(char *)(unaff_ESI + 0x28) == '\0') {
    *(undefined4 *)(unaff_ESI + 0x2c) = DAT_0073ad34;
    if ((float)*(int *)(unaff_ESI + 0x34) * _DAT_006cca38 <= DAT_006cc7a4) {
      pcVar1 = "ZoominGreen";
    }
    else {
      pcVar1 = "ZoominRed";
    }
    FUN_004f6b70(pcVar1,1);
    FUN_004f6970(*(undefined4 *)(unaff_ESI + 0x20));
    *(undefined1 *)(unaff_ESI + 0x28) = 1;
  }
  return;
}

