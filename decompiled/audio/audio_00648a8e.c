/* Decompiled from Speed.exe @ 00648a8e */
/* Module: Audio */
/* Ghidra DecompileAll */


void __fastcall FUN_00648a8e(int param_1)

{
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00642e80("Please choose a codec during the first data call back\n");
  }
  (**(code **)(**(int **)(param_1 + 0x18) + 0x10))();
  return;
}

