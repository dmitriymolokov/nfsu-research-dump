/* spd-match: far pct=12.12 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0048EA30 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern unsigned char *PTR_FUN_006c7ea0;
void __fastcall FUN_0048ea30(undefined4 * obj, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)

{

  obj[1] = param_1;
  obj[2] = param_2;
  *obj = &PTR_FUN_006c7ea0;
  obj[3] = param_3;
  obj[4] = param_4;
  return;
}
