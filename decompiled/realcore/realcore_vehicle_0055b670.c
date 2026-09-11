/* Decompiled from Speed.exe @ 0055b670 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


undefined4 FUN_0055b670(undefined4 param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688113;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0x254);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_0055b6d0(pvVar1,param_1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

