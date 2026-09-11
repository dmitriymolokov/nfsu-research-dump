/* spd-match: far pct=0.00 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_2_2 */
#include "ghidra_compat.h"

bool FUN_00672eeb(undefined4 param_1,undefined4 param_2)

{
  return ((*(unsigned short *)((unsigned char *)&(param_2) + 2)) & 0x7ff0) != 0x7ff0;
}
