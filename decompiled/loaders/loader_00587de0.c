/* spd-match: far pct=12.36 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00587DE0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00587de0(float * obj, int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;

  fVar1 = *(float *)(param_1 + 0xc4);
  fVar2 = *(float *)(param_1 + 0x11c);
  fVar3 = *(float *)(param_1 + 0xb4);
  fVar4 = *(float *)(param_1 + 0x118);
  fVar5 = *(float *)(param_1 + 200);
  fVar6 = *(float *)(param_1 + 0x11c);
  fVar7 = *(float *)(param_1 + 0xb8);
  fVar8 = *(float *)(param_1 + 0x118);
  *obj = *(float *)(param_1 + 0x118) * *(float *)(param_1 + 0xb0) +
            *(float *)(param_1 + 0xc0) * *(float *)(param_1 + 0x11c);
  obj[1] = fVar3 * fVar4 + fVar1 * fVar2;
  obj[2] = fVar7 * fVar8 + fVar5 * fVar6;
  return;
}
