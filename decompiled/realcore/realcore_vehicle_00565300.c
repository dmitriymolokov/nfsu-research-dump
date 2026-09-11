/* spd-match: close pct=81.82 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00565300 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00565300(int obj)

{

  _free(*(void **)(obj + 8));
  return;
}
