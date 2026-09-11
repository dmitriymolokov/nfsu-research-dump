/* spd-match: far pct=35.09 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0051C770 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006f1dd8;
void __fastcall FUN_0051c770(int obj, undefined4 param_1, int param_2)

{

  if (DAT_006f1dd8 != 0) {
    if (param_2 < 0x12) {
      if (*(int **)(obj + 0xc0) != (int *)0x0) {
        (**(code **)(**(int **)(obj + 0xc0) + 0x14))(param_2);
        return;
      }
    }
    else if ((param_2 < 0x53) && (*(int **)(obj + 0xbc) != (int *)0x0)) {
      (**(code **)(**(int **)(obj + 0xbc) + 0x14))(param_2 + -0x12);
    }
  }
  return;
}
