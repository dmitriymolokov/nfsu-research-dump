/* spd-match: far pct=31.25 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004C52D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_004c52d0(undefined4 val)

{

  switch(val) {
  case 6:
    return 0x2e;
  case 7:
    return 0x17;
  default:
    return 0xffffffff;
  case 0xf:
    return 0x2f;
  case 0x1a:
    return 0x19;
  case 0x2f:
  case 0x44:
    return 0x34;
  case 0x4d:
    return 0x3b;
  case 0x55:
    return 0x1d;
  case 0x61:
    return 0x1f;
  case 0x70:
    return 0x3d;
  }
}
