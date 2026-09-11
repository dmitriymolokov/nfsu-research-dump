/* Decompiled from Speed.exe @ 00490530 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00490530(void)

{
  void *pvVar1;
  int extraout_EDX;
  
  FUN_00490730();
  pvVar1 = *(void **)(extraout_EDX + 0xc);
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0xc0,*(int *)((int)pvVar1 + -0x10),FUN_00401db0);
    _free((void *)((int)pvVar1 + -0x10));
  }
  return;
}

