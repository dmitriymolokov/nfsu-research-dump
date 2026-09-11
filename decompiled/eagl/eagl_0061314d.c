/* spd-match: far pct=4.55 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_c2440_uint_uint/batches/20260724T132840Z_w0_tp1 */
#include "ghidra_compat.h"

struct ThisCallBox {
  void FUN_0061314d(undefined4 param_2);
};
void ThisCallBox::FUN_0061314d(undefined4 param_2) {
  ((undefined4 *)this)[1] = 0;
  *((undefined4 *)this) = param_2;
  ((undefined4 *)this)[2] = 0;
  ((undefined4 *)this)[3] = (unsigned int)(((undefined4 *)this) + 2);
  return;
}
