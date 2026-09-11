/* Decompiled from Speed.exe @ 004a8990 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004a8990(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00686bdb;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004a89e0();
  local_4 = 0xffffffff;
  FUN_00421900();
  ExceptionList = local_c;
  return;
}

