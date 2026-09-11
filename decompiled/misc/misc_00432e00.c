/* spd-match: close pct=80.00 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00432E00 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __fastcall FUN_00432e00(int obj)

{

  return (int)*(short *)(obj + 0x10);
}
