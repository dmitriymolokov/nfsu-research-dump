/* spd-match: far pct=15.25 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004CCDA0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_004ccda0(undefined4 val)

{

  switch(val) {
  case 1:
  case 8:
    return 0x37;
  case 2:
  case 9:
    return 0x38;
  case 3:
    return 0x39;
  case 4:
    return 0x3a;
  case 5:
  case 7:
    return 0x36;
  case 6:
    return 5;
  default:
    return 0xffffffff;
  case 0xc:
  case 0xd:
    return 10;
  }
}
