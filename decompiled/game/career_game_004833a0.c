/* spd-match: far pct=11.11 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004833A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __fastcall FUN_004833a0(int obj, byte param_1)

{

  if ((*(uint *)(obj + 0x530) & 1 << (param_1 & 0x1f)) != 0) {
    return obj + 0x4e0;
  }
  return obj + 0x90;
}
