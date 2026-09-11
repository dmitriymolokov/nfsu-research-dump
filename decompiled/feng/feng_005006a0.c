/* spd-match: far pct=37.50 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005006A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_005006a0(int obj, undefined4 param_1, int param_2)

{
  int iVar1;

  int iVar2;
  
  iVar1 = *(int *)(obj + 0x1c);
  for (iVar2 = 0; (iVar1 != 0 && (iVar2 != param_2)); iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(iVar1 + 4);
  }
  return;
}
