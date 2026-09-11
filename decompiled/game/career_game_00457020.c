/* spd-match: far pct=32.14 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00457020 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_00457020(int val)

{

  if (((val < 0) || (4 < val)) && ((val < 0xb || (0x10 < val)))) {
    return 0;
  }
  return 1;
}
