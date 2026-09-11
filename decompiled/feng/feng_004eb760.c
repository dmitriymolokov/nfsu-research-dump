/* Decompiled from Speed.exe @ 004eb760 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_004eb760(void)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006879e3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0x254);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_004eb7c0(pvVar1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

