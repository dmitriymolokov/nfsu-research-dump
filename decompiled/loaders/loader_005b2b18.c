/* spd-match: far pct=29.31 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_7/buckets/loaders_p2/attempt4 */
#include "ghidra_compat.h"

void __fastcall FUN_005b2b18(int param_1)

{
  int iVar1;
  void *_Memory;
  
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    _free(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  iVar1 = *(int *)(param_1 + 8);
  while (iVar1 != 0) {
    _Memory = *(void **)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)_Memory + 8);
    *(undefined4 *)((int)_Memory + 8) = 0;
    FUN_005b2b18(param_1);
    _free(_Memory);
    iVar1 = *(int *)(param_1 + 8);
  }
  return;
}
