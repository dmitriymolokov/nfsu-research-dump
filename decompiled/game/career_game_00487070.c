/* spd-match: far pct=10.14 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00487070 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00487070(undefined4 * obj, undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;

  *obj = *param_1;
  obj[1] = param_1[1];
  obj[2] = param_1[2];
  obj[3] = param_1[3];
  obj[4] = param_1[4];
  uVar1 = param_1[9];
  uVar2 = param_1[10];
  obj[8] = param_1[8];
  obj[9] = uVar1;
  obj[10] = uVar2;
  uVar1 = param_1[0xd];
  uVar2 = param_1[0xe];
  obj[0xc] = param_1[0xc];
  obj[0xd] = uVar1;
  obj[0xe] = uVar2;
  return;
}
