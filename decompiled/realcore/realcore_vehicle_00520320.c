/* spd-match: far pct=31.28 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00520320 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_00520320(undefined4 val)

{

  switch(val) {
  case 0:
    return 0xf;
  case 1:
    return 5;
  case 2:
    return 0x11;
  case 3:
    return 6;
  case 4:
    return 10;
  case 5:
    return 0xe;
  case 6:
    return 4;
  case 7:
    return 1;
  case 8:
    return 0xd;
  case 9:
    return 0;
  case 10:
    return 2;
  case 0xb:
    return 3;
  case 0xc:
    return 7;
  case 0xd:
    return 8;
  case 0xe:
    return 9;
  case 0xf:
    return 0xb;
  case 0x10:
    return 0xc;
  case 0x11:
    return 0x10;
  case 0x12:
    return 0x12;
  case 0x13:
    return 0x13;
  default:
    return 0xffffffff;
  }
}
