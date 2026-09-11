/* Decompiled from Speed.exe @ 0058d0d0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_0058d0d0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006855e8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x110),0x18,2,FUN_0042ac80);
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_((void *)(param_1 + 0xe0),0x18,2,FUN_0042ac80);
  ExceptionList = local_c;
  return;
}

