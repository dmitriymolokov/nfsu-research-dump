/* spd-match: far pct=4.66 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_c2113/batches/20260724T133058Z_w0_tc0 */
#include "ghidra_compat.h"

int __cdecl FUN_00583f20();
extern int DAT_006b7328;
extern int DAT_006b732c;
extern int _DAT_006b7308;
extern int _DAT_006b7320;
extern int _DAT_006b7324;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
extern int _DAT_006ccb7c;
extern int _DAT_007000ac;
extern unsigned char *PTR_DAT_00705ee8;
extern unsigned char *PTR_DAT_00705ef0;

float10 __fastcall FUN_00463bc0(undefined4 param_1,int param_2,float param_3)

{
  int iVar1;
  undefined *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined **ppuVar9;
  float10 fVar10;
  
  iVar1 = *(int *)(*(int *)(param_2 + 8) + 0x20);
  fVar3 = ABS(param_3);
  if (fVar3 <= _DAT_006ccb7c) {
    param_3 = 0.0;
  }
  else {
    param_3 = param_3 / fVar3;
  }
  fVar3 = (*(float *)(iVar1 + 0xd8) + *(float *)(iVar1 + 0xf8)) * _DAT_006cc7dc *
          *(float *)(iVar1 + 0x110) * fVar3;
  if (*(char *)(param_2 + 0x34) == '\0') {
    fVar4 = *(float *)(iVar1 + 0xdc) + *(float *)(iVar1 + 0xfc);
  }
  else {
    fVar4 = *(float *)(iVar1 + 0xe0) + *(float *)(iVar1 + 0x100);
  }
  ppuVar9 = &PTR_DAT_00705ef0;
  fVar4 = (_DAT_007000ac * *(float *)(iVar1 + 0x110) +
          (*(float *)(param_2 + 0x20) / *(float *)(param_2 + 0x10)) *
          (*(float *)(iVar1 + 0x268) + *(float *)(iVar1 + 0x264)) * _DAT_006cc7dc) *
          fVar4 * _DAT_006cc7dc;
  if (*(char *)(param_2 + 0x34) == '\0') {
    ppuVar9 = &PTR_DAT_00705ee8;
  }
  puVar2 = *ppuVar9;
  *(float *)(puVar2 + 8) = (((int)_DAT_006cc7bc) - (int)_DAT_006b7308) * fVar4;
  *(float *)(puVar2 + 0x10) = (((int)_DAT_006b7308) + (int)_DAT_006cc7bc) * fVar4;
  *(float *)(puVar2 + 0x18) = _DAT_006b7320 * fVar4;
  uVar8 = DAT_006b732c;
  uVar7 = DAT_006b7328;
  if ((bool)*(char *)(param_2 + 0x34) != fVar4 < fVar3) {
    iVar1 = *(int *)(param_2 + 0x2c);
    if (fVar3 <= fVar4) {
      *(undefined4 *)(iVar1 + 0x24) = DAT_006b7328;
      *(undefined4 *)(iVar1 + 0x54) = uVar7;
      iVar1 = *(int *)(param_2 + 0x2c);
      fVar5 = *(float *)(iVar1 + 4) * _DAT_006b7324;
      fVar6 = _DAT_006b7324 * *(float *)(iVar1 + 0x34);
      *(float *)(iVar1 + 4) = fVar5;
      if (fVar5 != *(float *)(iVar1 + 0xc)) {
        *(undefined2 *)(iVar1 + 0x2c) = 2;
      }
      *(float *)(iVar1 + 0x34) = fVar6;
      if (fVar6 != *(float *)(iVar1 + 0x3c)) {
        *(undefined2 *)(iVar1 + 0x5c) = 2;
      }
    }
    else {
      *(undefined4 *)(iVar1 + 0x24) = DAT_006b732c;
      *(undefined4 *)(iVar1 + 0x54) = uVar8;
    }
    *(bool *)(param_2 + 0x34) = fVar4 < fVar3;
  }
  fVar10 = (float10)FUN_00583f20(ppuVar9,fVar3);
  return fVar10 * (float10)param_3;
}
