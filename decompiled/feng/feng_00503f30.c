/* spd-match: far pct=20.00 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00503F30 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00503f30(uint * obj, uint param_1)

{

  obj[3] = param_1 >> 0x18;
  obj[2] = param_1 >> 0x10 & 0xff;
  obj[1] = param_1 >> 8 & 0xff;
  *obj = param_1 & 0xff;
  return;
}
