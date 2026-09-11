/* Decompiled from Speed.exe @ 0047bfc0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0047bfc0(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x18) != 0) {
    FUN_00444550();
    FUN_00444550();
    DAT_0077aa6c = 0xffffffff;
    DAT_0077aab0 = 0xffffffff;
    DAT_0077aaf9 = 1;
    FUN_0047b810();
    FUN_0047c4d0(unaff_ESI);
    *(undefined4 *)(unaff_ESI + 0x18) = 0;
  }
  return;
}

