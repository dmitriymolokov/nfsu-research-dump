/* spd-match: far pct=66.67 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0041F550 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

float10 __fastcall FUN_0041f550(float * obj, float *param_1)

{

  return SQRT(((float10)*param_1 - (float10)*obj) * ((float10)*param_1 - (float10)*obj) +
              ((float10)param_1[1] - (float10)obj[1]) *
              ((float10)param_1[1] - (float10)obj[1]));
}
