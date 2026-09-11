/* spd-match: close pct=91.18 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_c2440_void_uint/batches/20260724T115249Z_w0_tp1 */
#include "ghidra_compat.h"

int __cdecl FUN_00613825(...);
extern void *PTR_FUN_006a6030;

struct ThisCallBox {
  undefined4 * FUN_00612c37(byte param_2);
};
undefined4 * ThisCallBox::FUN_00612c37(byte param_2) {
  *((undefined4 *)this) = (unsigned int)&PTR_FUN_006a6030;
  FUN_00613825();
  if ((param_2 & 1) != 0) {
    _free(((undefined4 *)this));
  }
  return ((undefined4 *)this);
}
