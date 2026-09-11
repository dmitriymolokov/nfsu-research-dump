/* spd-match: far pct=18.52 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004CCE10 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_004cce10(undefined4 val)

{

  switch(val) {
  case 1:
  case 8:
    return 0x2c;
  case 2:
  case 9:
    return 0x2d;
  default:
    return 0xffffffff;
  case 5:
  case 7:
    return 0x28;
  case 6:
    return 5;
  case 0xc:
  case 0xd:
    return 10;
  }
}
