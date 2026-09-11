/* spd-match: far pct=30.43 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

extern int DAT_0070d358;
extern int DAT_0070d35c;
extern unsigned char *DAT_0070d364;
extern int _DAT_0070d354;
extern unsigned char *PTR_FUN_006dfa9c;

void FUN_00627360(undefined4 param_1)

{
  DAT_0070d358 = param_1;
  DAT_0070d35c = (*(code *)PTR_FUN_006dfa9c)(param_1,"EAGLAnim Memory Pool");
  _DAT_0070d354 = 0;
  (**(code **)(*DAT_0070d364 + 0x34))();
  return;
}
