/* spd-match: far pct=0.00 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004B2B40 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_004b2b40(int obj, undefined4 param_1, int param_2)

{

  *(undefined4 *)(obj + 8 + param_2 * 4) = param_1;
  return;
}
