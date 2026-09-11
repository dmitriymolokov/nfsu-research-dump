/* spd-match: far pct=77.78 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005491B0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __fastcall FUN_005491b0(int obj, int param_1)

{

  return *(int *)(obj + 0x130) + param_1;
}
