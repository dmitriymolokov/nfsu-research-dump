/* Decompiled from Speed.exe @ 004edad0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004edad0(void)

{
  int unaff_ESI;
  undefined1 local_40 [64];
  
  *(uint *)(*(int *)(unaff_ESI + 0x54) + 0x1c) = *(uint *)(*(int *)(unaff_ESI + 0x54) + 0x1c) | 2;
  if (*(int *)(unaff_ESI + 0x20c) == 2) {
    FUN_004fa0b0(0x40);
    FUN_0041f060(*(undefined4 *)(unaff_ESI + 0x54),local_40);
    return;
  }
  FUN_0041f060(*(undefined4 *)(unaff_ESI + 0x54),*(undefined4 *)(unaff_ESI + 0x1fc));
  return;
}

