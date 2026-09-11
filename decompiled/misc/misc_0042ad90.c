/* spd-match: far pct=24.53 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0042AD90 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_0042ad90(undefined4 * obj)

{

  *obj = obj[2];
  obj[1] = obj[3];
  *(undefined2 *)(obj + 0xb) = 0;
  obj[0xc] = obj[0xe];
  obj[0xd] = obj[0xf];
  *(undefined2 *)(obj + 0x17) = 0;
  obj[0x18] = obj[0x1a];
  obj[0x19] = obj[0x1b];
  *(undefined2 *)(obj + 0x23) = 0;
  return;
}
