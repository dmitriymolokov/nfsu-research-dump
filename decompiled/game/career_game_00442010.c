/* spd-match: far pct=11.76 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00442010 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_00736168;
extern int DAT_0073616c;
int __fastcall FUN_00442010(int val)

{

  if (((DAT_00736168 != 0) && (-1 < val)) && (val < DAT_0073616c)) {
    return val * 0xfc + DAT_00736168;
  }
  return 0;
}
