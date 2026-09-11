/* spd-match: far pct=7.63 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00432D60 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00432d60(float * obj, float *param_1, int param_2, float param_3, float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;

  if (param_2 == 0) {
    fVar1 = obj[4];
    fVar3 = -obj[3] * param_4 + obj[1];
    fVar2 = *obj;
    param_1[1] = fVar3;
    *param_1 = fVar1 * param_4 + fVar2;
    fVar1 = obj[4];
    *param_1 = param_3 * obj[3] + *param_1;
    param_1[1] = param_3 * fVar1 + fVar3;
    return;
  }
  fVar1 = obj[6];
  fVar3 = -obj[5] * param_4 + obj[1];
  fVar2 = *obj;
  param_1[1] = fVar3;
  *param_1 = fVar1 * param_4 + fVar2;
  fVar1 = obj[6];
  *param_1 = param_3 * obj[5] + *param_1;
  param_1[1] = param_3 * fVar1 + fVar3;
  return;
}
