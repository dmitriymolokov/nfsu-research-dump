/* Decompiled from Speed.exe @ 00593980 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_00593980(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = DAT_007344b0;
  if ((int **)DAT_007377d8 != &DAT_007377d8) {
    do {
      piVar4 = DAT_007377d8;
      iVar1 = *DAT_007377d8;
      piVar2 = (int *)DAT_007377d8[1];
      *piVar2 = iVar1;
      *(int **)(iVar1 + 4) = piVar2;
      FUN_00593850();
      iVar1 = *(int *)(iVar3 + 0x18);
      *piVar4 = *(int *)(iVar3 + 0x10);
      *(int *)(iVar3 + 0x18) = iVar1 + -1;
      *(int **)(iVar3 + 0x10) = piVar4;
    } while ((int **)DAT_007377d8 != &DAT_007377d8);
  }
  return;
}

