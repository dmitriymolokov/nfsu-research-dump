/* Decompiled from Speed.exe @ 004ee160 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004ee160(void)

{
  uint uVar1;
  int unaff_ESI;
  
  *(byte *)(unaff_ESI + 0x52) = *(byte *)(unaff_ESI + 0x52) ^ 1;
  *(undefined1 *)(unaff_ESI + 0x51) = 0;
  if (*(int *)(unaff_ESI + 0x20c) == 3) {
    *(undefined1 *)(unaff_ESI + 0x52) = 1;
    *(undefined1 *)(unaff_ESI + 0x51) = 0;
  }
  FUN_004ed930(unaff_ESI);
  if (DAT_006f8ae0 != 0x13) {
    uVar1 = 0;
    do {
      if (*(int *)((int)&DAT_006f8a48 + uVar1) == 0x13) break;
      uVar1 = uVar1 + 8;
    } while (uVar1 < 0x70);
  }
  FUN_004cd180(0);
  return;
}

