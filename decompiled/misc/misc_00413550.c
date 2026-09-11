/* Decompiled from Speed.exe @ 00413550 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


undefined4 FUN_00413550(undefined4 param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688003;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0xa0);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_004135b0(pvVar1,param_1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

