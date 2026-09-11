/* spd-match: far pct=19.67 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00475460 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
extern int DAT_006ffde4;
extern int _DAT_006cc7dc;
void __fastcall FUN_00475460(int obj, float param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  pfVar1 = *(float **)(obj + 0x18);
  fVar2 = *pfVar1;
  if (DAT_006ffde4 == 0) {
    fVar2 = DAT_006cc7a4;
  }
  fVar2 = ((pfVar1[4] - fVar2) / ((pfVar1[4] - fVar2) - (pfVar1[0x28] - fVar2))) * _DAT_006cc7dc;
  fVar4 = param_1 * pfVar1[0x9b] +
          *(float *)(*(int *)(obj + 0x14) + 0x144) * *(float *)(obj + 400);
  fVar3 = fVar4 * (_DAT_006cc7dc - fVar2);
  *(float *)(obj + 0x144) = fVar3;
  *(float *)(obj + 0x148) = fVar3;
  fVar2 = fVar2 * fVar4;
  *(float *)(obj + 0x14c) = fVar2;
  *(float *)(obj + 0x150) = fVar2;
  return;
}
