/* spd-match: close pct=96.43 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00424D60 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_00424d60(int obj)

{

  if ((*(int *)(*(int *)(obj + 0x14) + 4) == 1) &&
     (*(char *)(*(int *)(obj + 0x14) + 0x734) == '\0')) {
    return 1;
  }
  return 0;
}
