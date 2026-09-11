/* spd-match: far pct=29.41 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00539530 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00539530(int obj)

{

  *(undefined4 *)(obj + 0x228) = 2;
  *(undefined4 *)(obj + 0x220) = 2;
  *(undefined4 *)(obj + 0x224) = 2;
  *(undefined4 *)(obj + 0x290) = 0;
  return;
}
