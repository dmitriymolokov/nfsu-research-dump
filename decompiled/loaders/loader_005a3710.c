/* spd-match: far pct=70.83 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A3710 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_005a3710(int obj)

{

  if (((*(uint *)(obj + 8) & 0x77c7e38f) == 0) && ((*(uint *)(obj + 0xc) & 0xfffffc7f) == 0))
  {
    return 0;
  }
  return 1;
}
