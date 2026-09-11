/* spd-match: far pct=63.64 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004A7C70 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004a7990();
void __fastcall FUN_004a7c70(undefined4 val, int param_1)

{

  FUN_004a7990(*(undefined4 *)(param_1 + 0x2c),val);
  return;
}
