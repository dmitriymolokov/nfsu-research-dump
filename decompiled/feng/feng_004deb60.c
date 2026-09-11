/* Decompiled from Speed.exe @ 004deb60 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_004deb60(undefined4 param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00687b63;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0x44);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_004deaa0(pvVar1,param_1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

