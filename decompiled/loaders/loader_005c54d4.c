/* spd-match: far pct=50.00 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/ptr_arith_misc_p2/batches/20260724T142224Z_w0_tc0 */
#include "ghidra_compat.h"

unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);


void __fastcall FUN_005c54d4(int param_1)

{
  void *_Memory;
  
  _Memory = *(void **)(param_1 + 4);
  if (_Memory != (void *)0x0) {
    FUN_005c54d4(param_1);
    _free(_Memory);
  }
  return;
}
