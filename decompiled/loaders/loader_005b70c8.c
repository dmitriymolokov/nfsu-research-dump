/* spd-match: far pct=34.92 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/ptr_arith_misc_p2/batches/attempt2_probe */
#include "ghidra_compat.h"

unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);

int __cdecl FUN_005b5e96();
int __cdecl FUN_005b70ac();

void __fastcall FUN_005b70c8(int param_1)

{
  int iVar1;
  void *_Memory;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_005b70ac(1);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  while (iVar1 != 0) {
    _Memory = *(void **)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)((int)_Memory + 0x2c);
    *(undefined4 *)((int)_Memory + 0x2c) = 0;
    FUN_005b70c8(param_1);
    _free(_Memory);
    iVar1 = *(int *)(param_1 + 0x2c);
  }
  FUN_005b5e96();
  return;
}
