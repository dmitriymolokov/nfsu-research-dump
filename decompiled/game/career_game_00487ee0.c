/* Decompiled from Speed.exe @ 00487ee0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00487ee0(int param_1)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 0x18c) = 0;
  fVar1 = (ABS(*(float *)(param_1 + 0x80) - *(float *)(param_1 + 0xc0)) +
          ABS(*(float *)(param_1 + 0x84) - *(float *)(param_1 + 0xc4)) +
          ABS(*(float *)(param_1 + 0x90) - *(float *)(param_1 + 0xd0)) * _DAT_006b6d54) *
          _DAT_006b6d4c;
  *(float *)(param_1 + 400) = fVar1;
  if (fVar1 < DAT_006b6d50) {
    *(float *)(param_1 + 400) = DAT_006b6d50;
  }
  return;
}

