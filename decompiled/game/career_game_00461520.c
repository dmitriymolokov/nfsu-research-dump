/* spd-match: far pct=37.21 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00461520 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00461520(int obj, int param_1)

{

  if (param_1 == 3) {
    *(undefined4 *)(obj + 0x1d4) = *(undefined4 *)(*(int *)(obj + 0x26c) + 0x3d8);
    *(undefined4 *)(obj + 0x284) = 3;
  }
  else if (param_1 == 1) {
    *(undefined4 *)(obj + 0x1d4) = *(undefined4 *)(*(int *)(obj + 0x26c) + 0x3d8);
    *(undefined4 *)(obj + 0x284) = 1;
  }
  else {
    *(undefined4 *)(obj + 0x1d4) = 0xffffffff;
    if (param_1 == 0) {
      *(undefined4 *)(obj + 0x284) = 0;
    }
    else {
      *(undefined4 *)(obj + 0x284) = 2;
    }
  }
  if (*(int *)(*(int *)(obj + 0x26c) + 0x28) == 1) {
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(obj + 0x26c) + 0x34) + 0x4c) + 0x60) =
         *(undefined4 *)(obj + 0x284);
  }
  return;
}
