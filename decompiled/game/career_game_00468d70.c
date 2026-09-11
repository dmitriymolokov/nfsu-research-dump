/* spd-match: far pct=13.27 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2069 */
#include "ghidra_compat.h"

int __cdecl FUN_00468680();
extern int DAT_00736084;
extern int _DAT_006cc7dc;

void FUN_00468d70(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int *unaff_ESI;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  pfVar4 = (**(float * (**)())(*unaff_ESI + 8))();
  pfVar5 = (**(float * (**)())(*unaff_ESI + 0xc))();
  pfVar6 = (**(float * (**)())(*unaff_ESI + 0x10))();
  fVar1 = param_1 * *pfVar5;
  fVar2 = pfVar5[1] * param_1;
  if (DAT_00736084 != 0) {
    fVar3 = param_1 * param_1 * _DAT_006cc7dc;
    fVar1 = fVar3 * *pfVar6 + fVar1;
    fVar2 = pfVar6[1] * fVar3 + fVar2;
  }
  fStack_28 = (fVar1 + *pfVar4) - (float)unaff_ESI[0x3a];
  if (*pfVar4 - (float)unaff_ESI[0x3a] < fStack_28) {
    fStack_28 = *pfVar4 - (float)unaff_ESI[0x3a];
  }
  fStack_24 = (fVar2 + pfVar4[1]) - (float)unaff_ESI[0x3a];
  if (pfVar4[1] - (float)unaff_ESI[0x3a] < fStack_24) {
    fStack_24 = pfVar4[1] - (float)unaff_ESI[0x3a];
  }
  fStack_20 = fVar1 + *pfVar4 + (float)unaff_ESI[0x3a];
  if (fStack_20 < *pfVar4 + (float)unaff_ESI[0x3a]) {
    fStack_20 = *pfVar4 + (float)unaff_ESI[0x3a];
  }
  fStack_1c = fVar2 + pfVar4[1] + (float)unaff_ESI[0x3a];
  if (fStack_1c < (float)unaff_ESI[0x3a] + pfVar4[1]) {
    fStack_1c = (float)unaff_ESI[0x3a] + pfVar4[1];
  }
  FUN_00468680(unaff_ESI,&fStack_28);
  return;
}
