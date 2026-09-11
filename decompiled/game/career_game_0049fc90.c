/* spd-match: far pct=8.33 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0049FC90 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00503f60();
void __fastcall FUN_0049fc90(int obj)

{
  undefined4 *puVar1;

  if (obj != 0) {
    puVar1 = *(undefined4 **)(obj + 0x2c);
    FUN_00503f60(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
    return;
  }
  FUN_00503f60(0,0,0,0);
  return;
}
