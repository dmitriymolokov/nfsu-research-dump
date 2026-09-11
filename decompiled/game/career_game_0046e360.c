/* spd-match: far pct=3.29 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_uchar_float */
#include "ghidra_compat.h"

int __cdecl FUN_0046cff0();
int __cdecl FUN_0046d9f0();
int __cdecl FUN_0046e020();
extern int _DAT_006b7240;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
extern int _DAT_006cc8bc;
extern int _DAT_006cc96c;
int unaff_ESI;

void FUN_0046e360(void)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  
  if (*(int *)(unaff_ESI + 0x44) == 3) {
    iVar1 = *(int *)(unaff_ESI + 0x20);
    fVar3 = (float10)FUN_0046cff0();
    fVar4 = (float10)*(float *)(*(int *)(iVar1 + 0x18) + 0xc);
    iVar2 = *(int *)(*(int *)(iVar1 + 0x20) + 0x44);
    if ((iVar2 == 2) || (iVar2 == 0)) {
      fVar4 = fVar4 * (float10)(unsigned int)(_DAT_006b7240);
    }
    fVar6 = (float)((fVar3 + (float10)*(float *)(iVar1 + 0x7c)) / fVar4);
    fVar3 = (float10)FUN_0046d9f0(fVar6);
    fVar4 = (float10)(unsigned int)(_DAT_006cc7bc) /
            (float10)*(float *)(*(int *)(*(int *)(unaff_ESI + 0x20) + 0x18) + 0xc);
    iVar1 = *(int *)(unaff_ESI + 0x18);
    if (*(float *)(iVar1 + 0x10) < _DAT_006cc96c != (*(float *)(iVar1 + 0x10) == _DAT_006cc96c)) {
      fVar5 = (float10)*(float *)(iVar1 + 0x20 + *(int *)(unaff_ESI + 0x3c) * 4) *
              (float10)*(float *)(iVar1 + 8);
      fVar4 = (((float10)(unsigned int)(_DAT_006cc7bc) - (float10)*(float *)(iVar1 + 0x10)) /
              (float10)*(float *)(*(int *)(unaff_ESI + 0x24) + 0x2c)) * fVar5 * fVar5 *
              (float10)(unsigned int)(_DAT_006cc7dc) + fVar4;
    }
    if (_DAT_006cc8bc <= *(float *)(iVar1 + 0x10)) {
      fVar5 = (float10)*(float *)(iVar1 + 0x20 + *(int *)(unaff_ESI + 0x3c) * 4) *
              (float10)*(float *)(iVar1 + 0xc);
      fVar4 = (fVar5 / (float10)*(float *)(*(int *)(unaff_ESI + 0x2c) + 0x2c)) * fVar5 *
              (float10)*(float *)(iVar1 + 0x10) * (float10)(unsigned int)(_DAT_006cc7dc) + fVar4;
    }
    FUN_0046e020((float)(((float10)fVar6 - fVar3) / fVar4));
  }
  return;
}
