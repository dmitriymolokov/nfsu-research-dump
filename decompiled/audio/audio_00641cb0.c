/* Decompiled from Speed.exe @ 00641cb0 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00641cb0(int *param_1,int *param_2)

{
  FUN_0063f190(param_1 + 6);
  if (param_2 != (int *)0x0) {
    *param_2 = param_1[2];
    param_1[2] = (int)param_2;
    *param_1 = *param_1 + 1;
    if (*param_2 == 0) {
      param_1[3] = (int)param_2;
    }
    param_1[1] = param_1[1] | 1;
  }
  FUN_0063f1a0(param_1 + 6);
  return;
}

