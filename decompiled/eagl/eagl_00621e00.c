/* spd-match: far pct=69.23 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2106 */
#include "ghidra_compat.h"

unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);


struct ThisCallBox {
  undefined4 FUN_00621e00(undefined4 param_2);
};
undefined4 ThisCallBox::FUN_00621e00(undefined4 param_2) {
  undefined4 * param_1 = (undefined4 *)this;
  param_1 = (undefined4 *)*param_1;
  *param_1 = param_2;
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}
