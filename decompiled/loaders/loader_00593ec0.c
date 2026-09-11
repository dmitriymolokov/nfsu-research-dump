/* spd-match: far pct=7.66 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2106 */
#include "ghidra_compat.h"

unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);

int __cdecl FUN_00593c20(...);
int __cdecl FUN_00593c70(...);
extern int DAT_006cc7a4;
extern int _DAT_006cc7ac;
extern int _DAT_006cc7bc;

struct ThisCallBox {
  void FUN_00593ec0(float param_2, float param_3, float param_4);
};
void ThisCallBox::FUN_00593ec0(float param_2, float param_3, float param_4) {
  float * param_1 = (float *)this;
  short sVar1;
  float fVar2;
  float *extraout_ECX;
  float *extraout_ECX_00;
  float extraout_EDX;
  
  sVar1 = *(short *)(param_1 + 0xb);
  if (sVar1 != 0) {
    if (sVar1 != 1) {
      if (sVar1 != 2) {
        return;
      }
      param_1[8] = 0.0;
      if (*(short *)((int)param_1 + 0x2e) == 0) {
        *(undefined2 *)(param_1 + 0xb) = 1;
      }
      if (DAT_006cc7a4 < param_3) {
        FUN_00593c20(param_3);
        param_1 = extraout_ECX;
        param_3 = extraout_EDX;
      }
      fVar2 = param_1[2] - *param_1;
      param_1[6] = param_1[1];
      param_1[7] = *param_1;
      param_1[4] = (param_1[3] + param_1[1]) - (fVar2 + fVar2);
      param_1[5] = (fVar2 * _DAT_006cc7ac - param_1[3]) - (param_1[1] + param_1[1]);
      if (DAT_006cc7a4 < param_4) {
        FUN_00593c70(param_3);
        param_1 = extraout_ECX_00;
      }
    }
    fVar2 = param_2 / param_1[9] + param_1[8];
    param_1[8] = fVar2;
    if (fVar2 < param_1[10]) {
      *param_1 = ((fVar2 * param_1[4] + param_1[5]) * fVar2 + param_1[6]) * fVar2 + param_1[7];
      param_1[1] = (param_1[5] + param_1[5] + fVar2 * param_1[4] * _DAT_006cc7ac) * fVar2 +
                   param_1[6];
    }
    else {
      *(undefined2 *)(param_1 + 0xb) = 0;
      if (_DAT_006cc7bc <= param_1[10]) {
        *param_1 = param_1[2];
        param_1[1] = param_1[3];
        return;
      }
    }
  }
  return;
}
