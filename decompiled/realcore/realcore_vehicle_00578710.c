/* spd-match: far pct=53.85 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00578710 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_005791c0();
int __fastcall FUN_00578710(int obj)

{
  int iVar1;

  iVar1 = *(int *)(obj + 0x1c);
  if (*(int *)(iVar1 + 0xe4) != 0) {
    FUN_005791c0();
  }
  return iVar1 + 0x40;
}
