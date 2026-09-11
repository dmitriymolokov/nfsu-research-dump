/* spd-match: far pct=8.97 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004DBAD0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __fastcall FUN_004dbad0(int val, int param_1, undefined4 param_2)

{

  switch(param_2) {
  case 0:
    return val * 0x2c + 0x5c + param_1;
  case 1:
    return val * 0x2c + 0x214 + param_1;
  case 2:
    return val * 0x2c + 0x3cc + param_1;
  case 3:
    return val * 0x2c + 0x584 + param_1;
  case 4:
    return val * 0x2c + 0x73c + param_1;
  case 5:
    return val * 0x2c + 0x8f4 + param_1;
  default:
    return 0;
  }
}
