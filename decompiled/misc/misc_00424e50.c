/* spd-match: close pct=81.82 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00424E50 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __fastcall FUN_00424e50(int val, int param_1)

{

  return val * 0x40 + 0xf0 + param_1;
}
