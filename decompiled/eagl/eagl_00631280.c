/* spd-match: far pct=6.90 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2110 */
#include "ghidra_compat.h"

int __cdecl FUN_00631210(...);
extern int _DAT_006a837c;
extern int _DAT_006a8380;
extern int _DAT_006cc7bc;

struct ThisCallBox {
  void FUN_00631280(float *param_2);
};
void ThisCallBox::FUN_00631280(float *param_2) {
  float fVar1;
  
  fVar1 = ((int)_DAT_006a8380) + (int)_DAT_006a8380;
  *param_2 = (((int)_DAT_006a837c) + (int)_DAT_006a837c) * (float)(*((ushort *)this) >> 1) - _DAT_006cc7bc;
  param_2[1] = (float)((ushort *)this)[1] * fVar1 - _DAT_006cc7bc;
  param_2[2] = (float)((ushort *)this)[2] * fVar1 - _DAT_006cc7bc;
  FUN_00631210((byte)*((ushort *)this) & 1,param_2);
  return;
}
