/* Decompiled from Speed.exe @ 0055c4e0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_0055c4e0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00688528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_006bc99c;
  local_4 = 0;
  DAT_00734bc8 = 0;
  _eh_vector_destructor_iterator_(param_1 + 0x1e,0x208,4,FUN_0041f140);
  local_4 = 0xffffffff;
  FUN_004f7b50();
  ExceptionList = local_c;
  return;
}

