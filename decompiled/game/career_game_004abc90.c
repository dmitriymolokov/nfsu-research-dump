/* spd-match: close pct=83.93 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004ABC90 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_004abc90(int obj)

{

  *(undefined4 *)(obj + 0x2ebe4) = 0;
  *(undefined4 *)(obj + 0x2ebe8) = 4;
  *(undefined4 *)(obj + 0x2ebec) = 4;
  *(undefined4 *)(obj + 0x2ed44) = 0;
  *(undefined1 *)(obj + 0x2ecc0) = 0;
  *(undefined1 *)(obj + 0x2ed00) = 0;
  *(undefined1 *)(obj + 0x2ed20) = 0;
  *(undefined4 *)(obj + 0x2ed40) = 0;
  return;
}
