/* Decompiled from Speed.exe @ 00579480 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void __fastcall FUN_00579480(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar1 = (int *)*param_1;
  while (piVar1 != param_1) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    FUN_00578f80(piVar1);
    iVar4 = DAT_007345bc;
    iVar2 = *(int *)(DAT_007345bc + 0x18);
    *piVar1 = *(int *)(DAT_007345bc + 0x10);
    *(int *)(iVar4 + 0x18) = iVar2 + -1;
    *(int **)(iVar4 + 0x10) = piVar1;
    piVar1 = (int *)*param_1;
  }
  return;
}

