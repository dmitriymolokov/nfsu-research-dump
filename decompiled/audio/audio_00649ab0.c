/* Decompiled from Speed.exe @ 00649ab0 */
/* Module: Audio */
/* Ghidra DecompileAll */


int * __fastcall FUN_00649ab0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = (int *)param_1[1];
  *piVar2 = iVar1;
  *(int **)(iVar1 + 4) = piVar2;
  *param_1 = 0xb;
  param_1[1] = 0xb;
  return param_1;
}

