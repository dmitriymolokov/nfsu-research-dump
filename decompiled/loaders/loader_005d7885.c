/* spd-match: far pct=33.33 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

undefined4 FUN_005d7885(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 8))();
  }
  return uVar1;
}
