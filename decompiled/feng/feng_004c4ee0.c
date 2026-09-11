/* spd-match: far pct=71.43 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004C4EE0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_004c4ee0(int val)

{

  if (((val != 7) && (val != 0xf)) && (val != 0x5c)) {
    return 0;
  }
  return 1;
}
