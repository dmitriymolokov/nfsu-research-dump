/* Decompiled from Speed.exe @ 005407f0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_005407f0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *unaff_EDI;
  
  piVar1 = (int *)*unaff_EDI;
  while (piVar1 != unaff_EDI) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    if (piVar1 + -1 != (int *)0x0) {
      FUN_00540820();
      _free(piVar1 + -1);
    }
    piVar1 = (int *)*unaff_EDI;
  }
  return;
}

