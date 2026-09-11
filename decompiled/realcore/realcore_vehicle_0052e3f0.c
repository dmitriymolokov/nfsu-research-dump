/* spd-match: far pct=59.18 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0052E3F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern unsigned char *PTR_FUN_006be798;
void __fastcall FUN_0052e3f0(undefined4 * obj)

{

  *obj = &PTR_FUN_006be798;
  obj[0x2f] = 0;
  obj[0x38] = 0;
  obj[0x39] = 0;
  obj[0x3a] = 0;
  obj[0x3c] = 0;
  obj[0x3e] = 0;
  obj[0x3d] = 0x3f800000;
  obj[0x2a] = 0x7fff;
  obj[0x2e] = 0x3f800000;
  obj[0x16] = 0x4e38;
  obj[0x17] = 0xb1c7;
  obj[0x81] = 0;
  obj[0x33] = 0;
  return;
}
