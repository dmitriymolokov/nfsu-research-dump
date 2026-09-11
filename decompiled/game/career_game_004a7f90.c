/* Decompiled from Speed.exe @ 004a7f90 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


int FUN_004a7f90(int param_1,undefined4 param_2)

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
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x20000;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  local_4 = 0;
  uVar1 = FUN_0049fdb0();
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  FUN_0049fec0(0,0);
  ExceptionList = local_c;
  return param_1;
}

