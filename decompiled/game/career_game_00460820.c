/* Decompiled from Speed.exe @ 00460820 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00460820(void)

{
  int unaff_ESI;
  
  *(undefined ***)(unaff_ESI + 0x3c) = &PTR_FUN_006b968c;
  _free(*(void **)(unaff_ESI + 0x6c));
  *(undefined ***)(unaff_ESI + 0x3c) = &PTR_FUN_006b9694;
  if (*(void **)(unaff_ESI + 0x4c) != (void *)(unaff_ESI + 0x50)) {
    _free(*(void **)(unaff_ESI + 0x4c));
  }
  *(undefined ***)(unaff_ESI + 0x3c) = &PTR_LAB_006c7d78;
  *(undefined ***)(unaff_ESI + 8) = &PTR_FUN_006b968c;
  _free(*(void **)(unaff_ESI + 0x38));
  *(undefined ***)(unaff_ESI + 8) = &PTR_FUN_006b9694;
  if (*(void **)(unaff_ESI + 0x18) != (void *)(unaff_ESI + 0x1c)) {
    _free(*(void **)(unaff_ESI + 0x18));
  }
  *(undefined ***)(unaff_ESI + 8) = &PTR_LAB_006c7d78;
  return;
}

