/* spd-match: far pct=20.00 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00432D20 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int _DAT_006cc79c;
float10 __fastcall FUN_00432d20(float * obj, float param_1)

{

  return (float10)param_1 * (float10)_DAT_006cc79c * (float10)*obj;
}
