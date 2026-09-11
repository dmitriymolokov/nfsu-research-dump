/* spd-match: far pct=24.74 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004FF560 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_004ff560(undefined4 val)

{

  switch(val) {
  default:
    return 0;
  case 1:
    return 0x10;
  case 2:
    return 0x1c;
  case 3:
    return 0x28;
  case 4:
    return 0x38;
  case 5:
    return 0x44;
  case 6:
    return 0x4c;
  case 7:
    return 0x54;
  case 8:
    return 100;
  case 9:
    return 0x74;
  case 10:
    return 0x84;
  }
}
