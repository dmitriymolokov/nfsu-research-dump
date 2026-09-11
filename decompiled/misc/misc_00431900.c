/* spd-match: far pct=25.00 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00431900 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00465490();
undefined4 __fastcall FUN_00431900(int obj)

{
  char cVar1;

  if ((*(int *)(obj + 4) != 0) && (*(int *)(obj + 4) != -0x40)) {
    cVar1 = FUN_00465490();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}
