/* spd-match: far pct=16.67 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005647B0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_007301cc;
void __fastcall FUN_005647b0(undefined4 val)

{

  DAT_007301cc = val;
  return;
}
