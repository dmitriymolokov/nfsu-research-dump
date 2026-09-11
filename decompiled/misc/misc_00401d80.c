/* spd-match: close pct=80.00 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00401D80 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_00401d80(int obj, int param_1)

{

  return *(undefined4 *)(obj + 0x28 + param_1 * 4);
}
