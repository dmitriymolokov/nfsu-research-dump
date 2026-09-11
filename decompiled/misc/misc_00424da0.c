/* spd-match: far pct=20.00 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00424DA0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

bool __fastcall FUN_00424da0(int obj)

{

  return *(int *)(*(int *)(obj + 0x14) + 4) == 3;
}
