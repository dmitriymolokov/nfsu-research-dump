/* spd-match: far pct=19.15 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_006796FF */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_006796ff(int val)

{

  if (val == 0x3a4) {
    return 0x411;
  }
  if (val == 0x3a8) {
    return 0x804;
  }
  if (val == 0x3b5) {
    return 0x412;
  }
  if (val != 0x3b6) {
    return 0;
  }
  return 0x404;
}
