/* Decompiled from Speed.exe @ 0049e390 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0049e390(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006873f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0x20);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    DAT_00735ed0 = 0;
  }
  else {
    DAT_00735ed0 = FUN_0049e100(pvVar1);
  }
  ExceptionList = local_c;
  return;
}

