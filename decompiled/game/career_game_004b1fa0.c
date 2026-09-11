/* Decompiled from Speed.exe @ 004b1fa0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 FUN_004b1fa0(void)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00689553;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0x48);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_004b2070(pvVar1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

