/* spd-match: far pct=2.82 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int __cdecl FUN_004387e0(...);
extern int _DAT_006cc7bc;
extern int _DAT_006ccbac;

struct ThisCallBox {
  float10 FUN_0059ce10(float param_2);
};
float10 ThisCallBox::FUN_0059ce10(float param_2) {
  float fVar1;
  float10 fVar2;
  
  if (*(int *)(((int)this) + 4) == 0) {
    fVar1 = *(float *)(((int)this) + 0xc);
    param_2 = param_2 / ABS(fVar1);
    fVar2 = (float10)FUN_004387e0(param_2);
    if ((float10)param_2 < fVar2) {
      fVar2 = fVar2 - (float10)_DAT_006cc7bc;
    }
    return ((float10)param_2 - fVar2) * (float10)ABS(fVar1);
  }
  if (*(int *)(((int)this) + 4) == 1) {
    fVar1 = *(float *)(((int)this) + 0xc) - _DAT_006ccbac;
    fVar2 = (float10)*(float *)(((int)this) + 0x10);
    if (fVar2 < (float10)param_2) {
      fVar2 = (float10)param_2;
    }
    if ((float10)fVar1 < fVar2) {
      return (float10)fVar1;
    }
  }
  else {
    fVar2 = (float10)param_2;
  }
  return fVar2;
}
