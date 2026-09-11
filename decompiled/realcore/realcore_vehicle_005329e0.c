/* spd-match: far pct=17.50 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_00567220(...);
extern int DAT_0072d558;
extern void *PTR_FUN_006be4fc;

struct ThisCallBox {
  undefined4 * FUN_005329e0(byte param_2);
};
undefined4 * ThisCallBox::FUN_005329e0(byte param_2) {
  *((undefined4 *)this) = (unsigned int)&PTR_FUN_006be4fc;
  FUN_00567220();
  DAT_0072d558 = 0;
  if ((param_2 & 1) != 0) {
    _free(((undefined4 *)this));
  }
  return ((undefined4 *)this);
}
