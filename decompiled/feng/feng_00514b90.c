/* Decompiled from Speed.exe @ 00514b90 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_00514b90(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)(param_1 + 0x18)) {
    do {
      FUN_0040bef0();
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)(param_1 + 0x18));
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
  return;
}

