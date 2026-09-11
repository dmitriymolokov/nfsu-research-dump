/* Decompiled from Speed.exe @ 0046d830 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0046d830(int param_1)

{
  float fVar1;
  float10 fVar2;
  undefined4 local_4;
  
  fVar2 = (float10)DAT_006cc7a4;
  local_4 = 0;
  if (_DAT_006cc8bc <= *(float *)(*(int *)(param_1 + 0x18) + 0x10)) {
    fVar2 = (float10)*(float *)(*(int *)(param_1 + 0x30) + 0x164) +
            (float10)*(float *)(*(int *)(param_1 + 0x2c) + 0x164);
    local_4 = 2;
  }
  fVar1 = *(float *)(*(int *)(param_1 + 0x18) + 0x10);
  if (fVar1 < _DAT_006cc96c != (fVar1 == _DAT_006cc96c)) {
    local_4 = local_4 + 2;
    fVar2 = (float10)*(float *)(*(int *)(param_1 + 0x28) + 0x164) +
            (float10)*(float *)(*(int *)(param_1 + 0x24) + 0x164) + fVar2;
  }
  return fVar2 / (float10)local_4;
}

