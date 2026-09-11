/* spd-match: close pct=87.50 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00424E70 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __fastcall FUN_00424e70(int obj)

{

  return (int)*(char *)(obj + 0x4d0);
}
