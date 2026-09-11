/* Decompiled from Speed.exe @ 005377b0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void __fastcall FUN_005377b0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00684d08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006bdfb0;
  local_4 = 0;
  _eh_vector_destructor_iterator_(param_1 + 0x10,0x2e0,2,(_func_void_void_ptr *)&LAB_00537580);
  *param_1 = &PTR_LAB_006bdd40;
  ExceptionList = local_c;
  return;
}

