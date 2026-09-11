/* spd-match: far pct=10.91 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2296 */
#include "ghidra_compat.h"

extern int DAT_007363bc;
extern int DAT_007363d0;

void FUN_00410970(uint param_1)

{
  *(uint *)(((int)DAT_007363bc) + 0x10 + ((int)DAT_007363d0) * 0x18) =
       (((param_1 >> 0x18) << 8 | param_1 & 0xff) << 8 | param_1 >> 8 & 0xff) << 8 |
       param_1 >> 0x10 & 0xff;
  DAT_007363d0 = ((int)DAT_007363d0) + 1;
  return;
}
