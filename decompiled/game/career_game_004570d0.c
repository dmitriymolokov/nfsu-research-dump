/* spd-match: far pct=25.00 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004570D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
extern int _DAT_006cc798;
extern int _DAT_006cc8bc;
float10 __fastcall FUN_004570d0(int obj, float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;

  float10 fVar4;
  
  fVar4 = (float10)_DAT_006cc798;
  fVar1 = *(float *)(obj + 0x3d4);
  fVar2 = *(float *)(obj + 0x80) * *(float *)(obj + 0x90) +
          *(float *)(obj + 0x84) * *(float *)(obj + 0x94) +
          *(float *)(obj + 0x88) * *(float *)(obj + 0x98);
  if (ABS(fVar2) < _DAT_006cc8bc == (ABS(fVar2) == _DAT_006cc8bc)) {
    fVar4 = (float10)DAT_006cc7a4;
    fVar3 = fVar2 * param_1 + fVar2 * param_1 + fVar1 * fVar1;
    if (DAT_006cc7a4 < fVar3) {
      fVar4 = SQRT((float10)fVar3);
    }
    return (fVar4 - (float10)fVar1) / (float10)fVar2;
  }
  if (ABS(fVar1) < _DAT_006cc8bc == (ABS(fVar1) == _DAT_006cc8bc)) {
    fVar4 = (float10)param_1 / (float10)fVar1;
  }
  return fVar4;
}
