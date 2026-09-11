/* spd-match: far pct=13.24 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0042A810 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_0042a810(undefined4 * obj, int param_1, int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  if ((obj != (undefined4 *)0x0) && (param_2 != 0)) {
    *(undefined1 *)(param_1 + 0x88c) = 1;
    uVar1 = obj[2];
    uVar2 = obj[3];
    uVar3 = *obj;
    *(undefined4 *)(param_1 + 0x894) = obj[1];
    *(undefined4 *)(param_1 + 0x890) = uVar3;
    *(undefined4 *)(param_1 + 0x898) = uVar1;
    *(undefined4 *)(param_1 + 0x89c) = uVar2;
    return;
  }
  *(undefined1 *)(param_1 + 0x88c) = 0;
  return;
}
