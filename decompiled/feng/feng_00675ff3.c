/* spd-match: far pct=6.90 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.51-arity/va_00675FF3 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall write_multi_char(int * obj, undefined4 param_1, int param_2)

{

  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    write_char();
  } while (*obj != -1);
  return;
}
