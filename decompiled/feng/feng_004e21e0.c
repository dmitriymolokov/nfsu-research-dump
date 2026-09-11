/* Decompiled from Speed.exe @ 004e21e0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * FUN_004e21e0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00687073;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  puVar1 = param_1 + 0x11;
  *param_1 = &PTR_FUN_006c3154;
  *puVar1 = puVar1;
  param_1[0x12] = puVar1;
  local_4 = 1;
  FUN_004f8370(param_1 + 0x13,"master_thumb","thumb");
  *(undefined1 *)(param_1 + 8) = 1;
  ExceptionList = local_c;
  return param_1;
}

