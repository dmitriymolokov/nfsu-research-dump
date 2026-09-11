/* spd-match: far pct=66.67 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004131F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_004131f0(int obj)

{

  *(undefined4 *)(obj + 8) = 0;
  *(undefined4 *)(obj + 0xc) = 0;
  *(undefined4 *)(obj + 0x10) = 0;
  *(undefined4 *)(obj + 0x14) = 0;
  *(undefined4 *)(obj + 0x18) = 0;
  *(undefined4 *)(obj + 0x1c) = 0;
  return;
}
