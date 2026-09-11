/* spd-match: far pct=75.00 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00468800 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00468800(int obj)

{

  *(char *)(obj + 0x1b) = *(char *)(obj + 0x1b) + '\x01';
  return;
}
