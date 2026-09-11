/* spd-match: close pct=92.31 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004420A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

uint __fastcall FUN_004420a0(int obj)

{

  return *(uint *)(obj + 0x84) >> 0x19 & 1;
}
