/* Decompiled from Speed.exe @ 005e7993 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_005e7993(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x34) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x34))(1);
  }
  _free(*(void **)(param_1 + 0x58));
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_005e737f(1);
  }
  return;
}

