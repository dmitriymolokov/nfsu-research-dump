/* Decompiled from Speed.exe @ 005b0773 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_005b0773(int param_1)

{
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    _free(*(void **)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return;
}

