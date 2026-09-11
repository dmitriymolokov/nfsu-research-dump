/* spd-match: far pct=19.23 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0041A450 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00419f50();
extern int DAT_0071d890;
void __fastcall FUN_0041a450(int obj)

{

  if ((&DAT_0071d890)[obj] != 0) {
    FUN_00419f50(obj,0);
  }
  return;
}
