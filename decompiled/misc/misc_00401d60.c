/* spd-match: far pct=60.00 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00401D60 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

uint __fastcall FUN_00401d60(int val, int param_1)

{

  return param_1 + 7 + val & ~(param_1 - 1U);
}
