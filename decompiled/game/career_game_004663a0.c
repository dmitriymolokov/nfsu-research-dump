/* spd-match: close pct=97.37 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004663A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_004663a0(int obj)

{

  if ((*(char *)(*(int *)(*(int *)(obj + 100) + 600) + 0x15) == '\0') &&
     (*(char *)(*(int *)(*(int *)(obj + 100) + 0x25c) + 0x15) == '\0')) {
    return 1;
  }
  return 0;
}
