/* spd-match: far pct=27.50 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_7/buckets/loaders_p2/attempt4 */
#include "ghidra_compat.h"

void __fastcall FUN_005b2ab5(int param_1)

{
  int iVar1;
  void *_Memory;
  
  iVar1 = *(int *)(param_1 + 0x14);
  while (iVar1 != 0) {
    _Memory = *(void **)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((int)_Memory + 0x14);
    *(undefined4 *)((int)_Memory + 0x14) = 0;
    FUN_005b2ab5(param_1);
    _free(_Memory);
    iVar1 = *(int *)(param_1 + 0x14);
  }
  return;
}
