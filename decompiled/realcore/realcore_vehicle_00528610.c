/* spd-match: far pct=32.08 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00528610 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0064b7d0();
bool __fastcall FUN_00528610(int obj)

{

  int local_4;
  
  if (*(int **)(obj + 0x238) == (int *)0x0) {
    return true;
  }
  local_4 = 0;
  if (**(int **)(obj + 0x238) != 0) {
    FUN_0064b7d0(&local_4);
  }
  return local_4 == 1;
}
