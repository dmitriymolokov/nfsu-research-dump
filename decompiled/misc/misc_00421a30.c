/* spd-match: close pct=95.45 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00421A30 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_00421a30(int * obj)

{

  if ((*obj != 0) && (*obj != 0x7fffffff)) {
    return 1;
  }
  return 0;
}
