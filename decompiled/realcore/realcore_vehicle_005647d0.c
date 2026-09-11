/* spd-match: far pct=6.67 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005647D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern unsigned char *DAT_006b5e80;
uint __fastcall FUN_005647d0(uint val, uint param_1, byte *param_2)

{
  byte bVar1;

  uint uVar2;
  
  uVar2 = param_1;
  if (0 < (int)param_1) {
    do {
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      val = val << 8 ^ *(uint *)(&DAT_006b5e80 + (val >> 0x18 ^ (uint)bVar1) * 4);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    for (; 0 < (int)param_1; param_1 = (int)param_1 >> 8) {
      val = val << 8 ^ *(uint *)(&DAT_006b5e80 + ((val >> 0x18 ^ param_1) & 0xff) * 4);
    }
  }
  return ~val;
}
