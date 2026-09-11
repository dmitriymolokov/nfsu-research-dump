/* Decompiled from Speed.exe @ 0058a050 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_0058a050(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if ((int **)DAT_00737bc4 != &DAT_00737bc4) {
    do {
      piVar4 = DAT_00737bc4;
      iVar1 = *DAT_00737bc4;
      piVar2 = (int *)DAT_00737bc4[1];
      *piVar2 = iVar1;
      *(int **)(iVar1 + 4) = piVar2;
      FUN_0058a2e0(piVar4);
      iVar3 = DAT_00734510;
      iVar1 = *(int *)(DAT_00734510 + 0x18);
      *piVar4 = *(int *)(DAT_00734510 + 0x10);
      *(int *)(iVar3 + 0x18) = iVar1 + -1;
      *(int **)(iVar3 + 0x10) = piVar4;
    } while ((int **)DAT_00737bc4 != &DAT_00737bc4);
  }
  return;
}

