/* spd-match: far pct=33.33 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0052F750 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_0052f750(undefined4 val)

{

  switch(val) {
  case 0:
  case 2:
  case 3:
  case 5:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xc:
  case 0xe:
    return 0;
  default:
    return 1;
  }
}
