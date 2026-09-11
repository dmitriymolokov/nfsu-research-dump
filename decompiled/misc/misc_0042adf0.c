/* spd-match: far pct=8.00 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0042ADF0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int _DAT_006cc83c;
float10 __fastcall FUN_0042adf0(int val, int param_1)

{

  return (float10)((uint)*(byte *)(param_1 + 0x6a + val) << 0x10) * (float10)_DAT_006cc83c;
}
