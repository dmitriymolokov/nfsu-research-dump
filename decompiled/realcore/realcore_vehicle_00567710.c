/* spd-match: far pct=11.43 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00567710 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00567710(undefined4 * obj, undefined4 *param_1, undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  uVar1 = *obj;
  uVar2 = obj[1];
  uVar3 = obj[2];
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_1[2] = uVar3;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}
