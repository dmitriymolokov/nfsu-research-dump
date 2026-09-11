/* spd-match: far pct=5.72 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2111 */
#include "ghidra_compat.h"

int __cdecl FUN_0046d1c0();
int __cdecl FUN_00583ea0();
extern int DAT_006cc7a4;
extern int DAT_006fff30;
extern int DAT_00700034;
extern int _DAT_006b5c08;
extern int _DAT_006b5c0c;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
extern int _DAT_006cc8b0;
extern int _DAT_006cc93c;
extern int _DAT_006cc9f0;
extern int _DAT_006ccb78;
extern int _DAT_006ccbd8;
extern int _DAT_006ccbdc;

void FUN_00580590(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  float *pfVar8;
  float *pfVar9;
  float10 fVar10;
  bool local_7d;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  undefined1 local_48 [8];
  float local_40 [16];
  
  *(undefined4 *)(param_1 + 0x434) = 0;
  *(undefined4 *)(param_1 + 0x430) = 0;
  local_78 = *(float *)(param_1 + 0x250);
  if (local_78 < *(float *)(param_1 + 600)) {
    do {
      fVar10 = (float10)FUN_00583ea0(local_78);
      fVar10 = fVar10 * (float10)local_78 * (float10)_DAT_006ccbdc;
      if ((float10)*(float *)(param_1 + 0x430) < fVar10) {
        *(float *)(param_1 + 0x430) = (float)fVar10;
        *(float *)(param_1 + 0x434) = local_78;
      }
      local_78 = local_78 + _DAT_006cc93c;
    } while (local_78 < *(float *)(param_1 + 600));
  }
  fVar4 = *(float *)(param_1 + 0x170);
  *(undefined4 *)(param_1 + 0x438) = 0;
  *(undefined4 *)(param_1 + 0x440) = 0;
  *(undefined4 *)(param_1 + 0x43c) = 0;
  fVar1 = *(float *)(param_1 + 0x220);
  fVar5 = _DAT_006cc7bc - fVar1;
  fVar2 = *(float *)(param_1 + 0xe0);
  fVar3 = *(float *)(param_1 + 0x80);
  local_7c = 0.0;
  local_74 = 0.0;
  local_70 = 0.0;
  bVar7 = 1;
  local_78 = 1.0;
  fVar6 = fVar1 * *(float *)(param_1 + 0x21c) + fVar5 * *(float *)(param_1 + 0x218);
  FUN_0046d1c0(param_1 + 0x210,local_48);
  fVar1 = _DAT_006cc7bc / (fVar5 * fVar3 + fVar1 * fVar2);
  local_7d = false;
  pfVar9 = local_40;
  pfVar8 = (float *)(param_1 + 0x238);
  do {
    fVar2 = fVar1 * local_7c * *pfVar8 * fVar6 * _DAT_006ccb78;
    if ((local_7d) || (((int)(DAT_006fff30)) + *pfVar9 < fVar2 == (((int)(DAT_006fff30)) + *pfVar9 == fVar2))) {
      local_7d = false;
      fVar10 = (float10)FUN_00583ea0(fVar2);
      fVar10 = (fVar10 * (float10)*pfVar8 * (float10)fVar6 * (float10)fVar1) / (float10)fVar4;
    }
    else {
      local_7d = true;
      local_78 = _DAT_006b5c08 * (float)(&DAT_00700034)[bVar7 - 1 & 2] + local_78;
      if (local_78 < DAT_006cc7a4 == (local_78 == DAT_006cc7a4)) {
        local_7d = _DAT_006cc7bc <= local_78;
        if (local_7d) {
          pfVar9 = pfVar9 + 1;
          local_78 = 1.0;
          bVar7 = 1;
          pfVar8 = pfVar8 + 1;
        }
        local_7d = !local_7d;
        fVar10 = (float10)DAT_006cc7a4;
      }
      else {
        fVar10 = (float10)DAT_006cc7a4;
        local_78 = 0.0;
        bVar7 = 0;
      }
    }
    local_74 = ((int)(_DAT_006b5c08)) + local_74;
    fVar10 = (fVar10 - ((float10)local_7c * (float10)*(float *)(param_1 + 0x2c0) * (float10)local_7c
                       ) / (float10)*(float *)(param_1 + 0x170)) * (float10)_DAT_006b5c08;
    local_70 = (float)(((float10)_DAT_006cc7dc * fVar10 + (float10)local_7c) *
                       (float10)((int)(_DAT_006b5c08)) + (float10)local_70);
    local_7c = (float)(fVar10 + (float10)local_7c);
    if ((*(float *)(param_1 + 0x438) == DAT_006cc7a4) && (_DAT_006cc8b0 <= local_7c * _DAT_006cc9f0)
       ) {
      *(float *)(param_1 + 0x438) = _DAT_006b5c0c * local_74;
    }
    if ((*(float *)(param_1 + 0x43c) == DAT_006cc7a4) && (_DAT_006ccbd8 <= local_70)) {
      *(float *)(param_1 + 0x43c) = local_74;
      *(float *)(param_1 + 0x440) = local_7c;
    }
  } while (((*(float *)(param_1 + 0x438) == DAT_006cc7a4) ||
           (*(float *)(param_1 + 0x43c) == DAT_006cc7a4)) ||
          (*(float *)(param_1 + 0x440) == DAT_006cc7a4));
  return;
}
