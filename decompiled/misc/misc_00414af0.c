/* Decompiled from Speed.exe @ 00414af0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __fastcall FUN_00414af0(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x1c) - *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x1c) = fVar1;
  if (*(float *)(param_1 + 0x14) < fVar1) {
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x14);
  }
  if (*(float *)(param_1 + 0x1c) < *(float *)(param_1 + 0x18)) {
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
  }
  return;
}

