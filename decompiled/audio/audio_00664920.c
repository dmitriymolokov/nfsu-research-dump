/* spd-match: far pct=31.25 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00664920 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00664920(int obj)

{

  *(undefined4 *)(obj + 0x18) = 0;
  *(undefined4 *)(obj + 0x1c) = 0xffffffff;
  *(undefined4 *)(obj + 0x20) = 0;
  return;
}
