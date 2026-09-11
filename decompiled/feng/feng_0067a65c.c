/* spd-match: far pct=6.25 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0067A65C */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_0067a65c(uint val)

{

  if ((val & 0x80000) != 0) {
    return 7;
  }
  return 1;
}
