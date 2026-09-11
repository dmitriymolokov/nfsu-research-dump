/* Decompiled from Speed.exe @ 00441fa0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00441fa0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  int extraout_EDX;
  int *unaff_EDI;
  
  piVar1 = (int *)*unaff_EDI;
  while (piVar1 != unaff_EDI) {
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[1];
    *piVar1 = iVar2;
    *(int **)(iVar2 + 4) = piVar1;
    FUN_004400d0();
    iVar2 = *(int *)(extraout_EDX + 0x18);
    *extraout_ECX = *(undefined4 *)(extraout_EDX + 0x10);
    *(int *)(extraout_EDX + 0x18) = iVar2 + -1;
    *(undefined4 **)(extraout_EDX + 0x10) = extraout_ECX;
    piVar1 = (int *)*unaff_EDI;
  }
  return;
}

