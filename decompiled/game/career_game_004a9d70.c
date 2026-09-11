/* Decompiled from Speed.exe @ 004a9d70 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004a9d70(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00684f6e;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x13a8),0x454,0x1b,FUN_0040a880);
  *(undefined ***)(param_1 + 0x44c) = &PTR_LAB_006c6434;
  ExceptionList = local_c;
  return;
}

