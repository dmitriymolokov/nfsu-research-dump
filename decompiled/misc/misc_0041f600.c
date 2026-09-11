/* spd-match: close pct=80.00 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0041F600 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_007361a4;
undefined4 __fastcall FUN_0041f600(int obj)

{

  if ((*(char *)(obj + 0x55) == '\0') && (DAT_007361a4 == 0)) {
    return 0;
  }
  return 1;
}
