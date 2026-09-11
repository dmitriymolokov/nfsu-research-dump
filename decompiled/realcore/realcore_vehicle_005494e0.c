/* spd-match: close pct=88.89 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005494E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

uint __fastcall FUN_005494e0(int obj)

{

  return *(uint *)(obj + 100) >> 1 & 1;
}
