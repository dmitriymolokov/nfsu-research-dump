/* Decompiled from Speed.exe @ 00522750 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void __fastcall FUN_00522750(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00684b0f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006bf3f0;
  param_1[8] = &PTR_LAB_006bf3c4;
  local_4 = 1;
  _eh_vector_destructor_iterator_(param_1 + 0xab,0x7c,6,FUN_0040a880);
  param_1[8] = &PTR_LAB_006be7c4;
  *param_1 = &PTR_LAB_006bf478;
  ExceptionList = local_c;
  return;
}

