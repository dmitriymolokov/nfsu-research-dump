/* spd-match: far pct=30.30 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0046E580 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int _DAT_00700070;
undefined4 __fastcall FUN_0046e580(int obj)

{
  float fVar1;

  fVar1 = ABS(*(float *)(*(int *)(obj + 0x20) + 0x14) - *(float *)(obj + 0x4c));
  if (fVar1 < _DAT_00700070 != (fVar1 == _DAT_00700070)) {
    return 1;
  }
  return 0;
}
