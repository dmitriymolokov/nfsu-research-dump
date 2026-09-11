/* spd-match: far pct=32.05 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/ptr_arith_misc_p2/batches/attempt2_probe */
#include "ghidra_compat.h"

unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);

int __cdecl FUN_005b5e96();

void __fastcall FUN_005b5fe7(int param_1)

{
  void *pvVar1;
  
  while (*(int *)(param_1 + 0x30) != 0) {
    pvVar1 = *(void **)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)((int)pvVar1 + 0x30);
    *(undefined4 *)((int)pvVar1 + 0x30) = 0;
    FUN_005b5fe7(param_1);
    _free(pvVar1);
  }
  while (*(int *)(param_1 + 0x34) != 0) {
    pvVar1 = *(void **)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)((int)pvVar1 + 0x34);
    *(undefined4 *)((int)pvVar1 + 0x34) = 0;
    FUN_005b5fe7(param_1);
    _free(pvVar1);
  }
  FUN_005b5e96();
  return;
}
