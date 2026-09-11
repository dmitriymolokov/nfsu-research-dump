/* spd-match: close pct=93.90 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A0350 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_005a0350(undefined4 val)

{

  switch(val) {
  case 0:
    return 0x10;
  case 1:
    return 0x15;
  case 2:
    return 0x12;
  case 3:
    return 0x16;
  case 4:
    return 0x18;
  case 5:
    return 0x17;
  case 6:
    return 0x13;
  case 7:
    return 0x14;
  case 8:
    return 0x11;
  case 9:
    return 8;
  case 10:
    return 5;
  default:
    return 0xffffffff;
  }
}
