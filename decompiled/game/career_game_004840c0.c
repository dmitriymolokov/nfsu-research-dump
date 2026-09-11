/* Decompiled from Speed.exe @ 004840c0 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


undefined4 *
FUN_004840c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00686878;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004834e0();
  *(undefined2 *)((int)param_1 + 0x32) = 62000;
  *(undefined2 *)(param_1 + 0xd) = 62000;
  param_1[0x14] = 0x3f800000;
  param_1[0x16] = 0x3f800000;
  param_1[0x2c] = param_3;
  bVar1 = DAT_00735f5c == 0;
  param_1[0xb] = 0x40a00000;
  param_1[0x12] = 0x40a00000;
  local_4 = 0;
  *param_1 = &PTR_FUN_006c8018;
  *(undefined2 *)(param_1 + 0xc) = 26000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0x447a0000;
  *(undefined2 *)(param_1 + 0x15) = 51000;
  *(undefined2 *)((int)param_1 + 0x56) = 0xf8f4;
  param_1[0x17] = 0x3ecccccd;
  param_1[0x18] = 0x18;
  param_1[0x1a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = param_4;
  param_1[0x19] = 0;
  if (bVar1) {
    *(undefined4 *)(param_1[7] + 0x280) = 0;
    *(undefined4 *)(param_1[7] + 0x284) = 0;
    *(undefined2 *)(param_1[7] + 0xc4) = DAT_006fbe34;
  }
  param_1[0x30] = 0;
  FUN_00484270();
  ExceptionList = local_c;
  return param_1;
}

