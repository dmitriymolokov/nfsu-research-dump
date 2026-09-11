/* spd-match: far pct=79.17 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0042ABF0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00436230();
void __fastcall FUN_0042abf0(int obj)

{

  if (*(char *)(*(int *)(obj + 0x998) + 0x14) != '\0') {
    FUN_00436230(0x3f800000);
  }
  return;
}
