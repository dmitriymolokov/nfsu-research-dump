/* spd-match: far pct=24.44 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/ptr_arith_misc_p2/batches/attempt2_probe */
#include "ghidra_compat.h"

unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);

int __cdecl FUN_005b5e96();

void __fastcall FUN_005b5f73(int param_1)

{
  int iVar1;
  void *_Memory;
  
  iVar1 = *(int *)(param_1 + 0x28);
  while (iVar1 != 0) {
    _Memory = *(void **)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)((int)_Memory + 0x28);
    *(undefined4 *)((int)_Memory + 0x28) = 0;
    FUN_005b5f73(param_1);
    _free(_Memory);
    iVar1 = *(int *)(param_1 + 0x28);
  }
  FUN_005b5e96();
  return;
}
