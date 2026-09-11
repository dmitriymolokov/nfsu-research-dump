/* Decompiled from Speed.exe @ 005fbe17 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_005fbe17(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(uint *)(param_1 + 8) > 0) {
    do {
      *(uint *)(*(int *)(*(int *)(param_1 + 0x14) + uVar1 * 4) + 0x1c) = uVar1;
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 8));
  }
  return 0;
}
