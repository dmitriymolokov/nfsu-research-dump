/* spd-match: far pct=5.68 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00442630 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __fastcall FUN_00442630(int val, int param_1, char param_2)

{

  int iVar1;
  
  iVar1 = (val - param_1) + -0x27c;
  if (param_2 == '\0') {
    iVar1 = iVar1 / 0x88;
    if (iVar1 != 0) {
      return iVar1 * 0x88 + 500 + param_1;
    }
  }
  else {
    iVar1 = iVar1 / 0x88;
    if (iVar1 + 1 < (int)*(short *)(param_1 + 0x10)) {
      return iVar1 * 0x88 + 0x304 + param_1;
    }
  }
  return 0;
}
