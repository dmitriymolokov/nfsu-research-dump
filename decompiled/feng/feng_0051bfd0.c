/* spd-match: far pct=45.07 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0051BFD0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern unsigned char *PTR_FUN_006bf634;
void __fastcall FUN_0051bfd0(undefined4 * obj)

{
  undefined4 *puVar1;

  *obj = &PTR_FUN_006bf634;
  puVar1 = obj + 1;
  *puVar1 = puVar1;
  obj[2] = puVar1;
  puVar1 = obj + 3;
  *puVar1 = puVar1;
  obj[4] = puVar1;
  puVar1 = obj + 5;
  *puVar1 = puVar1;
  obj[6] = puVar1;
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
  return;
}
