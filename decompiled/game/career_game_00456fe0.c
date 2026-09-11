/* spd-match: far pct=78.95 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00456FE0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_00456fe0(int val)

{

  if ((10 < val) && (val < 0x11)) {
    return 1;
  }
  return 0;
}
