/* Decompiled from Speed.exe @ 005782b0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


undefined4 * FUN_005782b0(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00686c18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00577920();
  local_4 = 0;
  uVar1 = FUN_00579380(0);
  param_1[7] = uVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_006ba65c;
  param_1[0x14] = 0x3f800000;
  param_1[0x19] = 0x3f800000;
  param_1[0x1e] = 0x3f800000;
  param_1[0x23] = 0x3f800000;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  ExceptionList = local_c;
  return param_1;
}

