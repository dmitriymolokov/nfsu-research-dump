/* spd-match: close pct=85.71 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00424F20 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined1 __fastcall FUN_00424f20(int obj)

{

  return *(undefined1 *)(obj + 0x4ac);
}
