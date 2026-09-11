/* Decompiled from Speed.exe @ 005e7004 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_005e7004(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)(param_1 + uVar1 * 4) != 0) {
      FUN_005e6fe8(1);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 7);
  return;
}

