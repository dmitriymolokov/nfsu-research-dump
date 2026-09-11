/* spd-match: close pct=80.85 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_cheap/batches/20260724T093108Z_w1_tc0 */
#include "ghidra_compat.h"

extern int DAT_007177d0;

void FUN_00668df0(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = &DAT_007177d0;
  }
  if (1 < (uint)param_1[1]) {
    param_1[1] = param_1[1] - 1;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}
