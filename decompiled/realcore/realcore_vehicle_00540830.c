/* spd-match: close pct=87.18 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00540830 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

float10 __fastcall FUN_00540830(float * obj)

{

  return SQRT((float10)obj[2] * (float10)obj[2] +
              (float10)obj[1] * (float10)obj[1] + (float10)*obj * (float10)*obj +
              (float10)obj[3] + (float10)obj[3]);
}
