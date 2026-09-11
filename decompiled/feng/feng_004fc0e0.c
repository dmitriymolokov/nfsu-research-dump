/* spd-match: far pct=71.43 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004FC0E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_004fc0e0(int obj)

{
  char cVar1;

  cVar1 = *(char *)(obj + 4);
  while (cVar1 != '\0') {
    obj = *(int *)(obj + 8);
    cVar1 = *(char *)(obj + 4);
  }
  return *(undefined4 *)(obj + 8);
}
