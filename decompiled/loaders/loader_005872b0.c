/* Decompiled from Speed.exe @ 005872b0 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_005872b0(int param_1)

{
  float10 fVar1;
  
  if (((*(int *)(param_1 + 0x10c) == 0) && (DAT_006cc7a4 <= *(float *)(param_1 + 0x28))) &&
     (1 < *(int *)(*(int *)(param_1 + 0x14) + 0x18))) {
    fVar1 = ((float10)*(float *)(*(int *)(param_1 + 0x20) + 0x390) - (float10)_DAT_006cca60) *
            (float10)_DAT_006cca5c;
    if (fVar1 <= (float10)_DAT_006cc7bc) {
      if (fVar1 < (float10)DAT_006cc7a4) {
        fVar1 = (float10)DAT_006cc7a4;
      }
    }
    else {
      fVar1 = (float10)_DAT_006cc7bc;
    }
    return ((float10)_DAT_006cc7bc - (float10)_DAT_006f0798) * fVar1 + (float10)_DAT_006f0798;
  }
  return (float10)_DAT_006cc7bc;
}

