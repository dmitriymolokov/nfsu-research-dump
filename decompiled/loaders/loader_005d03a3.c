/* Decompiled from Speed.exe @ 005d03a3 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_005d03a3(int param_1)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_005d019e(3);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_005d0387(1);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  FUN_005cd1d4();
  return;
}

