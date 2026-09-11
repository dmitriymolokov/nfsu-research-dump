/* spd-match: far pct=66.67 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00589260 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00589260(int obj)

{

  *(int *)obj = obj;
  *(int *)(obj + 4) = obj;
  return;
}
