/* spd-match: close pct=85.71 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0057F010 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_0057f010(int obj, undefined4 param_1)

{

  *(undefined4 *)(obj + 0x448) = param_1;
  return;
}
