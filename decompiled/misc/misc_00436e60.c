/* spd-match: far pct=6.98 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00436E60 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00548840();
void __fastcall FUN_00436e60(int obj, int param_1)

{
  int iVar1;

  iVar1 = *(int *)(obj + 0x130);
  if (param_1 < iVar1) {
    param_1 = iVar1;
  }
  if (*(int *)(obj + 0x134) < param_1) {
    param_1 = *(int *)(obj + 0x134);
  }
  FUN_00548840(param_1 - iVar1);
  return;
}
