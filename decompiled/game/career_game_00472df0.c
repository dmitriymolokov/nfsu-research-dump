/* Decompiled from Speed.exe @ 00472df0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00472df0(void)

{
  void *pvVar1;
  int unaff_ESI;
  
  pvVar1 = *(void **)(unaff_ESI + 0x54);
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x30,*(int *)((int)pvVar1 + -0x10),FUN_0040a880);
    _free((void *)((int)pvVar1 + -0x10));
  }
  _free(*(void **)(unaff_ESI + 0x50));
  *(undefined4 *)(unaff_ESI + 0x54) = 0;
  *(undefined4 *)(unaff_ESI + 0x50) = 0;
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined2 *)(unaff_ESI + 0x3c) = 0;
  return;
}

