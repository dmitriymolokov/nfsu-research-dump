/* Decompiled from Speed.exe @ 00622b50 */
/* Module: EAGL */
/* Ghidra DecompileAll */


void __fastcall FUN_00622b50(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

