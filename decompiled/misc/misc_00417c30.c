/* Decompiled from Speed.exe @ 00417c30 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __fastcall FUN_00417c30(undefined4 *param_1)

{
  void *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00687481;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006cbc18;
  _Memory = (void *)param_1[0x98];
  local_4 = 2;
  if (_Memory != (void *)0x0) {
    if (*(int *)((int)_Memory + 0xc) != 0) {
      FUN_00565ce0();
    }
    _free(_Memory);
  }
  FUN_00494890();
  FUN_00494890();
  local_4 = local_4 & 0xffffff00;
  _eh_vector_destructor_iterator_(param_1 + 0x18,0xc,0x20,FUN_00504010);
  local_4 = 0xffffffff;
  FUN_004f7b50();
  ExceptionList = local_c;
  return;
}

