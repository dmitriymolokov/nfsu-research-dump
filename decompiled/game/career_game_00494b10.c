/* Decompiled from Speed.exe @ 00494b10 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00494b10(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00688528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006c7ad8;
  local_4 = 0;
  FUN_004948c0();
  local_4 = 0xffffffff;
  FUN_004f7b50();
  ExceptionList = local_c;
  return;
}

