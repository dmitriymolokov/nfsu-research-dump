/* spd-match: far pct=2.60 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A3EB0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int unaff_ESI;
uint __fastcall FUN_005a3eb0(uint val, undefined4 param_1, char param_2)

{
  byte bVar1;

  int unaff_ESI;
  
  bVar1 = (byte)val;
  if (bVar1 == 10) {
    if (param_2 == '\x03') {
      return val & 0xffffff00;
    }
  }
  else if (10 < bVar1) {
    return (uint)((*(uint *)(unaff_ESI + 0xc) & 1 << ((bVar1 - 0xb) * '\x03' + param_2 & 0x1f)) != 0
                 );
  }
  return (uint)((*(uint *)(unaff_ESI + 8) & 1 << (bVar1 * '\x03' + param_2 & 0x1f)) != 0);
}
