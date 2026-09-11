/* Decompiled from Speed.exe @ 0053f970 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_0053f970(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *unaff_EBX;
  
  iVar4 = DAT_0073557c;
  piVar1 = (int *)*unaff_EBX;
  while (piVar1 != unaff_EBX) {
    piVar2 = (int *)piVar1[1];
    iVar3 = *piVar1;
    *piVar2 = iVar3;
    *(int **)(iVar3 + 4) = piVar2;
    FUN_0042ac80();
    iVar3 = *(int *)(iVar4 + 0x18);
    *piVar1 = *(int *)(iVar4 + 0x10);
    *(int *)(iVar4 + 0x18) = iVar3 + -1;
    *(int **)(iVar4 + 0x10) = piVar1;
    piVar1 = (int *)*unaff_EBX;
  }
  return;
}

