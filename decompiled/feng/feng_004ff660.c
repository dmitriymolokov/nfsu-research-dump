/* spd-match: close pct=80.00 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004FF660 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_004ff660(undefined4 * obj)

{

  _free((void *)*obj);
  return;
}
