/* spd-match: far pct=25.00 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00548820 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00548820(undefined1 * obj)

{

  *obj = 0;
  *(undefined4 *)(obj + 0x400) = 0;
  *(undefined4 *)(obj + 0x404) = 0;
  obj[0x408] = 1;
  return;
}
