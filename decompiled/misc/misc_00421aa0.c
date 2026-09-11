/* spd-match: far pct=72.73 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00421AA0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_00421aa0(int obj)

{

  if (*(float *)(obj + 0x24) <= *(float *)(obj + 0x2c)) {
    return 1;
  }
  return 0;
}
