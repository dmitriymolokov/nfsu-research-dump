/* spd-match: far pct=29.55 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004C76D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_004c76d0(undefined4 val)

{

  switch(val) {
  case 0xf:
    return 0x30;
  default:
    return 0xffffffff;
  case 0x2f:
  case 0x44:
    return 0x35;
  case 0x4d:
    return 0x3c;
  }
}
