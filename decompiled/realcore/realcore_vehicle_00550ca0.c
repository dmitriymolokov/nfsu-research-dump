/* Decompiled from Speed.exe @ 00550ca0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


undefined4 FUN_00550ca0(undefined4 param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006887c3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0x7b0);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_00550d00(pvVar1,param_1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

