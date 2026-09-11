/* spd-match: close pct=82.08 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A0500 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_005a0500(undefined4 val)

{

  switch(val) {
  case 0:
    return 0x1e;
  default:
    return 0xffffffff;
  case 2:
    return 0xf;
  case 3:
    return 0x11;
  case 4:
    return 0x73;
  case 5:
    return 10;
  case 6:
    return 0xd;
  case 7:
    return 0x1f;
  case 8:
    return 0xb;
  case 9:
    return 1;
  case 10:
    return 0xe;
  case 0xb:
    return 2;
  case 0xc:
    return 8;
  case 0xd:
    return 7;
  case 0xe:
    return 0x74;
  case 0xf:
    return 6;
  }
}
