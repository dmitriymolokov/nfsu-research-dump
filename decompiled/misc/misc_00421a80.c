/* spd-match: far pct=41.67 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00421A80 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

bool __fastcall FUN_00421a80(int obj)

{

  return *(char *)(obj + 0x734) != '\0';
}
