/* spd-match: far pct=22.22 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

uint FUN_005d7866(int *param_1,int param_2)

{
  uint uVar1;
  
  if (param_1 == (int *)0x0) {
    uVar1 = (uint)(param_2 == 0);
  }
  else {
    uVar1 = (**(code **)(*param_1 + 4))(param_2);
  }
  return uVar1;
}
