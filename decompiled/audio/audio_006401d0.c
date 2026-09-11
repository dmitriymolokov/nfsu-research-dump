/* spd-match: far pct=23.81 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_006401D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_006401d0(int val, undefined4 param_1)

{

  if ((val == 0x104) || (val == 0x100)) {
    switch(param_1) {
    case 0x21:
    case 0x69:
      return 0x4900;
    case 0x22:
    case 99:
      return 0x5100;
    case 0x23:
    case 0x61:
      return 0x4f00;
    case 0x24:
    case 0x67:
      return 0x4700;
    case 0x25:
    case 100:
      return 0x4b00;
    case 0x26:
    case 0x68:
      return 0x4800;
    case 0x27:
    case 0x66:
      return 0x4d00;
    case 0x28:
    case 0x62:
      return 0x5000;
    case 0x2d:
    case 0x60:
      return 0x5200;
    case 0x2e:
      return 0x5300;
    case 0x65:
      return 0x4c00;
    case 0x70:
      return 0x3b00;
    case 0x71:
      return 0x3c00;
    case 0x72:
      return 0x3d00;
    case 0x73:
      return 0x3e00;
    case 0x74:
      return 0x3f00;
    case 0x75:
      return 0x4000;
    case 0x76:
      return 0x4100;
    case 0x77:
      return 0x4200;
    case 0x78:
      return 0x4300;
    case 0x79:
      return 0x4400;
    case 0x7a:
      return 0x8700;
    case 0x7b:
      return 0x8800;
    }
  }
  return 0;
}
