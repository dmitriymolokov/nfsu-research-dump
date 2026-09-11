/* Decompiled from Speed.exe @ 005d14b1 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_005d14b1(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_005d0387(1);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_005d03d2(3);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*(void **)(param_1 + 0x38) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x80);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(int *)(param_1 + 0x80) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x84);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(int *)(param_1 + 0x84) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x88);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(int *)(param_1 + 0x88) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x8c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(int *)(param_1 + 0x8c) = 0;
  }
  FUN_005cd1d4();
  return;
}

