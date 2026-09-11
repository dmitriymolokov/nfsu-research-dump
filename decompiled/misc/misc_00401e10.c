/* spd-match: far pct=6.25 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00401E10 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00404a70();
void __fastcall FUN_00401e10(int obj)

{

  *(undefined4 *)(obj + 0xc) = 0;
  *(undefined4 *)(obj + 8) = 0;
  FUN_00404a70();
  return;
}
