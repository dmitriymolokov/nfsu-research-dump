/* spd-match: far pct=34.00 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

extern void *PTR_FUN_006bf5a8;

struct ThisCallBox {
  undefined4 * FUN_005204a0(byte param_2);
};
undefined4 * ThisCallBox::FUN_005204a0(byte param_2) {
  *((undefined4 *)this) = (unsigned int)&PTR_FUN_006bf5a8;
  if ((void *)((undefined4 *)this)[1] != (void *)0x0) {
    _free((void *)((undefined4 *)this)[1]);
    ((undefined4 *)this)[1] = 0;
  }
  *(undefined1 *)(((undefined4 *)this) + 4) = 0;
  if ((param_2 & 1) != 0) {
    _free(((undefined4 *)this));
  }
  return ((undefined4 *)this);
}
