/* Decompiled from Speed.exe @ 004a9d00 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004a9d00(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00684f8b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  _eh_vector_destructor_iterator_((void *)(param_1 + 0xf954),0xf944,2,FUN_004a9d60);
  local_4 = 0xffffffff;
  FUN_004a9d70(param_1 + 0x6644);
  ExceptionList = local_c;
  return;
}

