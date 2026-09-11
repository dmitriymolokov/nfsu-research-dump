/* spd-match: far pct=8.47 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00424EB0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00424eb0(int obj, undefined4 *param_1, undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;

  uVar1 = *(undefined4 *)(obj + 0xf4);
  uVar2 = *(undefined4 *)(obj + 0xf8);
  *param_2 = *(undefined4 *)(obj + 0xf0);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  uVar1 = *(undefined4 *)(obj + 0x104);
  uVar2 = *(undefined4 *)(obj + 0x108);
  *param_1 = *(undefined4 *)(obj + 0x100);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}
