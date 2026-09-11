/* Decompiled from Speed.exe @ 004a8c50 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004a8c50(int param_1)

{
  void *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00687e78;
  local_c = ExceptionList;
  _Memory = *(void **)(param_1 + 0x2c);
  local_4 = 0;
  ExceptionList = &local_c;
  if (_Memory != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_004a8990(_Memory);
    _free(_Memory);
  }
  local_4 = 0xffffffff;
  FUN_00421900();
  ExceptionList = local_c;
  return;
}

