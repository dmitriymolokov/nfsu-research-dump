/* spd-match: far pct=5.56 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

extern int DAT_006eb878;

void FUN_0067733f(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_006eb878)[param_1 * 2]);
  return;
}
