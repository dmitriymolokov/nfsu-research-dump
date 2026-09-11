/* Decompiled from Speed.exe @ 0059bbc0 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 * FUN_0059bbc0(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00684a08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00458a50(param_2);
  local_4 = 0;
  *param_1 = &PTR_LAB_006b89c0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_0059bd90(1);
  ExceptionList = local_c;
  return param_1;
}

