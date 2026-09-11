/* spd-match: far pct=4.27 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A03D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_005a03d0(undefined4 val)

{

  switch(val) {
  case 1:
    return 9;
  case 2:
    return 0xb;
  default:
    return 0xffffffff;
  case 6:
    return 0xf;
  case 7:
    return 0xd;
  case 8:
    return 0xc;
  case 10:
    return 5;
  case 0xb:
    return 8;
  case 0xd:
    return 6;
  case 0xe:
    return 10;
  case 0xf:
    return 2;
  case 0x11:
    return 3;
  case 0x1e:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    return 0;
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
    return 7;
  case 0x3a:
    return 1;
  case 0x73:
    return 4;
  case 0x74:
    return 0xe;
  }
}
