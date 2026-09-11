/* Decompiled from Speed.exe @ 00594ff0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_00594ff0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = DAT_00734478;
  if ((int **)DAT_00737780 != &DAT_00737780) {
    do {
      piVar4 = DAT_00737780;
      iVar1 = *DAT_00737780;
      piVar2 = (int *)DAT_00737780[1];
      *piVar2 = iVar1;
      *(int **)(iVar1 + 4) = piVar2;
      iVar1 = *(int *)(iVar3 + 0x18);
      *piVar4 = *(int *)(iVar3 + 0x10);
      *(int *)(iVar3 + 0x18) = iVar1 + -1;
      *(int **)(iVar3 + 0x10) = piVar4;
    } while ((int **)DAT_00737780 != &DAT_00737780);
  }
  if (iVar3 != 0) {
    FUN_00567220();
    DAT_00734478 = 0;
  }
  return;
}

