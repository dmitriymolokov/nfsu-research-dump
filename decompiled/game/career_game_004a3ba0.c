/* Decompiled from Speed.exe @ 004a3ba0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


int FUN_004a3ba0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00687e78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0x10) = 0x4000;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  local_4 = 0;
  FUN_004fd230();
  uVar1 = FUN_0049fdb0();
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  FUN_004fd230();
  uVar1 = FUN_0049fe10();
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  FUN_004fd230();
  uVar1 = FUN_0049fdb0();
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  FUN_004f6910(*(undefined4 *)(param_1 + 0x20));
  FUN_004f6910(*(undefined4 *)(param_1 + 0x24));
  FUN_004f6910(*(undefined4 *)(param_1 + 0x28));
  ExceptionList = local_c;
  return param_1;
}

