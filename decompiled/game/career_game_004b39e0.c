/* spd-match: far pct=75.76 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004B39E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_004b39e0(undefined4 val)

{

  switch(val) {
  case 0:
  case 1:
  case 3:
  case 5:
  case 6:
    return 1;
  case 2:
    return 3;
  case 4:
    return 5;
  default:
    return 0;
  }
}
