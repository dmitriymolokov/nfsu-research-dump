/* Decompiled from Speed.exe @ 00441b20 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00441b20(int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 *extraout_ECX;
  int *piVar3;
  int extraout_EDX;
  int iVar4;
  
  piVar3 = *(int **)(param_1 + 0x50);
  iVar4 = 0;
  if (piVar3 != (int *)(param_1 + 0x50)) {
    do {
      if ((char)piVar3[2] == '\0') {
        iVar1 = *piVar3;
        piVar3 = (int *)piVar3[1];
        *piVar3 = iVar1;
        *(int **)(iVar1 + 4) = piVar3;
        FUN_004400d0();
        iVar1 = *(int *)(extraout_EDX + 0x18);
        iVar4 = iVar4 + 1;
        *extraout_ECX = *(undefined4 *)(extraout_EDX + 0x10);
        *(int *)(extraout_EDX + 0x18) = iVar1 + -1;
        *(undefined4 **)(extraout_EDX + 0x10) = extraout_ECX;
        if (100 < iVar4) break;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)(param_1 + 0x50));
    if (iVar4 != 0) {
      return;
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

