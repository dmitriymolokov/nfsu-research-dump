/* Decompiled from Speed.exe @ 00539d80 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_00539d80(void)

{
  int unaff_ESI;
  
  if (*(void **)(unaff_ESI + 0x2b4) != (void *)0x0) {
    _free(*(void **)(unaff_ESI + 0x2b4));
    *(undefined4 *)(unaff_ESI + 0x2b4) = 0;
  }
  if (*(void **)(unaff_ESI + 0x2b0) != (void *)0x0) {
    _free(*(void **)(unaff_ESI + 0x2b0));
    *(undefined4 *)(unaff_ESI + 0x2b0) = 0;
  }
  *(undefined4 *)(unaff_ESI + 0x224) = 0;
  *(undefined4 *)(unaff_ESI + 0x220) = 0;
  *(undefined4 *)(unaff_ESI + 0x22c) = 0;
  return;
}

