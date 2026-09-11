/* spd-match: far pct=1.45 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_006603e0();

int FUN_006605c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if ((puVar1 != (undefined4 *)0x0) &&
     (param_2 = (*(code *)*puVar1)(puVar1,param_2,param_4,param_3,*(undefined1 *)(param_1 + 0x1a)),
     param_2 < 1)) {
    return param_2;
  }
  FUN_006603e0(param_1,param_2,param_3,param_4);
  return param_2;
}
