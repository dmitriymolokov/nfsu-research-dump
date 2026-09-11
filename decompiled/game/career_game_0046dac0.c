/* Decompiled from Speed.exe @ 0046dac0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0046dac0(int param_1,float param_2)

{
  float fVar1;
  
  fVar1 = _DAT_006cc968;
  *(undefined4 *)(param_1 + 0x60) = 3;
  if (fVar1 < param_2) {
    *(undefined4 *)(param_1 + 0x44) = 3;
    *(float *)(param_1 + 0x14) = _DAT_006cc7bc;
    return;
  }
  if (param_2 < _DAT_006cc964) {
    *(undefined4 *)(param_1 + 0x44) = 1;
    *(float *)(param_1 + 0x14) = DAT_006cc7a4;
    return;
  }
  if (param_2 == _DAT_006cc7bc) {
    *(undefined4 *)(param_1 + 0x44) = 3;
    *(float *)(param_1 + 0x14) = param_2;
    return;
  }
  if (param_2 == DAT_006cc7a4) {
    *(undefined4 *)(param_1 + 0x44) = 1;
    *(float *)(param_1 + 0x14) = param_2;
    return;
  }
  if (*(float *)(param_1 + 0x14) < param_2) {
    *(undefined4 *)(param_1 + 0x44) = 2;
    *(float *)(param_1 + 0x14) = param_2;
    return;
  }
  *(float *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}

