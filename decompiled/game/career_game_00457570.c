/* spd-match: close pct=95.65 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00457570 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_00457570(int obj)

{

  if (*(int *)(obj + 0x3f8) != 0) {
    return *(undefined4 *)(*(int *)(obj + 0x3f8) + 0x1f8);
  }
  return 0x14;
}
