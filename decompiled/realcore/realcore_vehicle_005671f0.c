/* spd-match: far pct=25.00 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005671F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_005671f0(undefined4 * obj)

{
  undefined4 *puVar1;

  puVar1 = obj + 1;
  *obj = 0;
  *puVar1 = puVar1;
  obj[2] = puVar1;
  return;
}
