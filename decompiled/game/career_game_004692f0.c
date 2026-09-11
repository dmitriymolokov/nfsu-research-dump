/* spd-match: far pct=11.04 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2069 */
#include "ghidra_compat.h"

extern int _DAT_006ccae0;
int unaff_EDI;
int unaff_ESI;

void FUN_004692f0(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  int *unaff_ESI;
  float *unaff_EDI;
  
  if ((float)unaff_ESI[0x1c] < _DAT_006ccae0) {
    pfVar8 = (**(float * (**)())(*unaff_ESI + 0xc))();
    fVar1 = pfVar8[1];
    fVar2 = pfVar8[2];
    *unaff_EDI = *pfVar8;
    unaff_EDI[1] = fVar1;
    unaff_EDI[2] = fVar2;
    return;
  }
  fVar7 = ((float)unaff_ESI[0x1c] - param_1) / (float)unaff_ESI[0x1c];
  pfVar8 = (**(float * (**)())(*unaff_ESI + 0xc))();
  fVar1 = pfVar8[1];
  fVar2 = (float)unaff_ESI[0x35];
  fVar3 = pfVar8[2];
  fVar4 = (float)unaff_ESI[0x36];
  fVar5 = (float)unaff_ESI[0x35];
  fVar6 = (float)unaff_ESI[0x36];
  *unaff_EDI = (*pfVar8 - (float)unaff_ESI[0x34]) * fVar7 + (float)unaff_ESI[0x34];
  unaff_EDI[1] = (fVar1 - fVar2) * fVar7 + fVar5;
  unaff_EDI[2] = (fVar3 - fVar4) * fVar7 + fVar6;
  return;
}
