/* spd-match: far pct=16.95 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0045CFB0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_0045cfb0(int val, undefined4 param_1, int param_2)

{
  bool bVar1;
  bool bVar2;

  if ((val == 2) || (val == 1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((val == 3) || (val == 1)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (((!bVar1) || (param_2 != 2)) && ((!bVar2 || (param_2 != 3)))) {
    return 0;
  }
  return 1;
}
