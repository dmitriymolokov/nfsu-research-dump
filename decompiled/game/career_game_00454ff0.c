/* spd-match: close pct=87.50 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00454FF0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __fastcall FUN_00454ff0(int val, int param_1)

{

  return param_1 + 0x265 + val;
}
