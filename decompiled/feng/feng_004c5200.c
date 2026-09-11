/* spd-match: far pct=31.51 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004C5200 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_004c5200(undefined4 val)

{

  switch(val) {
  case 0x13:
    return 0xb;
  default:
    return 0;
  case 0x19:
    return 2;
  case 0x25:
    return 0x23;
  case 0x28:
  case 0x56:
    return 0xd;
  case 0x37:
    return 0x22;
  case 0x3b:
    return 0xc;
  case 0x66:
    return 0x25;
  case 0x70:
    return 0x11;
  }
}
