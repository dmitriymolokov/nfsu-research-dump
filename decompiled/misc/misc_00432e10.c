/* spd-match: far pct=0.00 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00432E10 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_00432e10(int val, int param_1)

{

  if (-1 < val) {
    return *(undefined4 *)(param_1 + 0x10 + val * 4);
  }
  return 0;
}
