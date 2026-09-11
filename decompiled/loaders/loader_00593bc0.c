/* Decompiled from Speed.exe @ 00593bc0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __thiscall FUN_00593bc0(int param_1,float param_2,float param_3,float param_4)

{
  *(float *)(param_1 + 4) = param_2;
  if (param_2 != *(float *)(param_1 + 0xc)) {
    *(undefined2 *)(param_1 + 0x2c) = 2;
  }
  *(float *)(param_1 + 0x34) = param_3;
  if (param_3 != *(float *)(param_1 + 0x3c)) {
    *(undefined2 *)(param_1 + 0x5c) = 2;
  }
  *(float *)(param_1 + 100) = param_4;
  if (param_4 != *(float *)(param_1 + 0x6c)) {
    *(undefined2 *)(param_1 + 0x8c) = 2;
  }
  return;
}

