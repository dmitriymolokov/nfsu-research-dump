/* spd-match: far pct=24.14 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004420E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __fastcall FUN_004420e0(int val, int param_1)

{

  return ((val - param_1) + -0x27c) / 0x88;
}
