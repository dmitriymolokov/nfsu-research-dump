/* spd-match: far pct=30.36 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004C6C00 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_004c6c00(undefined4 val)

{

  switch(val) {
  case 7:
    return 0x18;
  default:
    return 0xffffffff;
  case 0x1a:
    return 0x1a;
  case 0x44:
    return 0x1c;
  case 0x55:
    return 0x1e;
  case 0x61:
    return 0x20;
  }
}
