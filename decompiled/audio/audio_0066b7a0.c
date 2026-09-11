/* Decompiled from Speed.exe @ 0066b7a0 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_0066b7a0(int param_1)

{
  if (*(int *)(param_1 + 0x80) == 3) {
    FUN_0066b660();
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_00662ce0(*(int *)(param_1 + 0x6c));
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  FUN_00668cf0(param_1 + 0x1dc);
  FUN_00447030(*(undefined4 *)(param_1 + 0x9c));
  FUN_00447030(*(undefined4 *)(param_1 + 0xb0));
  FUN_00447030(param_1);
  return;
}

