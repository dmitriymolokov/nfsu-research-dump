/* Decompiled from Speed.exe @ 004835a0 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


void __fastcall FUN_004835a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int extraout_EDX;
  bool bVar4;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    bVar4 = DAT_00735f5c == 0;
    *(undefined4 *)(param_1 + 0x14) = 1;
    if (bVar4) {
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x280) = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x284) = *(undefined4 *)(param_1 + 0x28);
    }
    piVar1 = (int *)(param_1 + 4);
    piVar3 = (int *)(*(int *)(param_1 + 0x18) + 0x44);
    iVar2 = *piVar3;
    *piVar3 = (int)piVar1;
    *(int **)(iVar2 + 4) = piVar1;
    *(int **)(param_1 + 8) = piVar3;
    *piVar1 = iVar2;
    FUN_00408370();
    *(undefined4 *)(*(int *)(extraout_EDX + 0x1c) + 0xbc) = 0x3f000000;
  }
  return;
}

