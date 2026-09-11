/* spd-match: close pct=80.00 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00421A50 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_007361a8;
undefined4 __fastcall FUN_00421a50(int obj)

{

  if ((*(char *)(obj + 0x54) == '\0') && (DAT_007361a8 == 0)) {
    return 0;
  }
  return 1;
}
