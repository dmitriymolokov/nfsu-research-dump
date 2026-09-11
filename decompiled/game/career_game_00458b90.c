/* spd-match: far pct=8.16 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2069 */
#include "ghidra_compat.h"

extern int DAT_00700680;

float10 __fastcall FUN_00458b90(int *param_1)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  fVar2 = DAT_00700680;
  fVar1 = *(float *)(param_1[1] + 0x3d4);
  fVar3 = (**(float10 (**)())(*param_1 + 0x50))();
  fVar3 = fVar3 * (float10)fVar1;
  if (fVar3 <= (float10)fVar2) {
    fVar3 = (float10)fVar2;
  }
  return fVar3;
}
