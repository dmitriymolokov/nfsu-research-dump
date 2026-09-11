/* spd-match: far pct=2.94 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00567D00 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00567d00(char * obj, int param_1, int param_2)

{
  char cVar1;

  if (param_1 != 0) {
    param_2 = param_2 - (int)obj;
    do {
      cVar1 = obj[param_2];
      param_1 = param_1 + -1;
      *obj = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      obj = obj + 1;
    } while (param_1 != 0);
  }
  return;
}
