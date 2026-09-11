/* Decompiled from Speed.exe @ 0058dfa0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_0058dfa0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EDI;
  
  piVar4 = DAT_00737b28;
  piVar3 = (int *)FUN_0040a880();
  if (piVar4 != piVar3) {
    while (piVar4[2] != unaff_EDI) {
      piVar4 = (int *)*piVar4;
      if (piVar4 == piVar3) {
        return;
      }
    }
    piVar3 = piVar4 + 4;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      iVar1 = *piVar4;
      piVar3 = (int *)piVar4[1];
      *piVar3 = iVar1;
      *(int **)(iVar1 + 4) = piVar3;
      iVar2 = DAT_007344d8;
      iVar1 = *(int *)(DAT_007344d8 + 0x18);
      *piVar4 = *(int *)(DAT_007344d8 + 0x10);
      *(int *)(iVar2 + 0x18) = iVar1 + -1;
      *(int **)(iVar2 + 0x10) = piVar4;
      DAT_0073131c = DAT_0073131c + -1;
    }
  }
  return;
}

