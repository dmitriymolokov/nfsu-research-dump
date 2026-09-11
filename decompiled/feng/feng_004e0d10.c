/* Decompiled from Speed.exe @ 004e0d10 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004e0d10(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int unaff_EDI;
  
  if (param_1 == 0) {
    piVar1 = (int *)(unaff_EDI + 0x44);
    piVar2 = *(int **)(unaff_EDI + 0x44);
    while (piVar2 != piVar1) {
      piVar2 = (int *)*piVar1;
      iVar4 = *piVar2;
      piVar3 = (int *)piVar2[1];
      *piVar3 = iVar4;
      *(int **)(iVar4 + 4) = piVar3;
      _free(piVar2);
      piVar2 = (int *)*piVar1;
    }
    iVar4 = unaff_EDI + 0x40;
    param_1 = 0;
  }
  else {
    piVar1 = (int *)(unaff_EDI + 0x68);
    piVar2 = *(int **)(unaff_EDI + 0x68);
    while (piVar2 != piVar1) {
      piVar2 = (int *)*piVar1;
      iVar4 = *piVar2;
      piVar3 = (int *)piVar2[1];
      *piVar3 = iVar4;
      *(int **)(iVar4 + 4) = piVar3;
      _free(piVar2);
      piVar2 = (int *)*piVar1;
    }
    iVar4 = unaff_EDI + 100;
  }
  FUN_004e0d90(unaff_EDI,iVar4,param_1);
  FUN_004e19a0();
  FUN_004e1b90();
  return;
}

