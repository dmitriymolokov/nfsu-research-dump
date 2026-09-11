/* spd-match: far pct=42.31 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0056D8B0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_0056d8b0(int obj)

{

  if (obj == 0) {
    return 0;
  }
  if ((2 < *(int *)(obj + 4)) && (*(int *)(obj + 4) < 4)) {
    return 1;
  }
  return 0;
}
