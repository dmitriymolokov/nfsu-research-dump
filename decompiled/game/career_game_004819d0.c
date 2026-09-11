/* spd-match: far pct=13.33 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004819D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_004819d0(undefined4 * obj)

{

  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = obj + obj[0x32d] * 0x13 + 0x34;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *obj = *puVar2;
    puVar2 = puVar2 + 1;
    obj = obj + 1;
  }
  return;
}
