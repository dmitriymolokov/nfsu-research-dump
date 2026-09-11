/* Decompiled from Speed.exe @ 005b5e96 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_005b5e96(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    FUN_005b5ec9(3);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  while (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_005b2a99(1);
  }
  return;
}

