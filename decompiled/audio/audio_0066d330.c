/* Decompiled from Speed.exe @ 0066d330 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_0066d330(int param_1)

{
  FUN_0066c8d0(200);
  if (*(int *)(param_1 + 0x80) == 3) {
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_0066c120();
    FUN_00662ce0(*(undefined4 *)(param_1 + 0x6c));
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 1;
  return 0;
}

