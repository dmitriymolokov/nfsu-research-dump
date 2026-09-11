/* spd-match: close pct=95.45 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0042ADD0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_0042add0(int obj)

{

  if ((*(int *)(obj + 0xc) != 1) && (*(int *)(obj + 0xc) != 0x11)) {
    return 0;
  }
  return 1;
}
