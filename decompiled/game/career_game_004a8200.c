/* Decompiled from Speed.exe @ 004a8200 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


int FUN_004a8200(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00687d13;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0x10) = 0x20000;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar1 = param_1 + 0x20;
  *(int *)iVar1 = iVar1;
  *(int *)(param_1 + 0x24) = iVar1;
  local_4 = 1;
  FUN_004fd230();
  uVar2 = FUN_0049fe10();
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  FUN_004fd230();
  uVar2 = FUN_0049fe10();
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  FUN_004fd230();
  uVar2 = FUN_0049fe10();
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  FUN_004fd230();
  uVar2 = FUN_0049fdb0();
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  FUN_004fd230();
  uVar2 = FUN_0049fdb0();
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  FUN_004fd230();
  uVar2 = FUN_0049fdb0();
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  FUN_004fd230();
  uVar2 = FUN_0049fdb0();
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  FUN_004fd230();
  FUN_0049fe10();
  FUN_004fd230();
  FUN_0049fdb0();
  FUN_004fd230();
  FUN_0049fdb0();
  FUN_004fd230();
  FUN_0049fdb0();
  FUN_004fd230();
  FUN_0049fdb0();
  FUN_004fd230();
  FUN_0049fdb0();
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  uVar2 = FUN_0049fc90();
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  FUN_004f68a0(&DAT_006ca778,0);
  *(undefined4 *)(param_1 + 0x54) = param_3;
  ExceptionList = local_c;
  return param_1;
}

