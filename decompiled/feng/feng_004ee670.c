/* spd-match: far pct=59.42 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004EE670 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_004ee670(int obj, int param_1)

{

  if (obj != 0) {
    if (obj == *(int *)(param_1 + 8)) {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(obj + 4);
    }
    if (obj == *(int *)(param_1 + 0xc)) {
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(obj + 8);
    }
    if (*(int *)(obj + 8) != 0) {
      *(undefined4 *)(*(int *)(obj + 8) + 4) = *(undefined4 *)(obj + 4);
    }
    if (*(int *)(obj + 4) != 0) {
      *(undefined4 *)(*(int *)(obj + 4) + 8) = *(undefined4 *)(obj + 8);
    }
    *(undefined4 *)(obj + 4) = 0xabadcafe;
    *(undefined4 *)(obj + 8) = 0xabadcafe;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  }
  return;
}
