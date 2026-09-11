/* spd-match: far pct=17.95 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/ptr_arith_misc_p2/batches/20260724T142234Z_w0_tc0 */
#include "ghidra_compat.h"

unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);


void __fastcall FUN_005c8eec(int param_1)

{
  int iVar1;
  void *_Memory;
  
  iVar1 = *(int *)(param_1 + 0x10);
  while (param_1 != iVar1) {
    _Memory = *(void **)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)_Memory + 0x10);
    *(void **)((int)_Memory + 0x10) = _Memory;
    FUN_005c8eec(param_1);
    _free(_Memory);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  return;
}
