/* spd-match: far pct=75.00 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005543A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_005543a0(int obj, undefined1 param_1)

{

  *(undefined1 *)(obj + 0x10) = param_1;
  return;
}
