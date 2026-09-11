/* spd-match: far pct=7.41 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00401CB0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00401cb0(undefined4 * obj, undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  uVar2 = param_1[3];
  uVar1 = param_1[2];
  uVar3 = *param_1;
  obj[1] = param_1[1];
  *obj = uVar3;
  obj[3] = uVar2;
  obj[2] = uVar1;
  return;
}
