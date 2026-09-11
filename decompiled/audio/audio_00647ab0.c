/* spd-match: far pct=5.33 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2106 */
#include "ghidra_compat.h"

unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);

int __cdecl FUN_005b5e6c(...);
int __cdecl FUN_00645e90(...);
int __cdecl FUN_006497d0(...);

struct ThisCallBox {
  int FUN_00647ab0(uint param_2);
};
int ThisCallBox::FUN_00647ab0(uint param_2) {
  int param_1 = (int)this;
  if ((param_2 & 2) == 0) {
    FUN_006497d0();
    if ((param_2 & 1) != 0) {
      FUN_00645e90(param_1);
    }
  }
  else {
    FUN_005b5e6c(param_1,0x34,*(undefined4 *)(param_1 + -4),FUN_006497d0);
    if ((param_2 & 1) != 0) {
      FUN_00645e90(param_1 + -4);
    }
    param_1 = param_1 + -4;
  }
  return param_1;
}
