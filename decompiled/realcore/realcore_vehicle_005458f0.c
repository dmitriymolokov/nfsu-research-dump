/* Decompiled from Speed.exe @ 005458f0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void __fastcall FUN_005458f0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = (int *)param_1[1];
  *piVar2 = iVar1;
  *(int **)(iVar1 + 4) = piVar2;
  return;
}

