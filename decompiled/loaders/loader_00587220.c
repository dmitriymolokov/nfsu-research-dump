/* spd-match: far pct=18.80 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_p3/buckets/C229x_illegal_operand/batches/20260724T141934Z_w0_tp1 */
#include "ghidra_compat.h"

double __cdecl sqrt(double);
int __cdecl abs(int);

extern int _DAT_006cc7bc;
extern int _DAT_006f0784;
extern int _DAT_006f0788;
extern int _DAT_006f078c;
extern int _DAT_006f0790;

struct ThisCallBox {
  void FUN_00587220(float param_2);
};
void ThisCallBox::FUN_00587220(float param_2) {
  float fVar1;
  
  fVar1 = (*(float *)(*(int *)(((int)this) + 0x1c) + 4) * *(float *)(((int)this) + 0x170) * ((int)_DAT_006f0784) +
          *(float *)(*(int *)(((int)this) + 0x1c) + 8) * *(float *)(((int)this) + 0x174) * ((int)_DAT_006f0788)) * ((int)_DAT_006f078c);
  if (fVar1 <= *(float *)(*(int *)(((int)this) + 0x14) + 0x10) * param_2 +
               ABS(*(float *)(((int)this) + 0x28)) * ((int)_DAT_006f0790)) {
    *(undefined4 *)(((int)this) + 0x10c) = 0;
    return;
  }
  if (_DAT_006cc7bc < fVar1) {
    *(undefined4 *)(((int)this) + 0x10c) = 1;
    *(undefined4 *)(((int)this) + 0x28) = 0;
    return;
  }
  *(undefined4 *)(((int)this) + 0x10c) = 0;
  *(undefined4 *)(((int)this) + 0x28) = 0;
  return;
}
