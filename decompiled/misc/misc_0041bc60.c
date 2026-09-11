/* spd-match: far pct=4.05 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2106 */
#include "ghidra_compat.h"

unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);

int __cdecl FUN_00419c20(...);

struct ThisCallBox {
  void FUN_0041bc60(undefined4 param_2, int *param_3);
};
void ThisCallBox::FUN_0041bc60(undefined4 param_2, int *param_3) {
  uint param_1 = (uint)this;
  int *piVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  if (100 < param_1) {
    param_1 = 100;
  }
  local_4 = (param_1 * 10000) / 100;
  local_14 = 0x14;
  local_10 = 0x10;
  local_c = 0;
  local_8 = 0;
  FUN_00419c20("Setting gain to %d\n",param_1);
  piVar1 = (int *)*param_3;
  if (piVar1 != (int *)0x0) {
    param_3 = (int *)(**(code **)(*piVar1 + 0x18))(piVar1,7,&local_14);
  }
  if ((int)param_3 < 0) {
    FUN_00419c20("ERROR: Failed to set overall force gain\n");
  }
  return;
}
