/* Decompiled from Speed.exe @ 0046a5b0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileModule */


void FUN_0046a5b0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00685c58;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_006c8630;
  *(undefined4 *)(param_1[0x18] + 0x10) = 0;
  local_8 = 0;
  *(char *)(param_1[0x18] + 8) = *(char *)(param_1[0x18] + 8) + -1;
  DAT_00736014 = DAT_00736014 + -1;
  _eh_vector_destructor_iterator_(param_1 + 0x24,0x30,9,FUN_0040a880);
  *param_1 = &PTR_FUN_006c8720;
  DAT_0073600c = DAT_0073600c + -1;
  local_8 = 0xffffffff;
  FUN_00468410();
  ExceptionList = local_10;
  return;
}

