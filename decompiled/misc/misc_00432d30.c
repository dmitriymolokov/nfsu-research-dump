/* spd-match: far pct=14.29 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00432D30 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00432d30(int obj, undefined1 param_1)

{

  *(undefined1 *)(obj + 0x4d0) = param_1;
  return;
}
