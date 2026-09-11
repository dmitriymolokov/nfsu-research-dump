/* Decompiled from Speed.exe @ 004de440 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004de440(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00686bc3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0x10);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    DAT_00735e00 = FUN_004de1e0(pvVar1);
    ExceptionList = local_c;
    return;
  }
  DAT_00735e00 = 0;
  ExceptionList = local_c;
  return;
}

