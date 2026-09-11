/* spd-match: far pct=47.67 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0058B2D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_0058b2d0(undefined4 * obj)

{
  undefined4 *puVar1;

  puVar1 = obj + 7;
  *puVar1 = puVar1;
  obj[8] = puVar1;
  puVar1 = obj + 9;
  *puVar1 = puVar1;
  obj[10] = puVar1;
  puVar1 = obj + 0xb;
  *puVar1 = puVar1;
  obj[0xc] = puVar1;
  puVar1 = obj + 0xd;
  *puVar1 = puVar1;
  obj[0xe] = puVar1;
  puVar1 = obj + 0xf;
  *puVar1 = puVar1;
  obj[0x10] = puVar1;
  puVar1 = obj + 0x11;
  *puVar1 = puVar1;
  obj[0x12] = puVar1;
  puVar1 = obj + 0x13;
  *puVar1 = puVar1;
  obj[0x14] = puVar1;
  obj[5] = 0;
  obj[2] = 1;
  obj[3] = 0;
  obj[4] = 0;
  obj[6] = 0;
  *obj = 0;
  obj[0x15] = 0;
  obj[0x16] = 0;
  return;
}
