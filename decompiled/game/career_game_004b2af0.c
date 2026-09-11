/* spd-match: far pct=37.31 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_c2065_cram/batches/20260724T133107Z_w0_tc0 */
#include "ghidra_compat.h"

extern char cRam00000000;

extern int DAT_007341bc;

uint __fastcall FUN_004b2af0(int param_1)

{
  int *piVar1;
  
  if ((DAT_007341bc == 0) &&
     (((*(int *)(param_1 + 0x88b0) == 0 ||
       (piVar1 = (int *)(*(int *)(param_1 + 0x88b0) + 0x58a0), piVar1 == (int *)0x0)) ||
      (*piVar1 != 0x71)))) {
    return (uint)(cRam00000000 == '\x02');
  }
  return CONCAT31((int3)((uint)(param_1 + 0x3bd) >> 8),*(char *)(param_1 + 0x3bd) == '\x02');
}
