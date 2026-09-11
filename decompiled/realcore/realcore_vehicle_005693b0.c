/* spd-match: far pct=33.33 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005693B0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined1 __fastcall FUN_005693b0(int obj)

{

  if (*(int *)(*(int *)(obj + 0x14) + 4) == 3) {
    return 1;
  }
  return *(undefined1 *)(obj + 0x855);
}
