/* spd-match: far pct=4.65 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00424B70 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00424b70(float * obj, float *param_1, float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar4 = param_1[2];
  fVar3 = param_1[1];
  *obj = *param_2 - *param_1;
  obj[1] = fVar1 - fVar3;
  obj[2] = fVar2 - fVar4;
  return;
}
