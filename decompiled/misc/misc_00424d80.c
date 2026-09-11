/* spd-match: far pct=23.53 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00424D80 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

bool __fastcall FUN_00424d80(int obj)

{

  return *(char *)(*(int *)(obj + 0x14) + 0x734) != '\0';
}
