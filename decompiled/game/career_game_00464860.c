/* spd-match: far pct=9.30 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00464860 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00464c80();
void __fastcall FUN_00464860(undefined4 * obj, undefined4 param_1, undefined4 param_2, undefined4 param_3)

{

  obj[0xec] = 0;
  obj[0xed] = 0;
  obj[0xee] = 0;
  obj[0xef] = 0;
  obj[1] = param_1;
  obj[2] = param_2;
  *obj = param_3;
  obj[0xf0] = 0;
  obj[0xde] = 0;
  obj[0xdf] = 0;
  obj[8] = 0;
  obj[9] = 0;
  obj[10] = 0;
  obj[4] = 0;
  obj[5] = 0;
  obj[6] = 0;
  obj[0xec] = 0;
  FUN_00464c80();
  return;
}
