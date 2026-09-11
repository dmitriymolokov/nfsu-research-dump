/* spd-match: close pct=93.33 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00449FF0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __fastcall FUN_00449ff0(int * obj)

{

  if (*obj != 0) {
    return (int)*(short *)(*obj + 10);
  }
  return -1;
}
