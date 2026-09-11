/* Decompiled from Speed.exe @ 004c9850 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004c9850(undefined4 *param_1)

{
  void *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006872c6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006c5134;
  _Memory = (void *)param_1[0x2b];
  local_4 = 1;
  DAT_006fad58 = 0xffffffff;
  if (_Memory != (void *)0x0) {
    if (*(int *)((int)_Memory + 0xc) != 0) {
      FUN_00565ce0();
    }
    _free(_Memory);
  }
  FUN_00494890();
  FUN_00494890();
  local_4 = 0xffffffff;
  FUN_004f7b50();
  ExceptionList = local_c;
  return;
}

