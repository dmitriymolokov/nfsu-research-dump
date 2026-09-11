/* spd-match: far pct=3.92 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

extern void *PTR_FUN_006a0c24;

struct ThisCallBox {
  void FUN_005d7c6e(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5);
};
void ThisCallBox::FUN_005d7c6e(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5) {
  ((undefined4 *)this)[2] = 0;
  ((undefined4 *)this)[3] = 0;
  ((undefined4 *)this)[4] = param_2;
  ((undefined4 *)this)[5] = param_3;
  ((undefined4 *)this)[6] = param_4;
  ((undefined4 *)this)[1] = 4;
  *((undefined4 *)this) = (unsigned int)&PTR_FUN_006a0c24;
  ((undefined4 *)this)[7] = param_5;
  return;
}
