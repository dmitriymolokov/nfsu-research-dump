/* spd-match: far pct=73.33 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00435FE0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_00736198;
int __fastcall FUN_00435fe0(int obj)

{

  return *(int *)(obj + 0xc) * 0x20 + DAT_00736198;
}
