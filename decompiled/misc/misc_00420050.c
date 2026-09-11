/* spd-match: far pct=15.38 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00420050 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00420050(int obj, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)

{

  *(undefined4 *)(obj + 0x2e0) = param_1;
  *(undefined4 *)(obj + 0x2e4) = param_2;
  *(undefined4 *)(obj + 0x2e8) = param_3;
  *(undefined4 *)(obj + 0x2ec) = param_4;
  return;
}
