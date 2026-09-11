/* spd-match: far pct=22.92 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_7/buckets/realcore_p2/batches/20260724T153653Z_w0_tc0 */
#include "ghidra_compat.h"

void __fastcall FUN_00579190(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xe4) = 1;
  for (; puVar1 != (undefined4 *)(param_1 + 8); puVar1 = (undefined4 *)*puVar1) {
    if (puVar1[0x39] == 0) {
      FUN_00579190(param_1);
    }
  }
  return;
}
