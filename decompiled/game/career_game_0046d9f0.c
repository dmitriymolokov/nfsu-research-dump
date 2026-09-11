/* spd-match: far pct=4.06 M4.0.2-CE */
/* Decompiled from Speed.exe @ 0046d9f0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#ifndef M4_02_NAN_PRED
#define M4_02_NAN_PRED
#undef NAN
#define NAN(x) ((x)!=(x))
#endif

float10 __fastcall FUN_0046d9f0(undefined4 param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  fVar5 = (float10)DAT_006cc7a4;
  iVar2 = *(int *)(param_2 + 0x18);
  if (_DAT_006cc8bc <= *(float *)(iVar2 + 0x10)) {
    iVar3 = *(int *)(param_2 + 0x30);
    iVar4 = *(int *)(param_2 + 0x2c);
    fVar5 = (((float10)*(float *)(iVar4 + 0x108) -
             (float10)*(float *)(*(int *)(iVar4 + 0x14) + 0x10) * (float10)*(float *)(iVar4 + 0x118)
             ) / (float10)*(float *)(iVar4 + 0x2c) +
            ((float10)*(float *)(iVar3 + 0x108) -
            (float10)*(float *)(*(int *)(iVar3 + 0x14) + 0x10) * (float10)*(float *)(iVar3 + 0x118))
            / (float10)*(float *)(iVar3 + 0x2c)) * (float10)_DAT_006cc7dc *
            (float10)*(float *)(iVar2 + 0xc);
  }
  fVar1 = *(float *)(iVar2 + 0x10);
  if ((!NAN(fVar1) && !NAN(_DAT_006cc96c)) && fVar1 < _DAT_006cc96c != (fVar1 == _DAT_006cc96c)) {
    iVar3 = *(int *)(param_2 + 0x28);
    iVar4 = *(int *)(param_2 + 0x24);
    fVar5 = (((float10)*(float *)(iVar4 + 0x108) -
             (float10)*(float *)(*(int *)(iVar4 + 0x14) + 0x10) * (float10)*(float *)(iVar4 + 0x118)
             ) / (float10)*(float *)(iVar4 + 0x2c) +
            ((float10)*(float *)(iVar3 + 0x108) -
            (float10)*(float *)(*(int *)(iVar3 + 0x14) + 0x10) * (float10)*(float *)(iVar3 + 0x118))
            / (float10)*(float *)(iVar3 + 0x2c)) * (float10)_DAT_006cc7dc *
            (float10)*(float *)(iVar2 + 8) + fVar5;
    if (_DAT_006cc8bc <= *(float *)(iVar2 + 0x10)) {
      fVar5 = fVar5 * (float10)_DAT_006cc7dc;
    }
  }
  return fVar5 * (float10)*(float *)(iVar2 + 0x20 + *(int *)(param_2 + 0x3c) * 4);
}

