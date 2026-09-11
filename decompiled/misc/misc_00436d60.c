/* spd-match: close pct=90.91 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00436D60 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

float10 __fastcall FUN_00436d60(float * obj)

{

  return SQRT((float10)obj[2] * (float10)obj[2] +
              (float10)obj[1] * (float10)obj[1] + (float10)*obj * (float10)*obj);
}
