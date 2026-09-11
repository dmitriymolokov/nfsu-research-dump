/* Decompiled from Speed.exe @ 00565370 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_00565370(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = (int *)(param_1 + 0x14);
  piVar2 = *(int **)(param_1 + 0x14);
  while (piVar2 != piVar1) {
    piVar2 = (int *)*piVar1;
    iVar3 = *piVar2;
    piVar4 = (int *)piVar2[1];
    *piVar4 = iVar3;
    *(int **)(iVar3 + 4) = piVar4;
    FUN_00565300();
    _free(piVar2);
    piVar2 = (int *)*piVar1;
  }
  FUN_0063f170(param_1 + 0x3c);
  return;
}

