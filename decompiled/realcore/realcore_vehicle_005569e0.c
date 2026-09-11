/* Decompiled from Speed.exe @ 005569e0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


undefined4 * FUN_005569e0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  *param_1 = &PTR_FUN_006bcda4;
  local_4 = 0;
  if (DAT_00777b54 == 0) {
    FUN_00556d00();
  }
  else if (DAT_00777b54 == 1) {
    FUN_00556c10();
  }
  iVar1 = FUN_004f65d0();
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  ExceptionList = local_c;
  return param_1;
}

