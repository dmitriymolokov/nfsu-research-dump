/* spd-match: far pct=6.25 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0047F4C0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_00735f54;
undefined4 __fastcall FUN_0047f4c0(int obj)

{

  if ((DAT_00735f54 == 0) && (*(float *)(obj + 0x28) <= *(float *)(obj + 0x2c))) {
    return 1;
  }
  return 0;
}
