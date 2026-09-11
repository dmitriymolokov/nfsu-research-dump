/* spd-match: close pct=89.29 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004C5F80 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_004c5f80(int obj)

{

  if ((*(char *)(obj + 0x50) != '\0') &&
     (*(int *)(*(int *)(*(int *)(obj + 0x40) + 8) + 4) != 8)) {
    return 1;
  }
  return 0;
}
