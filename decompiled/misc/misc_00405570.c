/* spd-match: far pct=16.67 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00405570 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_00405570(int obj)

{

  switch(*(undefined1 *)(obj + 0x134)) {
  case 0x13:
    return 1;
  case 0x14:
  case 0x15:
    return 0;
  case 0x16:
    return 0;
  default:
    return 0;
  }
}
