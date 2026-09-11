/* spd-match: far pct=78.95 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00457000 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_00457000(int val)

{

  if ((10 < val) && (val < 0x17)) {
    return 1;
  }
  return 0;
}
