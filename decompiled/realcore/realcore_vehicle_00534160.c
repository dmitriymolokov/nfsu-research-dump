/* Decompiled from Speed.exe @ 00534160 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_00534160(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006852c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006be2c8;
  local_4 = 0;
  FUN_00534390();
  *param_1 = &PTR_LAB_006be7c4;
  ExceptionList = local_c;
  return;
}

