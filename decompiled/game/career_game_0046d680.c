/* spd-match: far pct=3.42 M4.0.2-CE */
/* Decompiled from Speed.exe @ 0046d680 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#ifndef M4_02_NAN_PRED
#define M4_02_NAN_PRED
#undef NAN
#define NAN(x) ((x)!=(x))
#endif

float10 __fastcall FUN_0046d680(undefined4 param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = *(int *)(param_2 + 0x18);
  fVar3 = (float10)DAT_006cc7a4;
  if (_DAT_006cc8bc <= *(float *)(iVar2 + 0x10)) {
    fVar3 = ((float10)*(float *)(*(int *)(param_2 + 0x30) + 0x28) +
            (float10)*(float *)(*(int *)(param_2 + 0x2c) + 0x28)) * (float10)_DAT_006cc7dc *
            (float10)*(float *)(iVar2 + 0xc);
  }
  fVar1 = *(float *)(iVar2 + 0x10);
  if (((!NAN(fVar1) && !NAN(_DAT_006cc96c)) && fVar1 < _DAT_006cc96c != (fVar1 == _DAT_006cc96c)) &&
     (fVar3 = ((float10)*(float *)(*(int *)(param_2 + 0x28) + 0x28) +
              (float10)*(float *)(*(int *)(param_2 + 0x24) + 0x28)) * (float10)_DAT_006cc7dc *
              (float10)*(float *)(iVar2 + 8) + fVar3, _DAT_006cc8bc <= *(float *)(iVar2 + 0x10))) {
    fVar3 = fVar3 * (float10)_DAT_006cc7dc;
  }
  return fVar3 * (float10)*(float *)(iVar2 + 0x20 + *(int *)(param_2 + 0x3c) * 4);
}

