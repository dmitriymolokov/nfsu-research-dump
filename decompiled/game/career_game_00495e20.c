/* Decompiled from Speed.exe @ 00495e20 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00495e20(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688d33;
  local_c = ExceptionList;
  if (DAT_00735ed8 == 0) {
    ExceptionList = &local_c;
    pvVar1 = _malloc(0x10);
    local_4 = 0;
    if (pvVar1 != (void *)0x0) {
      DAT_00735ed8 = FUN_00494d00(pvVar1);
      ExceptionList = local_c;
      return;
    }
    DAT_00735ed8 = 0;
  }
  ExceptionList = local_c;
  return;
}

