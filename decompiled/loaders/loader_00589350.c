/* spd-match: far pct=11.11 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00589350 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int _DAT_006cc7d4;
void __fastcall FUN_00589350(float * obj, float *param_1, float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;

  fVar1 = *obj;
  fVar3 = obj[2];
  fVar2 = obj[1];
  fVar4 = (float)(int)*(char *)(obj + 3) * _DAT_006cc7d4;
  fVar5 = (float)(int)*(char *)((int)obj + 0xd) * _DAT_006cc7d4;
  fVar6 = (float)(int)*(char *)((int)obj + 0xe) * _DAT_006cc7d4;
  *param_2 = fVar4 + fVar1;
  param_2[1] = fVar5 + fVar2;
  param_2[2] = fVar6 + fVar3;
  *param_1 = fVar1 - fVar4;
  param_1[1] = fVar2 - fVar5;
  param_1[2] = fVar3 - fVar6;
  return;
}
