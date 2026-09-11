/* spd-match: close pct=81.82 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00480120 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00480120(int obj)

{

  *(undefined4 *)(obj + 0xcdc) = 0;
  *(undefined4 *)(obj + 0xce0) = 0;
  *(undefined4 *)(obj + 0xce4) = 0;
  *(undefined4 *)(obj + 0xce8) = 0;
  *(undefined4 *)(obj + 0xcec) = 0;
  return;
}
