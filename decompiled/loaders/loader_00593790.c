/* Decompiled from Speed.exe @ 00593790 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_00593790(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = DAT_007344a4;
  if ((int **)DAT_007377e0 != &DAT_007377e0) {
    do {
      piVar4 = DAT_007377e0;
      iVar1 = *DAT_007377e0;
      piVar2 = (int *)DAT_007377e0[1];
      *piVar2 = iVar1;
      *(int **)(iVar1 + 4) = piVar2;
      FUN_00593780();
      iVar1 = *(int *)(iVar3 + 0x18);
      *piVar4 = *(int *)(iVar3 + 0x10);
      *(int *)(iVar3 + 0x18) = iVar1 + -1;
      *(int **)(iVar3 + 0x10) = piVar4;
    } while ((int **)DAT_007377e0 != &DAT_007377e0);
  }
  if (iVar3 != 0) {
    FUN_00567220();
    DAT_007344a4 = 0;
  }
  return;
}

