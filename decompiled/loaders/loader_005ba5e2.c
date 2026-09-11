/* Decompiled from Speed.exe @ 005ba5e2 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_005ba5e2(int param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x10) + 8);
}

