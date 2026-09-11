/* spd-match: far pct=5.88 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

uint FUN_0063f150(int param_1)

{
  uint extraout_EAX;
  
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return extraout_EAX & 0xffffff00;
}
