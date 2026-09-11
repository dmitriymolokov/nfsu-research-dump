/* spd-match: far pct=12.50 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0051C5D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_0051c5d0(int val, int param_1)

{

  if (val < 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    return;
  }
  if (0x7fff < val) {
    val = 0x7fff;
  }
  *(int *)(param_1 + 8) = val;
  return;
}
