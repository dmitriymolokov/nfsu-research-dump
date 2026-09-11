/* spd-match: close pct=84.21 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0044D3E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_0044d3e0(int obj, int param_1)

{

  if (obj != 0) {
    return *(undefined4 *)(param_1 + 0x10 + (uint)*(byte *)(obj + 0x83) * 4);
  }
  return 0;
}
