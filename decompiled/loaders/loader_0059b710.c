/* Decompiled from Speed.exe @ 0059b710 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_0059b710(int param_1)

{
  int iVar1;
  int local_8;
  
  if (DAT_007361f8 != 0) {
    for (local_8 = 0; iVar1 = FUN_0041f680(), local_8 < iVar1; local_8 = local_8 + 1) {
      FUN_0041f690();
      FUN_00432d30(0);
      FUN_00424dc0();
      FUN_00468800();
      FUN_00426110();
    }
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}

