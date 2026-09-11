/* Decompiled from Speed.exe @ 00655ab0 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00655ab0(int *param_1,int *param_2)

{
  *param_2 = *param_1;
  param_2[1] = 0;
  if (*param_1 != 0) {
    *(int **)(*param_1 + 4) = param_2;
    *param_1 = (int)param_2;
    param_1[2] = param_1[2] + 1;
    return;
  }
  param_1[1] = (int)param_2;
  *param_1 = (int)param_2;
  param_1[2] = param_1[2] + 1;
  return;
}

