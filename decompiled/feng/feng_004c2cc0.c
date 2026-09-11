/* spd-match: far pct=39.39 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004C2CC0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00417600();
int __cdecl FUN_004c2c90();
int __fastcall FUN_004c2cc0(undefined4 val, int param_1)

{

  FUN_004c2c90(val);
  FUN_00417600();
  *(undefined1 *)(param_1 + 0xe60) = 0;
  *(undefined4 *)(param_1 + 0xe64) = 0;
  return param_1;
}
