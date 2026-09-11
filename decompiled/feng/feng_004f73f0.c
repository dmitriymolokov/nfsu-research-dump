/* spd-match: far pct=11.54 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004F73F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_004f73f0(int obj, undefined4 param_1, undefined4 param_2)

{
  int iVar1;
  int iVar2;

  if (obj != 0) {
    iVar1 = *(int *)(obj + 0x18);
    iVar2 = *(int *)(obj + 0x2c);
    if (((iVar1 == 1) || (iVar1 == 7)) || (iVar1 == 9)) {
      *(undefined4 *)(iVar2 + 0x38) = param_1;
      *(undefined4 *)(iVar2 + 0x3c) = param_2;
    }
    *(undefined4 *)(iVar2 + 0x38) = param_1;
    *(undefined4 *)(iVar2 + 0x3c) = param_2;
    *(uint *)(obj + 0x1c) = *(uint *)(obj + 0x1c) | 0x400000;
  }
  return;
}
