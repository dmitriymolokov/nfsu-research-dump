/* spd-match: close pct=86.96 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0066B660 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0066b1a0();
undefined4 __fastcall FUN_0066b660(int obj)

{

  if (*(int *)(obj + 0x80) == 3) {
    FUN_0066b1a0(0x14);
    *(undefined4 *)(obj + 0x84) = 0;
    *(undefined4 *)(obj + 0x80) = 4;
  }
  return 0;
}
