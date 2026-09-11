/* spd-match: close pct=80.49 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00549100 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00549100(undefined1 * obj)

{

  *(undefined4 *)(obj + 300) = 0;
  *(undefined4 *)(obj + 0x130) = 0;
  *(undefined4 *)(obj + 0x134) = 0;
  *(undefined4 *)(obj + 0x138) = 0;
  *(undefined4 *)(obj + 0x13c) = 0;
  obj[0x140] = 0;
  *obj = 0;
  return;
}
