/* Decompiled from Speed.exe @ 004484b0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004484b0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *unaff_EDI;
  
  piVar1 = (int *)*unaff_EDI;
  while (piVar1 != unaff_EDI) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    FUN_004481d0();
    iVar4 = DAT_007360f8;
    iVar2 = *(int *)(DAT_007360f8 + 0x18);
    *piVar1 = *(int *)(DAT_007360f8 + 0x10);
    *(int *)(iVar4 + 0x18) = iVar2 + -1;
    *(int **)(iVar4 + 0x10) = piVar1;
    piVar1 = (int *)*unaff_EDI;
  }
  return;
}

