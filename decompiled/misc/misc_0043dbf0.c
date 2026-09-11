/* spd-match: far pct=11.54 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0043DBF0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __fastcall FUN_0043dbf0(int val, int param_1)

{

  if ((-1 < val) && (val < *(int *)(param_1 + 0x128))) {
    return val * 0x1c + 0xd4 + param_1;
  }
  return 0;
}
