/* spd-match: far pct=28.33 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005042D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_005042d0(undefined4 val)

{

  switch(val) {
  case 0:
    return 0x2cbd3c8d;
  case 1:
    return 0x2cbd3c6b;
  case 2:
    return 0x2cbd3c6c;
  case 3:
    return 0x2cbd3c6d;
  case 4:
    return 0x2cbd3c8f;
  default:
    return 0x50fe8c15;
  }
}
