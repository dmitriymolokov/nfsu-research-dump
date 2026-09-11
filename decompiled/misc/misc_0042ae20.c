/* spd-match: far pct=26.67 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0042AE20 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_00736160;
int __fastcall FUN_0042ae20(int val)

{

  return val * 0x108 + DAT_00736160;
}
