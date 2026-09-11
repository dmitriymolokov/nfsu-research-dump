/* spd-match: far pct=60.00 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00424CB0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00424cb0(int * obj, int *param_1)

{

  *obj = *obj + *param_1;
  return;
}
