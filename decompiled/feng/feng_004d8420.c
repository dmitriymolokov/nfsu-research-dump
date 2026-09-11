/* spd-match: far pct=33.33 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004D8420 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_00760268;
extern int DAT_00760269;
void __fastcall FUN_004d8420(int obj)

{

  if (*(char *)(obj + 0x11) == '\x02') {
    DAT_00760268 = 1;
    return;
  }
  if (*(char *)(obj + 0x11) == '\x03') {
    DAT_00760269 = 1;
  }
  return;
}
