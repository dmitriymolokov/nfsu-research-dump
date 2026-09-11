/* Decompiled from Speed.exe @ 00442b20 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00442b20(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *unaff_EDI;
  
  FUN_00442bd0(0);
  piVar1 = (int *)unaff_EDI[2];
  while (piVar1 != unaff_EDI + 2) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    _free(piVar1);
    piVar1 = (int *)unaff_EDI[2];
  }
  piVar1 = (int *)*unaff_EDI;
  while (piVar1 != unaff_EDI) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    _free(piVar1);
    piVar1 = (int *)*unaff_EDI;
  }
  return;
}

