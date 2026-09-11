/* Decompiled from Speed.exe @ 005b07b2 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_005b07b2(int param_1)

{
  int iVar1;
  
  while (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar1 + 0x20);
    *(undefined4 *)(iVar1 + 0x20) = 0;
    FUN_005b0757(1);
  }
  FUN_005b0773();
  return;
}

