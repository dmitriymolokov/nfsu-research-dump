/* spd-match: far pct=61.11 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005671C0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_005671c0(int obj, undefined4 *param_1)

{
  int iVar1;

  iVar1 = *(int *)(obj + 0x18);
  *param_1 = *(undefined4 *)(obj + 0x10);
  *(int *)(obj + 0x18) = iVar1 + -1;
  *(undefined4 **)(obj + 0x10) = param_1;
  return;
}
