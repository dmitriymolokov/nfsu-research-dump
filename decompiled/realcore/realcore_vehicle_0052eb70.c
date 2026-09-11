/* spd-match: close pct=87.27 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0052EB70 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_0052eb70(int obj, ushort param_1)

{

  *(undefined4 *)(obj + 0xac) = 0;
  *(ushort *)(obj + 0xb0) = param_1;
  if (0xbfff < param_1) {
    *(undefined4 *)(obj + 0xac) = 3;
    *(ushort *)(obj + 0xb0) = param_1 + 0x4000;
    return;
  }
  if (0x7fff < param_1) {
    *(undefined4 *)(obj + 0xac) = 2;
    *(ushort *)(obj + 0xb0) = param_1 + 0x8000;
    return;
  }
  if (0x3fff < param_1) {
    *(undefined4 *)(obj + 0xac) = 1;
    *(ushort *)(obj + 0xb0) = param_1 + 0xc000;
  }
  return;
}
