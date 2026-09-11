/* spd-match: far pct=16.81 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004CCF90 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_004ccf90(undefined4 val, undefined4 param_1)

{

  switch(val) {
  case 1:
  case 8:
    return 0x30;
  case 2:
  case 9:
    return 0x31;
  default:
    return 0xffffffff;
  case 5:
  case 7:
    switch(param_1) {
    case 0:
      return 0x41;
    case 1:
      return 0x49;
    case 2:
      return 0x42;
    case 3:
      return 0x43;
    case 4:
      return 0x44;
    case 5:
      return 0x48;
    case 6:
      return 0x45;
    case 7:
      return 0x46;
    case 8:
      return 0x47;
    }
switchD_004ccf96_caseD_6:
    return 5;
  case 6:
    goto switchD_004ccf96_caseD_6;
  case 10:
    return 9;
  case 0xb:
    return 8;
  case 0xc:
  case 0xd:
    return 10;
  }
}
