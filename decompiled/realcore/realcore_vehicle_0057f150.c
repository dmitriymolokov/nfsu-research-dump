/* spd-match: far pct=55.56 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0057F150 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0057f2b0();
undefined1 __fastcall FUN_0057f150(int obj)

{

  if (*(char *)(obj + 0x424) == -1) {
    FUN_0057f2b0(1);
  }
  return *(undefined1 *)(obj + 0x424);
}
