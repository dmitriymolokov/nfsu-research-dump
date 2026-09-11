/* spd-match: far pct=26.67 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00442100 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_00736158;
int __fastcall FUN_00442100(int val)

{

  return val * 0x170 + DAT_00736158;
}
