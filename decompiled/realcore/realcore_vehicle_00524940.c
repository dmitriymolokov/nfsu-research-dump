/* spd-match: far pct=25.00 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00524940 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_00524940(undefined4 val)

{

  switch(val) {
  case 0x16:
  case 0x18:
  case 0x1a:
  case 0x1b:
  case 0x1e:
  case 0x1f:
  case 0x20:
    return 1;
  default:
    return 0;
  }
}
