/* spd-match: far pct=23.08 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005325F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __fastcall FUN_005325f0(int obj)

{

  if (obj != 0) {
    return obj + -0x210;
  }
  return 0;
}
