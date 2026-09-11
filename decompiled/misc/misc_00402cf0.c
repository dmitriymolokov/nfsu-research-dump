/* Decompiled from Speed.exe @ 00402cf0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00402cf0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = DAT_00736530;
  piVar1 = (int *)*param_1;
  while (piVar1 != param_1) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    FUN_00401e10();
    iVar2 = *(int *)(iVar4 + 0x18);
    *piVar1 = *(int *)(iVar4 + 0x10);
    *(int *)(iVar4 + 0x18) = iVar2 + -1;
    *(int **)(iVar4 + 0x10) = piVar1;
    piVar1 = (int *)*param_1;
  }
  return;
}

