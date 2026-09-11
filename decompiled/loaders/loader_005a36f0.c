/* spd-match: close pct=85.19 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A36F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_005a36f0(int obj)

{

  if (((*(uint *)(obj + 0x18) & 0xfffffe) == 0) && ((*(uint *)(obj + 0x14) & 0xc0000000) == 0)
     ) {
    return 0;
  }
  return 1;
}
