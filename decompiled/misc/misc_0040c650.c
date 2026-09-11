/* spd-match: far pct=5.88 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.51/va_0040C650 */
#include "ghidra_compat.h"

void __fastcall FUN_0040c650(float * obj, float *param_1, float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;

  fVar1 = param_1[1];
  fVar3 = param_1[3];
  fVar2 = param_1[2];
  *obj = param_2 * *param_1;
  obj[1] = fVar1 * param_2;
  obj[2] = fVar2 * param_2;
  obj[3] = fVar3 * param_2;
  return;
}
