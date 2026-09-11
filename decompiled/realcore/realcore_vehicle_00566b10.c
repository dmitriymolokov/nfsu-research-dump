/* spd-match: far pct=36.84 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00566B10 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int _DAT_006cc7bc;
void __fastcall FUN_00566b10(float * obj, float *param_1)

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

  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  obj[3] = 0.0;
  obj[7] = 0.0;
  fVar7 = fVar2 * fVar2 + fVar2 * fVar2;
  obj[0xb] = 0.0;
  obj[0xc] = 0.0;
  obj[0xd] = 0.0;
  obj[0xe] = 0.0;
  obj[0xf] = 1.0;
  fVar10 = fVar3 * fVar3 + fVar3 * fVar3;
  *obj = (_DAT_006cc7bc - fVar7) - fVar10;
  fVar9 = fVar2 * fVar1 + fVar2 * fVar1;
  fVar8 = fVar4 * fVar3 + fVar4 * fVar3;
  obj[1] = fVar9 - fVar8;
  fVar6 = fVar4 * fVar2 + fVar4 * fVar2;
  fVar5 = fVar3 * fVar1 + fVar3 * fVar1;
  obj[2] = fVar5 + fVar6;
  obj[4] = fVar8 + fVar9;
  fVar8 = _DAT_006cc7bc - (fVar1 * fVar1 + fVar1 * fVar1);
  obj[5] = fVar8 - fVar10;
  fVar2 = fVar3 * fVar2 + fVar3 * fVar2;
  fVar1 = fVar4 * fVar1 + fVar4 * fVar1;
  obj[6] = fVar2 - fVar1;
  obj[8] = fVar5 - fVar6;
  obj[9] = fVar1 + fVar2;
  obj[10] = fVar8 - fVar7;
  return;
}
