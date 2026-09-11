/* Decompiled from Speed.exe @ 00536570 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00536570(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00685249;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x3498),0x130,8,FUN_0040a880);
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_((void *)(param_1 + 4),0x130,0x2c,FUN_0040a880);
  ExceptionList = local_c;
  return;
}

