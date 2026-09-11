/* spd-match: close pct=90.62 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0066A560 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_0066a560(int obj)

{

  if (*(int *)(obj + 0x80) == 4) {
    *(undefined4 *)(obj + 0x84) = 0;
    *(undefined4 *)(obj + 0x80) = 5;
  }
  return 0;
}
