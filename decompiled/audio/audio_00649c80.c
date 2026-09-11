/* Decompiled from Speed.exe @ 00649c80 */
/* Module: Audio */
/* Ghidra DecompileAll */


int * __thiscall FUN_00649c80(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 4);
  *piVar1 = (int)param_1;
  *(int **)(param_2 + 4) = param_1;
  param_1[1] = (int)piVar1;
  *param_1 = param_2;
  return param_1;
}

