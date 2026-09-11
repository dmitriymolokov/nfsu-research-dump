/* spd-match: far pct=35.00 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0057A180 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_0057a180(int obj)

{

  if ((*(int *)(obj + 0x14) != 0) && (-1 < *(char *)(*(int *)(obj + 0x14) + 0x34))) {
    return 1;
  }
  return 0;
}
