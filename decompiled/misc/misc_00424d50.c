/* spd-match: far pct=14.29 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00424D50 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

bool __fastcall FUN_00424d50(int obj)

{

  return *(int *)(*(int *)(obj + 0x14) + 4) == 1;
}
