/* spd-match: far pct=10.05 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_p3/buckets/C229x_illegal_operand/batches/20260724T141934Z_w0_tp1 */
#include "ghidra_compat.h"

double __cdecl sqrt(double);
int __cdecl abs(int);

extern int DAT_006cc7a4;
extern int _DAT_006cc7a8;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
extern int _DAT_006cca8c;

struct ThisCallBox {
  void FUN_00593c70(float param_2);
};
void ThisCallBox::FUN_00593c70(float param_2) {
  float fVar1;
  float fVar2;
  float fVar3;
  float local_c;
  
  fVar3 = _DAT_006cc7bc / *(float *)(((int)this) + 0x24);
  fVar1 = *(float *)(((int)this) + 0x14) + *(float *)(((int)this) + 0x14);
  local_c = (((int)DAT_006cc7a4) * fVar3 * *(float *)(((int)this) + 0x10) * ((int)_DAT_006cc7a8) + fVar1) * fVar3 *
            fVar3;
  fVar2 = ABS(local_c);
  fVar3 = (fVar3 * *(float *)(((int)this) + 0x24) * *(float *)(((int)this) + 0x10) * ((int)_DAT_006cc7a8) + fVar1)
          * fVar3 * fVar3;
  if (param_2 < fVar2) {
    local_c = (fVar2 / local_c) * param_2;
  }
  if (ABS(fVar3) <= param_2) {
    if (fVar2 <= param_2) {
      return;
    }
  }
  else {
    fVar3 = (ABS(fVar3) / fVar3) * param_2;
  }
  fVar1 = *(float *)(((int)this) + 0x24) * *(float *)(((int)this) + 0x24);
  local_c = local_c * fVar1;
  *(float *)(((int)this) + 0x14) = ((int)_DAT_006cc7dc) * local_c;
  *(float *)(((int)this) + 0x10) = (fVar1 * fVar3 - local_c) * ((int)_DAT_006cca8c);
  return;
}
