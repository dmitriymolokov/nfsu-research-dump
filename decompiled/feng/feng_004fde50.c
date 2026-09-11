/* spd-match: far pct=10.59 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004FDE50 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int _DAT_006cc7bc;
void __fastcall FUN_004fde50(float * obj, float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;

  fVar8 = *param_1 + *param_1;
  fVar10 = param_1[1] + param_1[1];
  fVar11 = param_1[2] + param_1[2];
  fVar9 = fVar8 * *param_1;
  fVar1 = *param_1;
  fVar2 = *param_1;
  fVar3 = param_1[1];
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar8 = fVar8 * param_1[3];
  fVar6 = param_1[3];
  fVar7 = param_1[3];
  obj[0xc] = 0.0;
  obj[0xd] = 0.0;
  obj[0xe] = 0.0;
  obj[3] = 0.0;
  fVar12 = _DAT_006cc7bc - (fVar11 * fVar5 + fVar10 * fVar3);
  obj[7] = 0.0;
  obj[0xb] = 0.0;
  *obj = fVar12;
  obj[0xf] = 1.0;
  obj[4] = fVar10 * fVar1 - fVar11 * fVar7;
  obj[8] = fVar10 * fVar6 + fVar11 * fVar2;
  obj[1] = fVar11 * fVar7 + fVar10 * fVar1;
  obj[5] = _DAT_006cc7bc - (fVar11 * fVar5 + fVar9);
  obj[9] = fVar11 * fVar4 - fVar8;
  obj[2] = fVar11 * fVar2 - fVar10 * fVar6;
  obj[6] = fVar8 + fVar11 * fVar4;
  obj[10] = _DAT_006cc7bc - (fVar10 * fVar3 + fVar9);
  return;
}
