/* Decompiled from Speed.exe @ 004926b0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_004926b0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_00490730();
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x280);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x284);
    iVar1 = *(int *)(param_1 + 4);
    piVar2 = *(int **)(param_1 + 8);
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    FUN_00408370();
    return;
  }
  return;
}

