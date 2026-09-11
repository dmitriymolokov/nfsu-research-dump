/* Decompiled from Speed.exe @ 00446950 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00446950(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *unaff_EDI;
  
  piVar1 = (int *)unaff_EDI[0x10];
  while (piVar1 != unaff_EDI + 0x10) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    _free(piVar1);
    piVar1 = (int *)unaff_EDI[0x10];
  }
  piVar1 = (int *)unaff_EDI[0xe];
  while (piVar1 != unaff_EDI + 0xe) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    _free(piVar1);
    piVar1 = (int *)unaff_EDI[0xe];
  }
  piVar1 = (int *)unaff_EDI[0xc];
  while (piVar1 != unaff_EDI + 0xc) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    _free(piVar1);
    piVar1 = (int *)unaff_EDI[0xc];
  }
  piVar1 = (int *)unaff_EDI[10];
  while (piVar1 != unaff_EDI + 10) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    _free(piVar1);
    piVar1 = (int *)unaff_EDI[10];
  }
  piVar1 = (int *)unaff_EDI[8];
  while (piVar1 != unaff_EDI + 8) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    _free(piVar1);
    piVar1 = (int *)unaff_EDI[8];
  }
  piVar1 = (int *)unaff_EDI[6];
  while (piVar1 != unaff_EDI + 6) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    _free(piVar1);
    piVar1 = (int *)unaff_EDI[6];
  }
  piVar1 = (int *)unaff_EDI[4];
  while (piVar1 != unaff_EDI + 4) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    _free(piVar1);
    piVar1 = (int *)unaff_EDI[4];
  }
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

