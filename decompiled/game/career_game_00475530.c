/* spd-match: far pct=3.96 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_p3/buckets/C229x_illegal_operand/batches/20260724T141934Z_w0_tp1 */
#include "ghidra_compat.h"

double __cdecl sqrt(double);
int __cdecl abs(int);

int __cdecl FUN_00583ea0(...);
int __cdecl FUN_00583f20(...);
extern int DAT_006b71a0;
extern int DAT_006b71bc;
extern int DAT_006cc7a4;
extern int _DAT_006b7198;
extern int _DAT_006b71b8;
extern int _DAT_006b71c0;
extern int _DAT_006b71c4;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
extern int _DAT_006cc964;
extern int _DAT_006ccb4c;
extern int _DAT_006ccc10;
extern int _DAT_006ccc14;
extern void *PTR_DAT_00705e78;

struct ThisCallBox {
  int FUN_00475530(int param_2);
};
int ThisCallBox::FUN_00475530(int param_2) {
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float local_20;
  float *local_1c;
  float local_14;
  float *local_10;
  float local_c;
  
  local_10 = (float *)(((int)this) + 0x74);
  local_1c = (float *)(((int)this) + 0x24);
  iVar6 = 0;
  do {
    fVar7 = (float10)((int)DAT_006cc7a4);
    local_20 = *(float *)(*(int *)(((int)this) + 0x18) + 0x1c0);
    if (iVar6 < 2) {
      local_20 = ((int)_DAT_006cc7bc) - local_20;
    }
    if (local_1c[0x25] == 0.0) {
      fVar2 = *(float *)(((int)this) + 0x120) / *(float *)(((int)this) + 0x138);
      fVar7 = (float10)FUN_00583ea0(fVar2);
      fVar1 = *(float *)(((int)this) + 0x128);
      fVar8 = (float10)FUN_00583ea0(fVar2);
      fVar7 = (float10)(float)(fVar7 * (float10)fVar1) -
              ((float10)((int)_DAT_006cc7bc) - (float10)*(float *)(((int)this) + 0x128)) * fVar8;
      if (*(int *)(((int)this) + 0x194) != 0) {
        fVar8 = (float10)FUN_00583ea0(fVar2);
        fVar7 = fVar8 * (float10)*(float *)(*(int *)(((int)this) + 0x18) + 0x2ac) +
                (float10)(float)fVar7;
      }
      if ((*(float *)(((int)this) + 0x128) < _DAT_006cc964) &&
         (*(float *)(((int)this) + 0x120) == *(float *)(*(int *)(((int)this) + 0x18) + 0x1f0))) {
        fVar7 = (float10)((int)DAT_006cc7a4);
      }
      fVar1 = *(float *)(*(int *)(((int)this) + 0x18) + 0x1b8 + (uint)(iVar6 < 2) * 4);
      fVar2 = *(float *)(*(int *)(((int)this) + 0x18) + 0x1d0 + *(int *)(((int)this) + 0x124) * 4);
      fVar3 = *local_1c;
      fVar8 = (float10)((int)_DAT_006cc7dc);
      fVar5 = _DAT_006ccc10;
      if ((_DAT_006ccc10 < fVar3) && (fVar5 = fVar3, _DAT_006ccb4c < fVar3)) {
        fVar5 = _DAT_006ccb4c;
      }
      local_c = DAT_006b71a0;
      local_14 = DAT_006b71bc;
      fVar3 = _DAT_006b7198 * *(float *)(((int)this) + 300) * fVar5 * ((int)_DAT_006ccc14);
      if (_DAT_006cc7bc < *(float *)(((int)this) + 0x138)) {
        fVar5 = *(float *)(((int)this) + 0x138) - _DAT_006cc7bc;
        local_14 = (((int)_DAT_006b71c0) * fVar5 + _DAT_006cc7bc) * ((int)DAT_006b71bc);
        local_c = (fVar5 * ((int)_DAT_006b71c4) + _DAT_006cc7bc) * ((int)DAT_006b71a0);
      }
      iVar4 = *(int *)(((int)this) + 0x14);
      fVar9 = (float10)FUN_00583f20(&PTR_DAT_00705e78,
                                    SQRT(*(float *)(iVar4 + 0xa8) * *(float *)(iVar4 + 0xa8) +
                                         *(float *)(iVar4 + 0xa4) * *(float *)(iVar4 + 0xa4) +
                                         *(float *)(iVar4 + 0xa0) * *(float *)(iVar4 + 0xa0)));
      if (DAT_006cc7a4 < local_20) {
        fVar9 = (fVar9 / ((float10)local_c * (float10)local_14)) * (float10)local_20;
      }
      fVar7 = ((float10)local_14 *
               (float10)(float)((float10)fVar1 * (float10)fVar2 * fVar7 * (float10)local_20 * fVar8)
              + (float10)fVar3) - fVar9 * (float10)*local_10;
    }
    iVar6 = iVar6 + 1;
    local_1c = local_1c + 1;
    *(float *)(param_2 + -4 + iVar6 * 4) = (float)(fVar7 / (float10)((int)_DAT_006b71b8));
    local_10 = local_10 + 2;
  } while (iVar6 < 4);
  return param_2;
}
