/* Decompiled from Speed.exe @ 00649bd0 */
/* Module: Audio */
/* Ghidra DecompileAll */


int * __thiscall FUN_00649bd0(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *param_2 = (int)param_1;
  *(int **)(iVar1 + 4) = param_1;
  param_1[1] = (int)param_2;
  *param_1 = iVar1;
  return param_1;
}

