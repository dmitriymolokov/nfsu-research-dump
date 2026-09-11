/* spd-match: close pct=96.15 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0041F6A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_0041f6a0(int * obj)

{
  int iVar1;

  iVar1 = *obj;
  if (((iVar1 != 5) && (iVar1 != 6)) && (iVar1 != 10)) {
    return 0;
  }
  return 1;
}
