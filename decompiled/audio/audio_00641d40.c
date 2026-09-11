/* Decompiled from Speed.exe @ 00641d40 */
/* Module: Audio */
/* Ghidra DecompileAll */


int * FUN_00641d40(int *param_1)

{
  int *piVar1;
  
  FUN_0063f190(param_1 + 6);
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == (int *)param_1[3]) {
      param_1[3] = 0;
      param_1[2] = 0;
    }
    else {
      param_1[2] = *piVar1;
    }
    *param_1 = *param_1 + -1;
    *piVar1 = 0;
  }
  param_1[1] = param_1[1] | 1;
  FUN_0063f1a0(param_1 + 6);
  return piVar1;
}

