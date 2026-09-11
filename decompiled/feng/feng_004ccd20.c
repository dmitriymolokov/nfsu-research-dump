/* spd-match: far pct=16.18 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004CCD20 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_004ccd20(undefined4 val)

{

  switch(val) {
  case 1:
  case 8:
    return 2;
  case 2:
  case 9:
    return 3;
  case 3:
    return 0;
  case 4:
    return 1;
  case 5:
  case 7:
    return 4;
  case 6:
    return 5;
  case 10:
    return 9;
  case 0xb:
    return 8;
  case 0xc:
  case 0xd:
    return 10;
  default:
    return 0xffffffff;
  }
}
