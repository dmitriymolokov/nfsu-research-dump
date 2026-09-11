/* spd-match: far pct=12.37 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0059CB20 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_0059cb20(int obj, ushort param_1)

{
  int iVar1;

  *(undefined1 *)(obj + 0x18) = 1;
  *(ushort *)(obj + 0x1e) = param_1;
  if (param_1 == 0) {
    *(undefined4 *)(obj + 0xc) = 0;
    *(undefined4 *)(obj + 0x10) = 0;
  }
  else {
    iVar1 = *(int *)(obj + 4);
    if (iVar1 == 0) {
      *(undefined4 *)(obj + 0x10) = 0;
      *(float *)(obj + 0xc) = (float)param_1;
      return;
    }
    if (iVar1 == 1) {
      *(undefined4 *)(obj + 0x10) = 0;
      *(float *)(obj + 0xc) = (float)(int)(param_1 - 1);
      return;
    }
    if (iVar1 == 2) {
      *(undefined4 *)(obj + 0x10) = 0xcb18967f;
      *(undefined4 *)(obj + 0xc) = 0x4b18967f;
      return;
    }
  }
  return;
}
