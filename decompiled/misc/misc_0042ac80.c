/* Decompiled from Speed.exe @ 0042ac80 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __fastcall FUN_0042ac80(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((param_1[2] != 0) || (param_1[3] != 0)) {
    iVar1 = *param_1;
    piVar2 = (int *)param_1[1];
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}

