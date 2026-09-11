/* Decompiled from Speed.exe @ 00597920 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_00597920(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x4b0);
  if (piVar1 == (int *)(param_1 + 0x4b0)) {
    *(undefined1 *)(param_1 + 0x4c0) = 1;
    return;
  }
  do {
    FUN_00402bd0();
    piVar1 = (int *)*piVar1;
  } while (piVar1 != (int *)(param_1 + 0x4b0));
  *(undefined1 *)(param_1 + 0x4c0) = 1;
  return;
}

