/* Decompiled from Speed.exe @ 004c3670 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * FUN_004c3670(undefined4 *param_1,undefined4 param_2)

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
  *param_1 = &PTR_FUN_006c55cc;
  FUN_00495f00(0x14012d64);
  FUN_00495f00(0x639);
  FUN_00495f00(0x541389e5);
  *(undefined1 *)(param_1 + 8) = 1;
  ExceptionList = local_c;
  return param_1;
}

