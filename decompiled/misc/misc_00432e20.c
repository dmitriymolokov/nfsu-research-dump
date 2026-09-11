/* spd-match: close pct=96.67 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00432E20 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_00432e20(int * obj)

{
  int iVar1;

  iVar1 = *obj;
  if ((((iVar1 != 4) && (iVar1 != 5)) && (iVar1 != 0)) && (iVar1 != 6)) {
    return 1;
  }
  return 0;
}
