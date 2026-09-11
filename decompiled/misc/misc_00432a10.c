/* spd-match: far pct=13.79 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00432A10 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_00432a10(int obj)

{

  if (((*(int *)(obj + 0x1c) == 1) && (*(int *)(obj + 0x2c) == 0)) &&
     (*(int *)(obj + 0x78) == 0)) {
    return 1;
  }
  return 0;
}
