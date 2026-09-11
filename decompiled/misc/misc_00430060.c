/* Decompiled from Speed.exe @ 00430060 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00430060(int param_1)

{
  float local_8;
  
  if (*(int *)(param_1 + 0x130) == 0) {
    return (float10)DAT_006cc7a4;
  }
  local_8 = (*(float *)(param_1 + 0x184) - *(float *)(param_1 + 0x188)) /
            *(float *)(*(int *)(*(int *)(param_1 + 0x130) + 4) + 0xc);
  if (local_8 < _DAT_006cc7dc) {
    local_8 = local_8 + _DAT_006cc7bc;
  }
  if (_DAT_006cc7dc < local_8) {
    local_8 = local_8 - _DAT_006cc7bc;
  }
  if (local_8 < DAT_006cc7a4) {
    local_8 = local_8 + _DAT_006cc7bc;
  }
  return (float10)(int)(((int)*(uint *)(param_1 + 0x18c) < 0) - 1 & *(uint *)(param_1 + 0x18c)) +
         (float10)local_8;
}

