/* spd-match: close pct=84.62 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0058AE50 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_0058ae50(int obj)

{

  if (((*(char *)(obj + 0xba1) == '\x02') && (*(char *)(obj + 0xba2) == '\x02')) &&
     (*(char *)(obj + 0xba3) != '\0')) {
    return 1;
  }
  return 0;
}
