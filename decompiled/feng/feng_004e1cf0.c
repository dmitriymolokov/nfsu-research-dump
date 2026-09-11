/* Decompiled from Speed.exe @ 004e1cf0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * FUN_004e1cf0(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  *param_1 = &PTR_FUN_006c3654;
  *(undefined1 *)(param_1 + 0x15) = 0;
  local_4 = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  FUN_004e1d70(param_1 + 0x10,"P1_CarPort_","Backing_P1");
  FUN_004e1d70(param_1 + 0x16,"P2_CarPort_","Backing_P2");
  ExceptionList = local_c;
  return param_1;
}

