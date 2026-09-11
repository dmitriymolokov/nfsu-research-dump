/* spd-match: far pct=50.00 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00408210 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_007361bc;
undefined4 __fastcall FUN_00408210(int obj)

{

  return (&DAT_007361bc)[obj];
}
