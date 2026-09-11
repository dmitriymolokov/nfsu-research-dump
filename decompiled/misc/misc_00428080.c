/* spd-match: far pct=13.79 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00428080 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_0078a368;
void __fastcall FUN_00428080(int obj)

{

  if ((DAT_0078a368 == 0) || (*(int *)(*(int *)(obj + 0x14) + 4) != 2)) {
    *(undefined4 *)(obj + 0x87c) = 1;
  }
  return;
}
