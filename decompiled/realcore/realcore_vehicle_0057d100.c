/* spd-match: far pct=47.83 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0057D100 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __fastcall FUN_0057d100(int obj)

{

  if (*(int *)(obj + 0xc54) == 1) {
    return 1;
  }
  return (int)*(char *)(obj + 0xd9);
}
