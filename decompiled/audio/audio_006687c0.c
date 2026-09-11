/* spd-match: far pct=50.00 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_006687C0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

uint __fastcall FUN_006687c0(uint val)

{

  uint uVar1;
  
  if ((val & 0x2000) != 0) {
    return 0xfffffffe;
  }
  uVar1 = val & 0xffff0fff;
  if (uVar1 == 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}
