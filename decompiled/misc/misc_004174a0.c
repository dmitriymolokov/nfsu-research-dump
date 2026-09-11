/* spd-match: close pct=80.00 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004174A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_004174a0(int obj)

{

  *(undefined1 *)(obj + 0x20) = 1;
  return;
}
