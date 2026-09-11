/* Decompiled from Speed.exe @ 00473f20 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00473f20(int param_1)

{
  undefined4 in_stack_00000014;
  int in_stack_0000001c;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_1c = *(undefined4 *)(param_1 + 0x34);
  local_20 = *(undefined4 *)(param_1 + 0x30);
  local_18 = *(undefined4 *)(param_1 + 0x38);
  thunk_FUN_005abda2(&local_20,&local_20,in_stack_00000014);
  *(undefined4 *)(in_stack_0000001c + 0x10) = uStack_2c;
  *(undefined4 *)(in_stack_0000001c + 0x14) = uStack_28;
  *(undefined4 *)(in_stack_0000001c + 0x18) = uStack_24;
  *(undefined4 *)(in_stack_0000001c + 0x1c) = 0;
  *(undefined2 *)(in_stack_0000001c + 0xc) = *(undefined2 *)(param_1 + 0x2c);
  return;
}

