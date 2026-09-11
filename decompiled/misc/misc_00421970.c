/* spd-match: far pct=23.08 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00421970 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __fastcall FUN_00421970(int obj)

{

  if (obj != 0) {
    return obj + -0x250;
  }
  return 0;
}
