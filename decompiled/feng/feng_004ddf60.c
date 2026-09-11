/* Decompiled from Speed.exe @ 004ddf60 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004ddf60(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x44) != 0)) {
    if (*(int *)(*(int *)(param_1 + 0x44) + 8) == 0) {
      FUN_004dd700(param_1);
      FUN_004dd8e0(param_1);
      return;
    }
    FUN_00495fc0();
  }
  return;
}

