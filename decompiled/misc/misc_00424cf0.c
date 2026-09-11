/* spd-match: far pct=12.31 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00424CF0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00424cf0(float * obj, int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;

  fVar1 = obj[1];
  fVar2 = obj[2];
  *(float *)(param_1 + 0x30) = *obj;
  *(float *)(param_1 + 0x34) = fVar1;
  *(float *)(param_1 + 0x38) = fVar2;
  fVar1 = obj[2];
  fVar2 = obj[1];
  fVar3 = *obj;
  *(undefined1 *)(param_1 + 0x420) = 0;
  *(float *)(param_1 + 0x394) = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3);
  return;
}
