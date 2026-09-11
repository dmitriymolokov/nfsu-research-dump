/* spd-match: far pct=10.97 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00483220 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int _DAT_006cc7ac;
void __fastcall FUN_00483220(float * obj)

{
  float fVar1;

  fVar1 = obj[2] - *obj;
  obj[6] = obj[1];
  obj[7] = *obj;
  obj[4] = (obj[1] + obj[3]) - (fVar1 + fVar1);
  obj[5] = (fVar1 * _DAT_006cc7ac - obj[3]) - (obj[1] + obj[1]);
  fVar1 = obj[0xe] - obj[0xc];
  obj[0x12] = obj[0xd];
  obj[0x13] = obj[0xc];
  obj[0x10] = (obj[0xd] + obj[0xf]) - (fVar1 + fVar1);
  obj[0x11] = (fVar1 * _DAT_006cc7ac - obj[0xf]) - (obj[0xd] + obj[0xd]);
  fVar1 = obj[0x1a] - obj[0x18];
  obj[0x1e] = obj[0x19];
  obj[0x1f] = obj[0x18];
  obj[0x1c] = (obj[0x19] + obj[0x1b]) - (fVar1 + fVar1);
  obj[0x1d] = (fVar1 * _DAT_006cc7ac - obj[0x1b]) - (obj[0x19] + obj[0x19]);
  return;
}
