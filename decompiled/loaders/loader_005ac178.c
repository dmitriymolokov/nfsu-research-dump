/* spd-match: far pct=28.21 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_7/buckets/loaders_p2/attempt3 */
#include "ghidra_compat.h"

int __cdecl FUN_005b065b();

extern void (*pcRam006d4b90)(undefined4,undefined4,undefined4,undefined4,undefined4,undefined4);

void FUN_005ac178(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  FUN_005b065b(1);
  (*pcRam006d4b90)(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}
