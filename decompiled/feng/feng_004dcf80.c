/* Decompiled from Speed.exe @ 004dcf80 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004dcf80(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00687b83;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0x88);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_004dcea0();
  }
  ExceptionList = local_c;
  return;
}

