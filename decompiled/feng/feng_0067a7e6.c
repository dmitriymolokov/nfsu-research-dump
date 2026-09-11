/* spd-match: far pct=22.22 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_2_2 */
#include "ghidra_compat.h"

undefined4 __sptype(int param_1,uint param_2)

{
  undefined4 uStack_8;
  
  if (param_2 == 0x7ff00000) {
    if (param_1 == 0) {
      return 1;
    }
  }
  else if ((param_2 == 0xfff00000) && (param_1 == 0)) {
    return 2;
  }
  if (((*(unsigned short *)((unsigned char *)&(param_2) + 2)) & 0x7ff8) == 0x7ff8) {
    uStack_8 = 3;
  }
  else {
    if ((((*(unsigned short *)((unsigned char *)&(param_2) + 2)) & 0x7ff8) != 0x7ff0) || (((param_2 & 0x7ffff) == 0 && (param_1 == 0)))) {
      return 0;
    }
    uStack_8 = 4;
  }
  return uStack_8;
}
