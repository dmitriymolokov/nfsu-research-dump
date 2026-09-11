/* Decompiled from Speed.exe @ 00460370 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00460370(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006868a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006c8b90;
  local_4 = 1;
  FUN_00460560();
  local_4 = local_4 & 0xffffff00;
  FUN_00460f50(param_1 + 0x94);
  local_4 = 0xffffffff;
  FUN_0045e080(param_1);
  ExceptionList = local_c;
  return;
}

