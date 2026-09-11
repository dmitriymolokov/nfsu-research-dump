/* spd-match: far pct=42.86 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

extern int DAT_007177d0;

void FUN_00668cf0(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = &DAT_007177d0;
  }
  param_1[2] = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}
