/* Decompiled from Speed.exe @ 004f7870 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f7870(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *unaff_EBX;
  
  iVar4 = DAT_00735704;
  piVar1 = (int *)*unaff_EBX;
  while (piVar1 != unaff_EBX) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    FUN_00514510();
    iVar2 = *(int *)(iVar4 + 0x18);
    *piVar1 = *(int *)(iVar4 + 0x10);
    *(int *)(iVar4 + 0x18) = iVar2 + -1;
    *(int **)(iVar4 + 0x10) = piVar1;
    piVar1 = (int *)*unaff_EBX;
  }
  return;
}

