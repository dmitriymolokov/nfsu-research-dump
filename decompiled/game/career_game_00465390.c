/* spd-match: far pct=10.00 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_7/buckets/game_p1/attempt2_fixed */
#include "ghidra_compat.h"

int unaff_ESI;

void FUN_00465390(void)

{
  float fVar1;
  float *unaff_ESI;
  undefined1 local_20 [28];
  
  fVar1 = *unaff_ESI;
  FUN_00465390();
  unaff_ESI[4] = unaff_ESI[8] - *(float *)local_20;
  unaff_ESI[6] = unaff_ESI[10] - *(float *)(unaff_ESI + 0x14);
  unaff_ESI[5] = unaff_ESI[9] - fVar1;
  return;
}
