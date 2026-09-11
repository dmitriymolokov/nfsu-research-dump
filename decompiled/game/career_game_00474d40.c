/* Decompiled from Speed.exe @ 00474d40 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00474d40(int param_1,float param_2)

{
  float fVar1;
  
  if (DAT_006ffe54 == 0) {
    param_2 = _DAT_006cc7bc;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x28) + 8) = *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x404);
  *(float *)(*(int *)(param_1 + 0x28) + 0xc) =
       _DAT_006cc7bc - *(float *)(*(int *)(param_1 + 0x34) + 0x47c);
  *(float *)(*(int *)(param_1 + 0x20) + 0x1e8) = param_2;
  fVar1 = param_2;
  if ((_DAT_006ccac0 < *(float *)(*(int *)(param_1 + 0x34) + 0x3d0) * _DAT_006cc9f0) &&
     (*(int *)(*(int *)(param_1 + 0x34) + 0x400) == 1)) {
    fVar1 = _DAT_006b71c8 * param_2;
  }
  *(float *)(*(int *)(param_1 + 0x24) + 0x13c) = fVar1;
  *(float *)(*(int *)(param_1 + 0x24) + 0x138) = param_2;
  return;
}

