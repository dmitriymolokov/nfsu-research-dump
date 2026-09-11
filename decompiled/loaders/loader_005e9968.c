/* spd-match: far pct=2.80 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_7/buckets/loaders_p5/attempt4/vector */
#include "ghidra_compat.h"

extern int DAT_006def70;
extern int _DAT_006def60;

float * FUN_005e9968(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 in_register_00001304 [12];
  float fVar6;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4;
  fVar6 = 1.0f / (float)sqrt((double)fVar5);
  fVar6 = (DAT_006def70 - fVar5 * fVar6 * fVar6) * _DAT_006def60 * fVar6;
  *param_1 = fVar1 * fVar6;
  param_1[1] = fVar2 * fVar6;
  param_1[2] = fVar3 * fVar6;
  param_1[3] = fVar4 * fVar6;
  return param_1;
}
