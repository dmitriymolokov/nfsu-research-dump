/* spd-match: close pct=80.00 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00424C40 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_00424c40(int obj, int param_1)

{

  return *(undefined4 *)(obj + 0x2c + param_1 * 4);
}
