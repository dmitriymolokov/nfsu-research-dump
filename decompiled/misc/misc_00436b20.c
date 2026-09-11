/* spd-match: far pct=68.75 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00436B20 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00436230();
void __fastcall FUN_00436b20(int obj, int param_1)

{

  if (*(char *)(*(int *)(obj + param_1 * 4) + 0x14) != '\0') {
    FUN_00436230();
    return;
  }
  return;
}
