/* Decompiled from Speed.exe @ 005cd1d4 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_005cd1d4(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_005cb13e(3);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  while (*(int *)(param_1 + 0x14) != 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar1 + 0x14);
    *(undefined4 *)(iVar1 + 0x14) = 0;
    FUN_005c8f26(1);
  }
  return;
}

