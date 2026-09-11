/* spd-match: far pct=8.65 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_005677D0 */
#include "ghidra_compat.h"
void __fastcall FUN_005677d0(float * obj, float *param_1, float *param_2, float param_3)
{
  float fVar1, fVar2, fVar3;
  float fVar4, fVar5, fVar6;
  fVar1 = obj[0];
  fVar2 = obj[1];
  fVar3 = obj[2];
  fVar4 = fVar1 - param_3;
  fVar5 = fVar2 - param_3;
  fVar6 = fVar3 - param_3;
  if (fVar4 < param_1[0]) param_1[0] = fVar4;
  if (fVar5 < param_1[1]) param_1[1] = fVar5;
  if (fVar6 < param_1[2]) param_1[2] = fVar6;
  fVar4 = param_3 + fVar1;
  fVar5 = param_3 + fVar2;
  fVar6 = param_3 + fVar3;
  if (param_2[0] < fVar4) param_2[0] = fVar4;
  if (param_2[1] < fVar5) param_2[1] = fVar5;
  if (param_2[2] < fVar6) param_2[2] = fVar6;
}
