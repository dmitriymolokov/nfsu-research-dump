/* spd-match: far pct=2.11 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2106 */
#include "ghidra_compat.h"

unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);

int __cdecl FUN_005a7690(...);

struct ThisCallBox {
  void FUN_005a6ef0(int param_2, undefined4 param_3);
};
void ThisCallBox::FUN_005a6ef0(int param_2, undefined4 param_3) {
  int param_1 = (int)this;
  bool bVar1;
  float10 fVar2;
  float10 fVar3;
  
  bVar1 = true;
  if (param_1 < *(int *)(param_2 + 4) + -1) {
    do {
      if (!bVar1) {
        return;
      }
      fVar2 = (float10)FUN_005a7690(param_3);
      fVar3 = (float10)FUN_005a7690(param_3);
      bVar1 = fVar3 < (float10)(float)fVar2 != (fVar3 == (float10)(float)fVar2);
      param_1 = param_1 + 1;
    } while (param_1 < *(int *)(param_2 + 4) + -1);
  }
  return;
}
