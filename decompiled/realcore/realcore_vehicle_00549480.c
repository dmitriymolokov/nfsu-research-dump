/* spd-match: close pct=85.71 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00549480 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_00549480(int obj)

{

  return *(undefined4 *)(obj + 0x2ed44);
}
