/* spd-match: far pct=13.04 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

extern void *PTR_FUN_006a0be4;

struct ThisCallBox {
  void FUN_005d77e9(undefined4 param_2);
};
void ThisCallBox::FUN_005d77e9(undefined4 param_2) {
  ((undefined4 *)this)[2] = 0;
  ((undefined4 *)this)[3] = 0;
  *((undefined4 *)this) = (unsigned int)&PTR_FUN_006a0be4;
  ((undefined4 *)this)[1] = param_2;
  return;
}
