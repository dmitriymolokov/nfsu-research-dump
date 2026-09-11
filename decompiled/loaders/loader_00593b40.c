/* Decompiled from Speed.exe @ 00593b40 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_00593b40(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *unaff_EBX;
  
  iVar4 = DAT_007344a4;
  piVar1 = (int *)*unaff_EBX;
  while (piVar1 != unaff_EBX) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    FUN_00593780();
    iVar2 = *(int *)(iVar4 + 0x18);
    *piVar1 = *(int *)(iVar4 + 0x10);
    *(int *)(iVar4 + 0x18) = iVar2 + -1;
    *(int **)(iVar4 + 0x10) = piVar1;
    piVar1 = (int *)*unaff_EBX;
  }
  return;
}

