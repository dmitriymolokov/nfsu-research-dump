/* spd-match: far pct=33.33 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00520430 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00520430(int obj, undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;

  iVar3 = *(int *)(obj + 0x104);
  if (iVar3 != 0) {
    uVar1 = param_1[1];
    uVar2 = param_1[2];
    *(undefined4 *)(iVar3 + 0x230) = *param_1;
    *(undefined4 *)(iVar3 + 0x234) = uVar1;
    *(undefined4 *)(iVar3 + 0x238) = uVar2;
  }
  return;
}
