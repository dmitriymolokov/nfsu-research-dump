/* spd-match: close pct=95.24 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0042AC10 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_0042ac10(int * obj)

{

  if ((*obj != 7) && (*obj != 0xb)) {
    return 0;
  }
  return 1;
}
