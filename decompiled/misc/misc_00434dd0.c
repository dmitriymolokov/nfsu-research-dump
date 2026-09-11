/* Decompiled from Speed.exe @ 00434dd0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00434dd0(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  
  if (*(float *)(param_1 + 0xc) == DAT_006cc7a4) {
    return (float10)DAT_006cc7a4;
  }
  fVar4 = (float10)DAT_006cc7a4;
  if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 4) == 0x7fffffff)) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      return fVar4;
    }
    if (iVar1 == 0x7fffffff) {
      return fVar4;
    }
    fVar3 = (float)(DAT_0073ad34 - iVar1) * _DAT_006cca38;
    if (fVar3 < *(float *)(param_1 + 0xc)) {
      return ((float10)fVar3 - (float10)*(float *)(param_1 + 0xc) * (float10)DAT_006cc7a4) /
             (float10)*(float *)(param_1 + 0xc);
    }
    fVar2 = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0xc);
    if (fVar3 < fVar2) {
      return ((float10)fVar3 - (float10)*(float *)(param_1 + 0xc)) /
             (float10)*(float *)(param_1 + 0xc);
    }
    if (*(float *)(param_1 + 0xc) * _DAT_006cc7ac <= fVar3) {
      return fVar4;
    }
    fVar4 = (float10)fVar3 - (float10)fVar2;
  }
  else {
    fVar4 = (float10)(DAT_0073ad34 - *(int *)(param_1 + 4)) * (float10)_DAT_006cca38;
    if ((float10)*(float *)(param_1 + 0xc) <= fVar4) {
      return (float10)_DAT_006cc7bc;
    }
  }
  return fVar4 / (float10)*(float *)(param_1 + 0xc);
}

