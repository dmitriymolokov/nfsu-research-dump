/* spd-match: far pct=5.56 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

extern int DAT_0071402c;

void FUN_00652d50(void)

{
  DAT_0071402c = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
  return;
}
