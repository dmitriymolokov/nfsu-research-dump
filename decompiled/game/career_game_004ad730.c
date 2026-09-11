/* spd-match: close pct=80.88 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004AD730 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_004ad730(undefined1 * obj)

{

  *obj = 0;
  obj[0x11] = 0;
  obj[0x33] = 0;
  obj[0x22] = 0;
  obj[0x66] = 0;
  obj[0xcc] = 1;
  obj[0xcd] = 1;
  obj[0xdc] = 0;
  *(undefined4 *)(obj + 0xd0) = 1;
  *(undefined4 *)(obj + 0xd4) = 1;
  *(undefined4 *)(obj + 0xd8) = 0x7d3;
  *(undefined4 *)(obj + 0xe0) = 0;
  return;
}
