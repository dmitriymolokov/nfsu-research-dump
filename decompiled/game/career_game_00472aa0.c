/* spd-match: far pct=5.00 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00472AA0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00472aa0(int obj, float *param_1, float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  fVar1 = *(float *)(obj + 0x24);
  fVar2 = *(float *)(obj + 0x34);
  fVar3 = *(float *)(obj + 0x28);
  fVar4 = *(float *)(obj + 0x38);
  *param_2 = *(float *)(obj + 0x20) - *(float *)(obj + 0x30);
  param_2[2] = fVar3 - fVar4;
  param_2[1] = fVar1 - fVar2;
  fVar1 = *(float *)(obj + 0x34);
  fVar2 = *(float *)(obj + 0x24);
  fVar3 = *(float *)(obj + 0x38);
  fVar4 = *(float *)(obj + 0x28);
  *param_1 = *(float *)(obj + 0x30) + *(float *)(obj + 0x20);
  param_1[2] = fVar3 + fVar4;
  param_1[1] = fVar1 + fVar2;
  return;
}
