/* Decompiled from Speed.exe @ 00434d10 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00434d10(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 4) == 0x7fffffff)) {
    if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 8) != 0x7fffffff)) {
      fVar1 = (float)(DAT_0073ad34 - *(int *)(param_1 + 8)) * _DAT_006cca38;
      if (fVar1 < *(float *)(param_1 + 0xc)) {
        return 3;
      }
      if (fVar1 < *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0xc)) {
        return 2;
      }
      if (fVar1 < *(float *)(param_1 + 0xc) * _DAT_006cc7ac) {
        return 1;
      }
      return 4;
    }
  }
  else {
    if (*(float *)(param_1 + 0xc) < (float)(DAT_0073ad34 - *(int *)(param_1 + 4)) * _DAT_006cca38) {
      return 0;
    }
    uVar2 = 4;
  }
  return uVar2;
}

