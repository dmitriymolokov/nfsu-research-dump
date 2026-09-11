/* spd-match: far pct=5.56 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

extern void *PTR_FUN_006a0bf4;

struct ThisCallBox {
  void FUN_005d78db(undefined4 param_2, undefined4 param_3, undefined4 param_4);
};
void ThisCallBox::FUN_005d78db(undefined4 param_2, undefined4 param_3, undefined4 param_4) {
  ((undefined4 *)this)[2] = param_2;
  ((undefined4 *)this)[3] = param_3;
  ((undefined4 *)this)[1] = 1;
  *((undefined4 *)this) = (unsigned int)&PTR_FUN_006a0bf4;
  ((undefined4 *)this)[4] = param_4;
  return;
}
