/* Decompiled from Speed.exe @ 00597c90 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00597c90(int param_1)

{
  int *piVar1;
  
  *(undefined1 *)(param_1 + 0x4c2) = 1;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  _DAT_0073446c = _DAT_0073446c + 1;
  if (*(char *)(param_1 + 0x4c1) == '\0') {
    piVar1 = *(int **)(param_1 + 0x4b8);
    if (piVar1 != (int *)(param_1 + 0x4b8)) {
      do {
        FUN_00402bd0();
        piVar1 = (int *)*piVar1;
      } while (piVar1 != (int *)(param_1 + 0x4b8));
    }
    *(undefined1 *)(param_1 + 0x4c1) = 1;
  }
  if ((*(int *)(param_1 + 0x168) == 0) || (*(int *)(param_1 + 0x168) == 0x7fffffff)) {
    *(undefined4 *)(param_1 + 0x168) = DAT_0073ad34;
  }
  return;
}

