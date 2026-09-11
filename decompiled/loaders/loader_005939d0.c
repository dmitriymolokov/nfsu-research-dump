/* Decompiled from Speed.exe @ 005939d0 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005939d0(void)

{
  void *_Memory;
  
  if (DAT_007344a8 != (void *)0x0) {
    _Memory = (void *)((int)DAT_007344a8 + -4);
    _eh_vector_destructor_iterator_
              (DAT_007344a8,0x10,*(int *)((int)DAT_007344a8 + -4),
               (_func_void_void_ptr *)&LAB_00593970);
    _free(_Memory);
  }
  DAT_007344a8 = (void *)0x0;
  _DAT_007344ac = 0;
  FUN_00593980();
  FUN_00567220();
  DAT_007344b0 = 0;
  return;
}

