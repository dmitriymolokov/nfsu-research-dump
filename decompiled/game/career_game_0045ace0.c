/* spd-match: far pct=4.41 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0045ACE0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_0045ace0(int * obj, int param_1, int param_2, undefined1 param_3, int param_4)

{

  if (param_1 == 1) {
    if (param_2 != 0) {
      return;
    }
  }
  else {
    if ((param_1 < 2) || (3 < param_1)) {
      if (param_1 != 0) {
        return;
      }
      *obj = 0;
      obj[1] = 0;
      *(undefined1 *)(obj + 3) = 0;
      obj[2] = 0;
      return;
    }
    if (param_2 == 0) {
      return;
    }
  }
  *obj = param_1;
  obj[1] = param_2;
  *(undefined1 *)(obj + 3) = param_3;
  obj[2] = param_4;
  return;
}
