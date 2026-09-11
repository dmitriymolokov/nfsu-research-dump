/* spd-match: far pct=13.86 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004CCED0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_004cced0(undefined4 val, undefined4 param_1)

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
      return 0x33;
    case 1:
      return 0x34;
    case 2:
      return 0x35;
    case 3:
      return 0x36;
    case 4:
      return 0x3d;
    case 5:
      return 0x3e;
    }
switchD_004cced6_caseD_6:
    return 5;
  case 6:
    goto switchD_004cced6_caseD_6;
  case 10:
    return 9;
  case 0xb:
    return 8;
  case 0xc:
  case 0xd:
    return 10;
  }
}
