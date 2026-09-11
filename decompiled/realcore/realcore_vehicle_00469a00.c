/* spd-match: far pct=4.90 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
extern int _DAT_006cc7bc;
int unaff_EDI;
int unaff_ESI;

bool FUN_00469a00(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int unaff_ESI;
  int *unaff_EDI;
  float local_8;
  
  fVar1 = (float)unaff_EDI[0x38];
  fVar2 = (float)unaff_EDI[0x3a];
  iVar5 = (**(code **)(*unaff_EDI + 0x14))();
  local_8 = *(float *)(iVar5 + 0x20) * *(float *)(unaff_ESI + 0x70) +
            *(float *)(iVar5 + 0x24) * *(float *)(unaff_ESI + 0x74) +
            *(float *)(iVar5 + 0x28) * *(float *)(unaff_ESI + 0x78);
  if (_DAT_006cc7bc < local_8) {
    local_8 = 1.0;
  }
  fVar3 = _DAT_006cc7bc - local_8 * local_8;
  pfVar6 = (float *)(**(code **)(*unaff_EDI + 8))();
  fVar4 = (*pfVar6 * *(float *)(unaff_ESI + 0x70) +
          pfVar6[1] * *(float *)(unaff_ESI + 0x74) + pfVar6[2] * *(float *)(unaff_ESI + 0x78)) -
          *(float *)(unaff_ESI + 0x7c);
  if (local_8 * fVar4 < DAT_006cc7a4) {
    fVar1 = (float)unaff_EDI[0x39];
  }
  return ABS(fVar4) < SQRT(fVar3) * fVar2 + ABS(local_8) * fVar1;
}
