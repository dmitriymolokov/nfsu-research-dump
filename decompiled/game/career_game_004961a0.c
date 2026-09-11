/* Decompiled from Speed.exe @ 004961a0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 * FUN_004961a0(undefined4 *param_1,undefined4 param_2)

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
  *param_1 = &PTR_FUN_006c7588;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((int)param_1 + 0x41) = 0;
  *(undefined1 *)((int)param_1 + 0x42) = 0;
  *(undefined1 *)((int)param_1 + 0x43) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((int)param_1 + 0x45) = 0;
  *(undefined1 *)((int)param_1 + 0x46) = 0;
  *(undefined1 *)((int)param_1 + 0x47) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  FUN_00496240(param_1);
  ExceptionList = local_c;
  return param_1;
}

