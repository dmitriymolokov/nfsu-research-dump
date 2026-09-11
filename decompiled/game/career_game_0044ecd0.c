/* Decompiled from Speed.exe @ 0044ecd0 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0044ecd0(int param_1)

{
  undefined4 uVar1;
  float local_38;
  float local_34;
  float local_2c;
  float local_1c;
  
  local_1c = *(float *)(*(int *)(param_1 + 0x3c) + 0xf4);
  local_2c = *(float *)(*(int *)(param_1 + 0x3c) + 0x104);
  FUN_004650d0(&local_38);
  if ((local_38 < _DAT_006b75fc * local_2c) && (_DAT_006b75fc * local_1c < local_38)) {
    if (DAT_006cc7a4 < local_34) {
      return 0;
    }
    return 1;
  }
  uVar1 = 3;
  if (local_38 <= DAT_006cc7a4) {
    uVar1 = 2;
  }
  return uVar1;
}

