/* spd-match: close pct=85.71 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005494D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

uint __fastcall FUN_005494d0(int obj)

{

  return *(uint *)(obj + 100) & 1;
}
