/* spd-match: far pct=20.00 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0043DB50 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_0043db50(int obj, undefined2 param_1)

{

  *(undefined2 *)(obj + 0x1a) = param_1;
  return;
}
