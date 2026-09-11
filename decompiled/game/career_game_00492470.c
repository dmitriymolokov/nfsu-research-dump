/* Decompiled from Speed.exe @ 00492470 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00492470(void)

{
  void *pvVar1;
  int *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00684ceb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0x18);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    _Memory = (int *)0x0;
  }
  else {
    _Memory = (int *)FUN_00492e70(pvVar1,DAT_006b6c00,_DAT_006b6c04 + _DAT_006b6bfc);
  }
  local_4 = 0xffffffff;
  if (*_Memory != 0) {
    if (3 < _Memory[1]) {
      ExceptionList = local_c;
      return _Memory;
    }
    if (*_Memory != 0) {
      FUN_00565ce0();
    }
  }
  _free(_Memory);
  ExceptionList = local_c;
  return (int *)0x0;
}

