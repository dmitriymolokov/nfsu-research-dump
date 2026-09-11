/* Decompiled from Speed.exe @ 00421c70 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


undefined4 * FUN_00421c70(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006896cb;
  local_c = ExceptionList;
  puVar1 = param_1 + 2;
  ExceptionList = &local_c;
  param_1[1] = 0;
  *puVar1 = puVar1;
  param_1[3] = puVar1;
  local_4 = 0;
  param_1[4] = 0;
  *param_1 = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  DAT_007361f4 = (undefined4 *)FUN_00566dc0(0x10,"RCQueuedMessageSlotPool",0);
  if (DAT_007361f4 == (undefined4 *)0x0) {
    DAT_007361f4 = (undefined4 *)0x0;
  }
  else if (DAT_0073d814 == 1) {
    *DAT_0073d81c = DAT_007361f4;
    puVar1 = DAT_007361f4;
    DAT_007361f4[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_007361f4 = &DAT_0073d818;
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 1;
  param_1[0x12] = 0;
  param_1[7] = 0xffffffff;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 0x25) = 0;
  FUN_00421f00(param_1);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x26] = 0;
  param_1[0x2a] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x2b] = 0;
  ExceptionList = local_c;
  return param_1;
}

