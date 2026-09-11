/* spd-match: far pct=26.67 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00424C50 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_00734588;
int __fastcall FUN_00424c50(int val)

{

  return val * 0xc90 + DAT_00734588;
}
