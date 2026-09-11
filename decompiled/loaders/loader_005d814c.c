/* spd-match: far pct=12.28 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

extern void *PTR_FUN_006a0c64;

struct ThisCallBox {
  void FUN_005d814c(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6);
};
void ThisCallBox::FUN_005d814c(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6) {
  ((undefined4 *)this)[2] = 0;
  ((undefined4 *)this)[3] = 0;
  ((undefined4 *)this)[4] = param_2;
  ((undefined4 *)this)[5] = param_3;
  ((undefined4 *)this)[6] = param_4;
  ((undefined4 *)this)[7] = param_5;
  ((undefined4 *)this)[1] = 8;
  *((undefined4 *)this) = (unsigned int)&PTR_FUN_006a0c64;
  ((undefined4 *)this)[8] = param_6;
  return;
}
