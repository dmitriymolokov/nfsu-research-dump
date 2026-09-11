/* Decompiled from Speed.exe @ 0041f9a0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void thunk_FUN_00421900(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *unaff_EDI;
  bool bVar5;
  
  piVar1 = (int *)*unaff_EDI;
  iVar3 = DAT_007349b4;
  while (piVar1 != unaff_EDI) {
    iVar4 = *piVar1;
    piVar2 = (int *)piVar1[1];
    *piVar2 = iVar4;
    *(int **)(iVar4 + 4) = piVar2;
    iVar4 = *(int *)(iVar3 + 0x18);
    *piVar1 = *(int *)(iVar3 + 0x10);
    *(int **)(iVar3 + 0x10) = piVar1;
    iVar4 = iVar4 + -1;
    bVar5 = DAT_007349b8 != 0;
    *(int *)(iVar3 + 0x18) = iVar4;
    if (bVar5) {
      if (iVar4 == 0) {
        FUN_00567220();
        iVar3 = 0;
        DAT_007349b4 = 0;
      }
      else {
        DAT_007349b8 = 1;
      }
    }
    piVar1 = (int *)*unaff_EDI;
  }
  return;
}

