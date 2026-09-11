/* spd-match: far pct=15.15 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00661210();

int FUN_00660760(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if ((puVar1 != (undefined4 *)0x0) &&
     (iVar2 = (*(code *)*puVar1)(puVar1,param_2,param_4,param_3,*(undefined1 *)(param_1 + 0x1a)),
     iVar2 < 1)) {
    return iVar2;
  }
  FUN_00661210(param_1 + 0x1c,param_2,param_3,param_4);
  return param_2;
}
