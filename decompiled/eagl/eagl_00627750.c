/* Decompiled from Speed.exe @ 00627750 */
/* Module: EAGL */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00627750(int param_1,float param_2)

{
  float fVar1;
  undefined4 local_8;
  
  if (param_2 < *(float *)(param_1 + 0xc)) {
    param_2 = param_2 - *(float *)(param_1 + 0xc);
    fVar1 = param_2 / *(float *)(param_1 + 0x14);
    if (fVar1 < DAT_006cc7a4) {
      fVar1 = fVar1 + _DAT_006a7eb0;
    }
    else {
      fVar1 = fVar1 - _DAT_006a7eb0;
    }
    local_8 = (int)ROUND(fVar1);
    return (float10)*(float *)(param_1 + 0x10) -
           ((float10)param_2 - (float10)local_8 * (float10)*(float *)(param_1 + 0x14));
  }
  if (*(float *)(param_1 + 0x10) < param_2) {
    param_2 = param_2 - *(float *)(param_1 + 0x10);
    fVar1 = param_2 / *(float *)(param_1 + 0x14);
    if (fVar1 < DAT_006cc7a4) {
      fVar1 = fVar1 + _DAT_006a7eb0;
    }
    else {
      fVar1 = fVar1 - _DAT_006a7eb0;
    }
    local_8 = (int)ROUND(fVar1);
    return ((float10)param_2 - (float10)local_8 * (float10)*(float *)(param_1 + 0x14)) +
           (float10)*(float *)(param_1 + 0xc);
  }
  return (float10)param_2;
}

