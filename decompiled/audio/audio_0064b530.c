/* spd-match: far pct=21.62 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

extern int DAT_00713c50;
extern int DAT_00713c58;
extern int DAT_00713c60;

undefined4 FUN_0064b530(void)

{
  DAT_00713c50 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
  DAT_00713c60 = 0;
  DAT_00713c58 = 1;
  return 0;
}
