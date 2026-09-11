/* Decompiled from Speed.exe @ 0055b940 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_0055b940(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00688128;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_006bca18;
  local_4 = 0;
  DAT_00734bc8 = 0;
  _eh_vector_destructor_iterator_(param_1 + 0x17,0xc,0x20,FUN_00504010);
  *param_1 = &PTR_LAB_006bca48;
  local_4 = 0xffffffff;
  DAT_00734bc8 = 0;
  FUN_004f7b50();
  ExceptionList = local_c;
  return;
}

