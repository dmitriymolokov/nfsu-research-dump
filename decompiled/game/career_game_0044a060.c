/* spd-match: far pct=76.19 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0044A060 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_0044a060(int * obj)

{

  if ((1 < *obj) && (*obj < 4)) {
    return 1;
  }
  return 0;
}
