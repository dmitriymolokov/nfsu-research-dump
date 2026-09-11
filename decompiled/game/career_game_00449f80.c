/* Decompiled from Speed.exe @ 00449f80 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00449f80(int param_1)

{
  float10 fVar1;
  
  if ((*(int *)(param_1 + 0x3bc) == 0) || (*(int *)(param_1 + 0x3bc) == 0x7fffffff)) {
    fVar1 = (float10)DAT_006cc7a4;
  }
  else {
    fVar1 = (float10)DAT_0073ad34 * (float10)_DAT_006cca38 -
            (float10)*(int *)(param_1 + 0x3bc) * (float10)_DAT_006cca38;
  }
  if ((*(int *)(param_1 + 0x3b8) != 0) && (*(int *)(param_1 + 0x3b8) != 0x7fffffff)) {
    return (float10)*(int *)(param_1 + 0x3b8) * (float10)_DAT_006cca38 - fVar1;
  }
  return (float10)DAT_006cc7a4 - fVar1;
}

