/* spd-match: far pct=13.33 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004327C0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __fastcall FUN_004327c0(int val, int param_1)

{

  return val * 0x750 + *(int *)(param_1 + 0x128);
}
