/* spd-match: far pct=9.23 flags=/O1 /Gr /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00419E40 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00674898();
extern int _DAT_006b7c60;
extern int _DAT_006cca30;
void __fastcall FUN_00419e40(int obj)

{

  undefined4 uVar1;
  undefined4 *puVar2;
  int local_4;
  
  local_4 = 0;
  puVar2 = (undefined4 *)(obj + 0x25f0);
  do {
    fsin((float10)local_4 * (float10)_DAT_006b7c60 * (float10)_DAT_006cca30);
    uVar1 = FUN_00674898();
    local_4 = local_4 + 1;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
  } while (local_4 < 0x168);
  return;
}
