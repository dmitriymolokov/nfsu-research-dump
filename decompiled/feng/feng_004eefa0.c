/* spd-match: far pct=64.29 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004EEFA0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_004eefa0(int obj, int param_1)

{

  if (obj != 0) {
    if (obj == *(int *)(param_1 + 0x104)) {
      *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(obj + 4);
    }
    if (obj == *(int *)(param_1 + 0x108)) {
      *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(obj + 8);
    }
    if (*(int *)(obj + 8) != 0) {
      *(undefined4 *)(*(int *)(obj + 8) + 4) = *(undefined4 *)(obj + 4);
    }
    if (*(int *)(obj + 4) != 0) {
      *(undefined4 *)(*(int *)(obj + 4) + 8) = *(undefined4 *)(obj + 8);
    }
    *(undefined4 *)(obj + 4) = 0xabadcafe;
    *(undefined4 *)(obj + 8) = 0xabadcafe;
    *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + -1;
  }
  return;
}
