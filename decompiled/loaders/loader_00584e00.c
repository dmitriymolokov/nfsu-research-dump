/* spd-match: far pct=6.38 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00584E00 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00584e00(int obj, float *param_1)

{
  float fVar1;
  float fVar2;

  fVar1 = param_1[1];
  fVar2 = param_1[2];
  *(float *)(obj + 0x120) = *(float *)(obj + 0x120) + *param_1;
  *(float *)(obj + 0x124) = fVar1 + *(float *)(obj + 0x124);
  *(float *)(obj + 0x128) = fVar2 + *(float *)(obj + 0x128);
  return;
}
