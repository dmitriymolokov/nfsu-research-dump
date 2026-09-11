/* spd-match: far pct=17.20 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2297 */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
extern int _DAT_006cc83c;
int unaff_EBX;
int unaff_EDI;

void FUN_00451cb0(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int *unaff_EBX;
  float *unaff_EDI;
  
  iVar3 = *unaff_EBX;
  pfVar6 = (float *)((((unaff_EBX[1] - iVar3) + -0x27c) / 0x88) * 0x88 + 0x414 + iVar3);
  if (pfVar6 == (float *)0x0) {
    pfVar6 = (float *)(*(short *)(iVar3 + 0x10) * 0x88 + 500 + iVar3);
  }
  fVar4 = (float)((int)*(short *)((int)pfVar6 + unaff_EBX[2] * 2 + 0x3c) << 8) * ((int)_DAT_006cc83c);
  fVar1 = pfVar6[4];
  fVar5 = -pfVar6[3] * fVar4 + pfVar6[1];
  fVar2 = *pfVar6;
  unaff_EDI[1] = fVar5;
  *unaff_EDI = fVar1 * fVar4 + fVar2;
  fVar1 = pfVar6[4] * ((int)DAT_006cc7a4);
  *unaff_EDI = pfVar6[3] * ((int)DAT_006cc7a4) + *unaff_EDI;
  unaff_EDI[1] = fVar1 + fVar5;
  return;
}
