/* Decompiled from Speed.exe @ 00655b40 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00655b40(int *param_1,int *param_2)

{
  if (param_2 == (int *)*param_1) {
    *param_1 = *(int *)*param_1;
  }
  if (param_2 == (int *)param_1[1]) {
    param_1[1] = ((int *)param_1[1])[1];
  }
  if ((int *)param_2[1] != (int *)0x0) {
    *(int *)param_2[1] = *param_2;
  }
  if (*param_2 != 0) {
    *(int *)(*param_2 + 4) = param_2[1];
  }
  param_1[2] = param_1[2] + -1;
  return;
}

