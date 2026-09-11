/* spd-match: far pct=57.50 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/ptr_arith_misc_p2/batches/20260724T142224Z_w0_tc0 */
#include "ghidra_compat.h"

unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);

int __cdecl FUN_005c5234();
int __cdecl FUN_005c80a3();
int __cdecl FUN_005d6620();
int __cdecl FUN_005d7865();

void __fastcall FUN_005c5283(int param_1)

{
  void *_Memory;
  int *piVar1;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_005c5234(1);
  }
  _Memory = *(void **)(param_1 + 0x6c);
  if (_Memory != (void *)0x0) {
    FUN_005c5283(param_1);
    _free(_Memory);
  }
  piVar1 = *(int **)(param_1 + 0x58);
  if ((piVar1 != (int *)0x0) && (*(int *)(param_1 + 100) != 0)) {
    (**(code **)(*piVar1 + 4))(piVar1,*(int *)(param_1 + 100));
  }
  FUN_005d6620();
  FUN_005c80a3();
  FUN_005d7865();
  return;
}
