/* spd-match: far pct=18.75 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0064b510();
int __cdecl FUN_0064b580();
int __cdecl FUN_0064b5a0();

undefined4 FUN_005256f0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *local_4;
  
  FUN_0064b510(&local_4);
  FUN_0064b580();
  uVar1 = (**(code **)*local_4)(param_1,4,0xffffffff);
  FUN_0064b5a0();
  return uVar1;
}
