/* Decompiled from Speed.exe @ 005cd25f */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_005cd25f(int param_1)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_005c8f42(1);
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*(void **)(param_1 + 0x44) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x44));
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (*(void **)(param_1 + 0x48) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  if (*(void **)(param_1 + 0x4c) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x50);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  FUN_005cd1d4();
  return;
}

