/* spd-match: far pct=8.20 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A3630 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_00735ec1;
undefined4 __fastcall FUN_005a3630(int obj, undefined4 param_1, int param_2, int param_3)

{

  int iVar1;
  
  if (DAT_00735ec1 != '\0') {
    return 1;
  }
  if ((-1 < obj) && (obj < 0x19)) {
    iVar1 = 0;
    do {
      if (*(int *)(obj * 0x90 + 4 + param_3 + iVar1 * 4) == param_2) {
        return 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x24);
  }
  return 0;
}
