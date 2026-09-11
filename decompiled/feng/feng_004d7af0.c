/* spd-match: far pct=18.52 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004D7AF0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_004d7af0(undefined4 val)

{

  switch(val) {
  case 0:
    return 0xd63e2bb0;
  case 1:
    return 0xa687aa13;
  case 2:
    return 0xd604bd5e;
  case 3:
    return 0x92be98c0;
  case 4:
    return 0xd651f88a;
  case 5:
    return 0x2d4daee3;
  case 6:
    return 0x40a99fd9;
  case 7:
    return 0x3abf7e22;
  default:
    return 0;
  }
}
