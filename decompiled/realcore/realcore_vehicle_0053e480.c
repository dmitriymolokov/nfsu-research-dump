/* spd-match: far pct=9.68 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0053E480 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_0053e480(undefined4 * obj, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)

{
  undefined4 *puVar1;

  puVar1 = obj + 6;
  *puVar1 = puVar1;
  obj[7] = puVar1;
  obj[8] = 0;
  obj[0xb] = 0;
  obj[0xc] = 0;
  obj[0xd] = 0;
  *obj = param_3;
  obj[1] = param_2;
  obj[2] = param_4;
  obj[3] = param_5;
  obj[4] = param_6;
  obj[5] = param_7;
  return;
}
