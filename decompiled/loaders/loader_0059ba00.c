/* spd-match: far pct=13.33 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0059BA00 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_0059ba00(undefined4 * obj, undefined4 param_1, undefined4 param_2, undefined4 param_3)

{

  *obj = param_1;
  obj[1] = param_2;
  obj[2] = param_3;
  return;
}
