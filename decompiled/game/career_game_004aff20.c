/* Decompiled from Speed.exe @ 004aff20 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_004aff20(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x60);
  if ((*(int *)(iVar1 + 0x2c) != 2) && (*(int *)(iVar1 + 0x2c) != 0)) {
    *(undefined4 *)(iVar1 + 0x2c) = 3;
    *(undefined4 *)(iVar1 + 0x188) = 0;
  }
  iVar1 = *(int *)(param_2 + 0x60);
  if ((*(int *)(iVar1 + 0x2c) != 2) && (*(int *)(iVar1 + 0x2c) != 0)) {
    *(undefined4 *)(iVar1 + 0x2c) = 3;
    *(undefined4 *)(iVar1 + 0x184) = 0;
  }
  if (DAT_006fb02c != 0) {
    FUN_004aea50(param_2 + 0x80,DAT_00735e88);
  }
  return;
}

