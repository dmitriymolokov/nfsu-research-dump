/* Decompiled from Speed.exe @ 004a8b80 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


int FUN_004a8b80(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
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
  *(undefined4 *)(param_1 + 0x20) = param_2;
  FUN_004fd230();
  uVar2 = FUN_0049fdb0();
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  FUN_004fd230();
  uVar2 = FUN_0049fdb0();
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  FUN_004f6910(*(undefined4 *)(param_1 + 0x24));
  FUN_004f6910(*(undefined4 *)(param_1 + 0x28));
  puVar3 = _malloc(0x1c);
  if (puVar3 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x24);
    puVar3[4] = 0;
    puVar1 = puVar3 + 5;
    *puVar1 = puVar1;
    puVar3[6] = puVar1;
    puVar3[3] = 0;
    puVar3[2] = 4;
    *puVar3 = uVar2;
    puVar3[1] = 0x3fc00000;
    puVar3[4] = 0;
    *(undefined4 **)(param_1 + 0x2c) = puVar3;
  }
  ExceptionList = local_c;
  return param_1;
}

