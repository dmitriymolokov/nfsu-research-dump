/* spd-match: far pct=75.00 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00449FE0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

float10 __fastcall FUN_00449fe0(int obj, int param_1)

{

  if (param_1 == 0) {
    return (float10)*(float *)(obj + 0x1c);
  }
  return (float10)*(float *)(obj + 0x20);
}
