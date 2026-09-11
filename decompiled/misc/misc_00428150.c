/* spd-match: far pct=62.50 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00428150 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00428150(int obj)

{

  (**(code **)(**(int **)(obj + 0x2c) + 0x14))();
  return;
}
