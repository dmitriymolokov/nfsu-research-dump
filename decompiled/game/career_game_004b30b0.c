/* spd-match: far pct=4.76 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004B30B0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_004b30b0(undefined4 val)

{

  switch(val) {
  default:
    return 0xd7ba6011;
  case 2:
    return 0xde511657;
  case 4:
    return 0x11793157;
  case 8:
    return 0x70fbb1e4;
  case 0x10:
    return 0x95ad096b;
  case 0x20:
    return 0xa936c3a2;
  case 0x40:
    return 0x14d83e4e;
  case 0x80:
    return 0xf20e404a;
  }
}
