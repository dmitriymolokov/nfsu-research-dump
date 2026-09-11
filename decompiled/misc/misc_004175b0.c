/* spd-match: far pct=0.00 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004175B0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_004175b0(int obj, undefined4 param_1, int param_2)

{

  *(undefined4 *)(obj + 0x2c + param_2 * 4) = param_1;
  return;
}
