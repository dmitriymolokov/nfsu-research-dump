/* spd-match: far pct=68.42 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004B26D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_004b26d0(int val)

{

  if ((0x3a < val) && (val < 0x73)) {
    return 1;
  }
  return 0;
}
