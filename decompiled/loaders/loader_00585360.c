/* spd-match: far pct=11.49 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00585360 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00585360(float * obj, float *param_1, float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  *param_2 = obj[2] * param_1[1] - param_1[2] * obj[1];
  param_2[4] = obj[6] * param_1[1] - param_1[2] * obj[5];
  fVar1 = obj[10];
  fVar2 = param_1[1];
  fVar3 = obj[9];
  fVar4 = param_1[2];
  param_2[0xc] = 0.0;
  param_2[8] = fVar1 * fVar2 - fVar3 * fVar4;
  param_2[1] = param_1[2] * *obj - obj[2] * *param_1;
  param_2[5] = param_1[2] * obj[4] - *param_1 * obj[6];
  fVar1 = param_1[2];
  fVar2 = obj[8];
  fVar3 = obj[10];
  fVar4 = *param_1;
  param_2[0xd] = 0.0;
  param_2[9] = fVar1 * fVar2 - fVar3 * fVar4;
  param_2[2] = *param_1 * obj[1] - *obj * param_1[1];
  param_2[6] = *param_1 * obj[5] - obj[4] * param_1[1];
  fVar1 = obj[9];
  fVar2 = *param_1;
  fVar3 = obj[8];
  fVar4 = param_1[1];
  param_2[0xe] = 0.0;
  param_2[3] = 0.0;
  param_2[7] = 0.0;
  param_2[0xb] = 0.0;
  param_2[0xf] = 1.0;
  param_2[10] = fVar1 * fVar2 - fVar3 * fVar4;
  return;
}
