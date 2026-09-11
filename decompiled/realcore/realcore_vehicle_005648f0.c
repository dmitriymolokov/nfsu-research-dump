/* spd-match: far pct=20.37 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005648F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_007349c8;
extern int _DAT_007301d0;
float10 __fastcall FUN_005648f0(int val, int param_1)

{

  undefined4 local_8;
  
  local_8 = val - param_1;
  if (local_8 < 0) {
    local_8 = 0;
  }
  return (float10)(1 << ((byte)DAT_007349c8 & 0x1f)) * (float10)local_8 * (float10)_DAT_007301d0;
}
