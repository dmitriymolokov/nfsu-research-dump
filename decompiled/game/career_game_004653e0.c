/* spd-match: far pct=11.54 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_7/buckets/game_p1/attempt2_fixed */
#include "ghidra_compat.h"

int unaff_EDI;
int unaff_ESI;

void FUN_004653e0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *unaff_ESI;
  float *unaff_EDI;
  undefined1 local_20 [28];
  
  fVar3 = *unaff_ESI;
  FUN_004653e0();
  fVar1 = unaff_EDI[1];
  fVar2 = unaff_EDI[2];
  unaff_ESI[4] = *unaff_EDI - *(float *)local_20;
  unaff_ESI[6] = fVar2 - *(float *)(unaff_ESI + 0x14);
  unaff_ESI[5] = fVar1 - fVar3;
  return;
}
