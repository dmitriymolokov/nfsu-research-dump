/* Decompiled from Speed.exe @ 00598360 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_00598360(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00686213;
  local_c = ExceptionList;
  if (DAT_00734460 == 0) {
    ExceptionList = &local_c;
    pvVar1 = _malloc(0x658);
    local_4 = 0;
    if (pvVar1 != (void *)0x0) {
      DAT_00734460 = FUN_00598190(pvVar1);
      ExceptionList = local_c;
      return;
    }
    DAT_00734460 = 0;
  }
  ExceptionList = local_c;
  return;
}

