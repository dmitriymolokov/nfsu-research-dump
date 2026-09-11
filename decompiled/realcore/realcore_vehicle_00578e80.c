/* Decompiled from Speed.exe @ 00578e80 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


int FUN_00578e80(int param_1,undefined4 param_2)

{
  int iVar1;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_18 = &LAB_0068562e;
  local_1c = ExceptionList;
  iVar1 = param_1 + 8;
  ExceptionList = &local_1c;
  *(int *)iVar1 = iVar1;
  *(int *)(param_1 + 0xc) = iVar1;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 1;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  *(undefined4 *)(param_1 + 100) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x8c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  local_14 = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  FUN_00579010(param_2);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  ExceptionList = local_1c;
  return param_1;
}

