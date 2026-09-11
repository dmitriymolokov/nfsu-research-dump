/* spd-match: far pct=8.14 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00429BA0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
extern int _DAT_006cc8a8;
void __fastcall FUN_00429ba0(float * obj, int param_1, float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  fVar1 = *param_2 - *(float *)(param_1 + 0x60);
  fVar2 = param_2[1] - *(float *)(param_1 + 100);
  fVar4 = param_2[2] - *(float *)(param_1 + 0x68);
  fVar3 = _DAT_006cc7bc / SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar4 * fVar4);
  fVar4 = (fVar3 * fVar2 * obj[1] + fVar1 * fVar3 * *obj + fVar4 * fVar3 * obj[2] +
          _DAT_006cc7bc) * _DAT_006cc7dc;
  if (DAT_006cc7a4 <= fVar3 * fVar2 * *obj - fVar1 * fVar3 * obj[1]) {
    fVar4 = fVar4 * _DAT_006cc8a8;
  }
  *(float *)(param_1 + 0x8e4) = fVar4;
  return;
}
