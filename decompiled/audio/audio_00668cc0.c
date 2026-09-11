/* spd-match: far pct=72.73 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

extern int DAT_007177d0;

void FUN_00668cc0(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = &DAT_007177d0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}
