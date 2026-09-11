/* Decompiled from Speed.exe @ 00538ed0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void __thiscall FUN_00538ed0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  if (*(int *)(param_1 + 0x2c) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x24) = param_2;
    FUN_00539b10();
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x24) = param_2;
    FUN_00539b10();
  }
  return;
}

