/* Decompiled from Speed.exe @ 0049efb0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 * FUN_0049efb0(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_006c7574;
  FUN_0049f000(param_1);
  ExceptionList = local_c;
  return param_1;
}

