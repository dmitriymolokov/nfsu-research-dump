/* spd-match: far pct=27.50 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004C2CF0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004c2d20();
int __fastcall FUN_004c2cf0(int obj, undefined4 param_1)

{

  if (*(char *)(obj + 0xe60) == '\0') {
    FUN_004c2d20(param_1);
    *(undefined1 *)(obj + 0xe60) = 1;
  }
  return obj + 0x740;
}
