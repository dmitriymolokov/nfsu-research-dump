/* spd-match: close pct=90.00 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004FF1D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_004ff1d0(int obj, int param_1)

{
  int iVar1;

  for (iVar1 = *(int *)(obj + 0x3c); (iVar1 != 0 && (*(int *)(iVar1 + 0xc) != param_1));
      iVar1 = *(int *)(iVar1 + 4)) {
  }
  return;
}
