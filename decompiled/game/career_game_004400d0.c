/* spd-match: close pct=92.86 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004400D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_004400d0(int obj)

{

  if (*(int *)(obj + 0xc) != 0) {
    *(undefined2 *)(*(int *)(obj + 0xc) + 6) = 0xffff;
  }
  return;
}
