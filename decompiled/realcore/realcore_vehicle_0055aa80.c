/* Decompiled from Speed.exe @ 0055aa80 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_0055aa80(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006876a3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006bca5c;
  local_4 = 1;
  DAT_00734bc8 = 0;
  _eh_vector_destructor_iterator_(param_1 + 0x99,0xc,0x20,FUN_00504010);
  local_4 = local_4 & 0xffffff00;
  _eh_vector_destructor_iterator_(param_1 + 0x17,0xc,0x20,FUN_00504010);
  local_4 = 0xffffffff;
  FUN_004f7b50();
  ExceptionList = local_c;
  return;
}

