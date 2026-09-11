/* spd-match: far pct=70.83 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004420B0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

uint __fastcall FUN_004420b0(int obj, char param_1)

{

  if (param_1 != '\0') {
    return *(uint *)(obj + 0x84) >> 0x19 & 1;
  }
  return *(uint *)(obj + 0x84) >> 0x1a & 1;
}
