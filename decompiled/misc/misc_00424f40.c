/* spd-match: far pct=9.09 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00424F40 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __fastcall FUN_00424f40(int obj, int param_1)

{

  if (param_1 == 0) {
    return obj + 0xc;
  }
  return obj + 0x14;
}
