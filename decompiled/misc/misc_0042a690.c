/* spd-match: far pct=6.90 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0042A690 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

uint __fastcall FUN_0042a690(uint obj)

{

  if (*(int *)(obj + 0x28) == 1) {
    return (uint)(*(int *)(*(int *)(*(int *)(obj + 0x34) + 0x48) + 0x94) != 0);
  }
  return obj & 0xffffff00;
}
